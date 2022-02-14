
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef TYPE_7__* type_p ;
typedef TYPE_8__* options_p ;
struct TYPE_34__ {char const* name; char* info; struct TYPE_34__* next; } ;
struct TYPE_31__ {int len; TYPE_4__* p; } ;
struct TYPE_32__ {char const* sc; TYPE_5__ a; TYPE_7__* p; } ;
struct TYPE_33__ {scalar_t__ kind; TYPE_6__ u; } ;
struct TYPE_29__ {TYPE_2__* p; } ;
struct TYPE_30__ {scalar_t__ kind; TYPE_3__ u; } ;
struct TYPE_27__ {char const* sc; } ;
struct TYPE_28__ {scalar_t__ kind; TYPE_1__ u; } ;


 scalar_t__ FUNC_0 (char const) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_7__*) ;
 TYPE_7__* FUNC_2 (TYPE_7__*,TYPE_8__*) ;
 TYPE_7__* FUNC_3 (TYPE_7__*,TYPE_8__*) ;
 TYPE_7__* FUNC_4 (TYPE_7__*,int ) ;
 TYPE_7__* FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int *,char*,char const*) ;
 TYPE_7__* FUNC_7 (TYPE_7__*,TYPE_7__**) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 TYPE_7__ VAR_5 ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;

type_p
FUNC_10 (type_p VAR_6, options_p VAR_7)
{
  int VAR_8 = 0;
  const int VAR_9 = VAR_6->kind == VAR_2;
  type_p VAR_10[VAR_0];
  int VAR_11 = 0;
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
    VAR_10[VAR_12] = ((void*)0);

  for (; VAR_7; VAR_7 = VAR_7->next)
    if (FUNC_8 (VAR_7->name, "length") == 0)
      VAR_8 = 1;
    else if (FUNC_8 (VAR_7->name, "param_is") == 0
      || (FUNC_9 (VAR_7->name, "param", 5) == 0
   && FUNC_0 (VAR_7->name[5])
   && FUNC_8 (VAR_7->name + 6, "_is") == 0))
      {
 int VAR_13 = FUNC_0 (VAR_7->name[5]) ? VAR_7->name[5] - '0' : 0;

 if (! FUNC_1 (VAR_6)
     && (VAR_6->kind != VAR_2 || ! FUNC_1 (VAR_6->u.p)))
   {
     FUNC_6 (&VAR_4,
   "option `%s' may only be applied to structures or structure pointers",
      VAR_7->name);
     return VAR_6;
   }

 VAR_11 = 1;
 if (VAR_10[VAR_13] != ((void*)0))
   FUNC_6 (&VAR_4, "duplicate `%s' option", VAR_7->name);
 if (! FUNC_0 (VAR_7->name[5]))
   VAR_10[VAR_13] = FUNC_5 ((type_p) VAR_7->info);
 else
   VAR_10[VAR_13] = (type_p) VAR_7->info;
      }
    else if (FUNC_8 (VAR_7->name, "special") == 0)
      {
 const char *VAR_14 = VAR_7->info;
 if (FUNC_8 (VAR_14, "tree_exp") == 0)
   VAR_6 = FUNC_3 (VAR_6, VAR_7);
 else if (FUNC_8 (VAR_14, "rtx_def") == 0)
   VAR_6 = FUNC_2 (VAR_6, VAR_7);
 else
   FUNC_6 (&VAR_4, "unknown special `%s'", VAR_14);
      }

  if (VAR_11)
    {
      type_p VAR_15;

      if (VAR_9)
 VAR_6 = VAR_6->u.p;
      VAR_15 = FUNC_7 (VAR_6, VAR_10);
      VAR_6 = VAR_9 ? FUNC_5 (VAR_15) : VAR_15;
    }

  if (! VAR_8
      && VAR_9
      && VAR_6->u.p->kind == VAR_3
      && (FUNC_8 (VAR_6->u.p->u.sc, "char") == 0
   || FUNC_8 (VAR_6->u.p->u.sc, "unsigned char") == 0))
    return &VAR_5;
  if (VAR_6->kind == VAR_1 && VAR_6->u.a.p->kind == VAR_2
      && VAR_6->u.a.p->u.p->kind == VAR_3
      && (FUNC_8 (VAR_6->u.a.p->u.p->u.sc, "char") == 0
   || FUNC_8 (VAR_6->u.a.p->u.p->u.sc, "unsigned char") == 0))
    return FUNC_4 (&VAR_5, VAR_6->u.a.len);

  return VAR_6;
}
