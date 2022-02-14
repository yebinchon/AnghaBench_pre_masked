
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef TYPE_4__* type_p ;
typedef TYPE_5__* options_p ;
struct TYPE_18__ {int info; int name; struct TYPE_18__* next; } ;
struct TYPE_13__ {int * file; } ;
struct TYPE_15__ {char* tag; TYPE_4__* lang_struct; TYPE_12__ line; TYPE_5__* opt; } ;
struct TYPE_14__ {TYPE_4__* stru; TYPE_4__** param; } ;
struct TYPE_16__ {TYPE_2__ s; TYPE_1__ param_struct; } ;
struct TYPE_17__ {scalar_t__ gc_used; scalar_t__ kind; struct TYPE_17__* next; TYPE_3__ u; } ;


 scalar_t__ GC_MAYBE_POINTED_TO ;
 scalar_t__ GC_POINTED_TO ;
 scalar_t__ TYPE_LANG_STRUCT ;
 scalar_t__ TYPE_STRUCT ;
 scalar_t__ TYPE_UNION ;
 int error_at_line (TYPE_12__*,char*) ;
 int fprintf (int ,char*,char*) ;
 int header_file ;
 int oprintf (int ,char*) ;
 int output_mangled_typename (int ,TYPE_4__*) ;
 int stderr ;
 scalar_t__ strcmp (int ,char*) ;
 int write_local_func_for_structure (TYPE_4__*,TYPE_4__*,TYPE_4__**) ;

__attribute__((used)) static void
write_local (type_p structures, type_p param_structs)
{
  type_p s;

  oprintf (header_file, "\n/* Local pointer-walking routines.  */\n");
  for (s = structures; s; s = s->next)
    if (s->gc_used == GC_POINTED_TO
 || s->gc_used == GC_MAYBE_POINTED_TO)
      {
 options_p opt;

 if (s->u.s.line.file == ((void*)0))
   continue;

 for (opt = s->u.s.opt; opt; opt = opt->next)
   if (strcmp (opt->name, "ptr_alias") == 0)
     {
       type_p t = (type_p) opt->info;
       if (t->kind == TYPE_STRUCT
    || t->kind == TYPE_UNION
    || t->kind == TYPE_LANG_STRUCT)
  {
    oprintf (header_file, "#define gt_pch_p_");
    output_mangled_typename (header_file, s);
    oprintf (header_file, " gt_pch_p_");
    output_mangled_typename (header_file, t);
    oprintf (header_file, "\n");
  }
       else
  error_at_line (&s->u.s.line,
          "structure alias is not a structure");
       break;
     }
 if (opt)
   continue;


 oprintf (header_file, "extern void gt_pch_p_");
 output_mangled_typename (header_file, s);
 oprintf (header_file,
  "\n    (void *, void *, gt_pointer_operator, void *);\n");

 if (s->kind == TYPE_LANG_STRUCT)
   {
     type_p ss;
     for (ss = s->u.s.lang_struct; ss; ss = ss->next)
       write_local_func_for_structure (s, ss, ((void*)0));
   }
 else
   write_local_func_for_structure (s, s, ((void*)0));
      }

  for (s = param_structs; s; s = s->next)
    if (s->gc_used == GC_POINTED_TO)
      {
 type_p * param = s->u.param_struct.param;
 type_p stru = s->u.param_struct.stru;


 oprintf (header_file, "extern void gt_pch_p_");
 output_mangled_typename (header_file, s);
 oprintf (header_file,
  "\n    (void *, void *, gt_pointer_operator, void *);\n");

 if (stru->u.s.line.file == ((void*)0))
   {
     fprintf (stderr, "warning: structure `%s' used but not defined\n",
       s->u.s.tag);
     continue;
   }

 if (stru->kind == TYPE_LANG_STRUCT)
   {
     type_p ss;
     for (ss = stru->u.s.lang_struct; ss; ss = ss->next)
       write_local_func_for_structure (s, ss, param);
   }
 else
   write_local_func_for_structure (s, stru, param);
      }
}
