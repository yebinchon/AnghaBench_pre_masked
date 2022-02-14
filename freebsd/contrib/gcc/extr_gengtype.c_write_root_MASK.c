
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_4__* type_p ;
struct fileloc {int dummy; } ;
typedef TYPE_5__* pair_p ;
typedef int outf_p ;
typedef TYPE_6__* options_p ;
struct TYPE_16__ {char const* name; char* info; struct TYPE_16__* next; } ;
struct TYPE_15__ {int name; TYPE_4__* type; TYPE_6__* opt; struct TYPE_15__* next; } ;
struct TYPE_12__ {int tag; TYPE_5__* fields; } ;
struct TYPE_11__ {TYPE_4__* p; int * len; } ;
struct TYPE_13__ {TYPE_2__ s; TYPE_4__* p; TYPE_1__ a; } ;
struct TYPE_14__ {int kind; TYPE_3__ u; } ;



 int const VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct fileloc*,char*,char const*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (char const*,char const*) ;
 char* FUNC_6 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_7 (outf_p VAR_2, pair_p VAR_3, type_p VAR_4, const char *VAR_5, int VAR_6,
     struct fileloc *VAR_7, const char *VAR_8)
{
  switch (VAR_4->kind)
    {
    case 128:
      {
 pair_p VAR_9;
 for (VAR_9 = VAR_4->u.s.fields; VAR_9; VAR_9 = VAR_9->next)
   {
     int VAR_10 = 0;
     const char *VAR_11 = ((void*)0);
     options_p VAR_12;

     for (VAR_12 = VAR_9->opt; VAR_12; VAR_12 = VAR_12->next)
       if (FUNC_5 (VAR_12->name, "skip") == 0)
  VAR_10 = 1;
       else if (FUNC_5 (VAR_12->name, "desc") == 0)
  VAR_11 = VAR_12->info;
       else
  FUNC_1 (VAR_7,
         "field `%s' of global `%s' has unknown option `%s'",
          VAR_9->name, VAR_5, VAR_12->name);

     if (VAR_10)
       continue;
     else if (VAR_11 && VAR_9->type->kind == VAR_1)
       {
  pair_p VAR_13 = ((void*)0);
  pair_p VAR_14;

  for (VAR_14 = VAR_9->type->u.s.fields; VAR_14; VAR_14 = VAR_14->next)
    {
      const char *VAR_15 = ((void*)0);
      options_p VAR_16;

      for (VAR_16 = VAR_14->opt; VAR_16; VAR_16 = VAR_16->next)
        if (FUNC_5 (VAR_16->name, "tag") == 0)
   VAR_15 = VAR_16->info;
      if (VAR_15 == ((void*)0) || FUNC_5 (VAR_15, VAR_11) != 0)
        continue;
      if (VAR_13 != ((void*)0))
        FUNC_1 (VAR_7,
      "both `%s.%s.%s' and `%s.%s.%s' have tag `%s'",
         VAR_5, VAR_9->name, VAR_13->name,
         VAR_5, VAR_9->name, VAR_14->name,
         VAR_15);
      VAR_13 = VAR_14;
    }
  if (VAR_13 != ((void*)0))
    {
      char *VAR_17;
      VAR_17 = FUNC_6 ("%s.%s.%s",
      VAR_5, VAR_9->name, VAR_13->name);
      FUNC_7 (VAR_2, VAR_3, VAR_13->type, VAR_17, 0, VAR_7,
    VAR_8);
      FUNC_2 (VAR_17);
    }
       }
     else if (VAR_11)
       FUNC_1 (VAR_7,
       "global `%s.%s' has `desc' option but is not union",
        VAR_5, VAR_9->name);
     else
       {
  char *VAR_18;
  VAR_18 = FUNC_6 ("%s.%s", VAR_5, VAR_9->name);
  FUNC_7 (VAR_2, VAR_3, VAR_9->type, VAR_18, 0, VAR_7, VAR_8);
  FUNC_2 (VAR_18);
       }
   }
      }
      break;

    case 132:
      {
 char *VAR_19;
 VAR_19 = FUNC_6 ("%s[0]", VAR_5);
 FUNC_7 (VAR_2, VAR_3, VAR_4->u.a.p, VAR_19, VAR_6, VAR_7, VAR_8);
 FUNC_2 (VAR_19);
      }
      break;

    case 131:
      {
 type_p VAR_20, VAR_21;

 FUNC_3 (VAR_2, "  {\n");
 FUNC_3 (VAR_2, "    &%s,\n", VAR_5);
 FUNC_3 (VAR_2, "    1");

 for (VAR_20 = VAR_3->type; VAR_20->kind == 132; VAR_20 = VAR_20->u.a.p)
   if (VAR_20->u.a.len[0])
     FUNC_3 (VAR_2, " * (%s)", VAR_20->u.a.len);
   else if (VAR_20 == VAR_3->type)
     FUNC_3 (VAR_2, " * ARRAY_SIZE (%s)", VAR_3->name);
 FUNC_3 (VAR_2, ",\n");
 FUNC_3 (VAR_2, "    sizeof (%s", VAR_3->name);
 for (VAR_20 = VAR_3->type; VAR_20->kind == 132; VAR_20 = VAR_20->u.a.p)
   FUNC_3 (VAR_2, "[0]");
 FUNC_3 (VAR_2, "),\n");

 VAR_21 = VAR_4->u.p;

 if (! VAR_6 && FUNC_0 (VAR_21))
   {
     FUNC_3 (VAR_2, "    &gt_ggc_mx_%s,\n", VAR_21->u.s.tag);
     FUNC_3 (VAR_2, "    &gt_pch_nx_%s", VAR_21->u.s.tag);
   }
 else if (! VAR_6 && VAR_21->kind == VAR_0)
   {
     FUNC_3 (VAR_2, "    &gt_ggc_m_");
     FUNC_4 (VAR_2, VAR_21);
     FUNC_3 (VAR_2, ",\n    &gt_pch_n_");
     FUNC_4 (VAR_2, VAR_21);
   }
 else if (VAR_6
   && (VAR_21->kind == 131 || FUNC_0 (VAR_21)))
   {
     FUNC_3 (VAR_2, "    &gt_ggc_ma_%s,\n", VAR_5);
     FUNC_3 (VAR_2, "    &gt_pch_na_%s", VAR_5);
   }
 else
   {
     FUNC_1 (VAR_7,
      "global `%s' is pointer to unimplemented type",
      VAR_5);
   }
 if (VAR_8)
   FUNC_3 (VAR_2, ",\n    &%s", VAR_8);
 FUNC_3 (VAR_2, "\n  },\n");
      }
      break;

    case 129:
      {
 FUNC_3 (VAR_2, "  {\n");
 FUNC_3 (VAR_2, "    &%s,\n", VAR_5);
 FUNC_3 (VAR_2, "    1, \n");
 FUNC_3 (VAR_2, "    sizeof (%s),\n", VAR_3->name);
 FUNC_3 (VAR_2, "    &gt_ggc_m_S,\n");
 FUNC_3 (VAR_2, "    (gt_pointer_walker) &gt_pch_n_S\n");
 FUNC_3 (VAR_2, "  },\n");
      }
      break;

    case 130:
      break;

    default:
      FUNC_1 (VAR_7,
       "global `%s' is unimplemented type",
       VAR_5);
    }
}
