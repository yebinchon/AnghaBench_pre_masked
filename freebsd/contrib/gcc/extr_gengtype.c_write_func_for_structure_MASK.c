
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef TYPE_6__* type_p ;
struct write_types_data {int param_prefix; int marker_routine; int prefix; } ;
struct walk_type_data {char** prev_val; char* val; int indent; int of; TYPE_6__** param; int bitmap; TYPE_14__* line; TYPE_7__* opt; TYPE_6__* orig_s; struct write_types_data const* cookie; int process_field; } ;
typedef TYPE_7__* options_p ;
typedef int d ;
struct TYPE_24__ {char* info; int name; struct TYPE_24__* next; } ;
struct TYPE_16__ {char* file; } ;
struct TYPE_21__ {int tag; int bitmap; TYPE_14__ line; TYPE_7__* opt; } ;
struct TYPE_22__ {TYPE_4__ s; TYPE_15__* p; } ;
struct TYPE_23__ {scalar_t__ kind; TYPE_5__ u; } ;
struct TYPE_18__ {char* file; } ;
struct TYPE_19__ {TYPE_1__ line; } ;
struct TYPE_20__ {TYPE_2__ s; } ;
struct TYPE_17__ {TYPE_3__ u; } ;


 int NUM_PARAM ;
 scalar_t__ TYPE_POINTER ;
 scalar_t__ TYPE_UNION ;
 scalar_t__ UNION_OR_STRUCT_P (TYPE_15__*) ;
 int error_at_line (TYPE_14__*,char*) ;
 int get_output_file_with_visibility (char const*) ;
 int memset (struct walk_type_data*,int ,int) ;
 int oprintf (int ,char*,...) ;
 int output_escaped_param (struct walk_type_data*,char const*,char*) ;
 int output_mangled_typename (int ,TYPE_6__*) ;
 int output_type_enum (int ,TYPE_6__*) ;
 scalar_t__ strcmp (int ,char*) ;
 int walk_type (TYPE_6__*,struct walk_type_data*) ;
 int write_types_process_field ;

__attribute__((used)) static void
write_func_for_structure (type_p orig_s, type_p s, type_p *param,
     const struct write_types_data *wtd)
{
  const char *fn = s->u.s.line.file;
  int i;
  const char *chain_next = ((void*)0);
  const char *chain_prev = ((void*)0);
  options_p opt;
  struct walk_type_data d;


  for (i = NUM_PARAM - 1; i >= 0; i--)
    if (param && param[i] && param[i]->kind == TYPE_POINTER
 && UNION_OR_STRUCT_P (param[i]->u.p))
      fn = param[i]->u.p->u.s.line.file;

  memset (&d, 0, sizeof (d));
  d.of = get_output_file_with_visibility (fn);

  for (opt = s->u.s.opt; opt; opt = opt->next)
    if (strcmp (opt->name, "chain_next") == 0)
      chain_next = opt->info;
    else if (strcmp (opt->name, "chain_prev") == 0)
      chain_prev = opt->info;

  if (chain_prev != ((void*)0) && chain_next == ((void*)0))
    error_at_line (&s->u.s.line, "chain_prev without chain_next");

  d.process_field = write_types_process_field;
  d.cookie = wtd;
  d.orig_s = orig_s;
  d.opt = s->u.s.opt;
  d.line = &s->u.s.line;
  d.bitmap = s->u.s.bitmap;
  d.param = param;
  d.prev_val[0] = "*x";
  d.prev_val[1] = "not valid postage";
  d.prev_val[3] = "x";
  d.val = "(*x)";

  oprintf (d.of, "\n");
  oprintf (d.of, "void\n");
  if (param == ((void*)0))
    oprintf (d.of, "gt_%sx_%s", wtd->prefix, orig_s->u.s.tag);
  else
    {
      oprintf (d.of, "gt_%s_", wtd->prefix);
      output_mangled_typename (d.of, orig_s);
    }
  oprintf (d.of, " (void *x_p)\n");
  oprintf (d.of, "{\n");
  oprintf (d.of, "  %s %s * %sx = (%s %s *)x_p;\n",
    s->kind == TYPE_UNION ? "union" : "struct", s->u.s.tag,
    chain_next == ((void*)0) ? "const " : "",
    s->kind == TYPE_UNION ? "union" : "struct", s->u.s.tag);
  if (chain_next != ((void*)0))
    oprintf (d.of, "  %s %s * xlimit = x;\n",
      s->kind == TYPE_UNION ? "union" : "struct", s->u.s.tag);
  if (chain_next == ((void*)0))
    {
      oprintf (d.of, "  if (%s (x", wtd->marker_routine);
      if (wtd->param_prefix)
 {
   oprintf (d.of, ", x, gt_%s_", wtd->param_prefix);
   output_mangled_typename (d.of, orig_s);
   output_type_enum (d.of, orig_s);
 }
      oprintf (d.of, "))\n");
    }
  else
    {
      oprintf (d.of, "  while (%s (xlimit", wtd->marker_routine);
      if (wtd->param_prefix)
 {
   oprintf (d.of, ", xlimit, gt_%s_", wtd->param_prefix);
   output_mangled_typename (d.of, orig_s);
   output_type_enum (d.of, orig_s);
 }
      oprintf (d.of, "))\n");
      oprintf (d.of, "   xlimit = (");
      d.prev_val[2] = "*xlimit";
      output_escaped_param (&d, chain_next, "chain_next");
      oprintf (d.of, ");\n");
      if (chain_prev != ((void*)0))
 {
   oprintf (d.of, "  if (x != xlimit)\n");
   oprintf (d.of, "    for (;;)\n");
   oprintf (d.of, "      {\n");
   oprintf (d.of, "        %s %s * const xprev = (",
     s->kind == TYPE_UNION ? "union" : "struct", s->u.s.tag);

   d.prev_val[2] = "*x";
   output_escaped_param (&d, chain_prev, "chain_prev");
   oprintf (d.of, ");\n");
   oprintf (d.of, "        if (xprev == NULL) break;\n");
   oprintf (d.of, "        x = xprev;\n");
   oprintf (d.of, "        (void) %s (xprev",
     wtd->marker_routine);
   if (wtd->param_prefix)
     {
       oprintf (d.of, ", xprev, gt_%s_", wtd->param_prefix);
       output_mangled_typename (d.of, orig_s);
       output_type_enum (d.of, orig_s);
     }
   oprintf (d.of, ");\n");
   oprintf (d.of, "      }\n");
 }
      oprintf (d.of, "  while (x != xlimit)\n");
    }
  oprintf (d.of, "    {\n");

  d.prev_val[2] = "*x";
  d.indent = 6;
  walk_type (s, &d);

  if (chain_next != ((void*)0))
    {
      oprintf (d.of, "      x = (");
      output_escaped_param (&d, chain_next, "chain_next");
      oprintf (d.of, ");\n");
    }

  oprintf (d.of, "    }\n");
  oprintf (d.of, "}\n");
}
