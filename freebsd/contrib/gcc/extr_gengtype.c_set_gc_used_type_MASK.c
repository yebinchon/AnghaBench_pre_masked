
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_5__* type_p ;
typedef TYPE_6__* pair_p ;
typedef enum gc_used_enum { ____Placeholder_gc_used_enum } gc_used_enum ;
struct TYPE_18__ {TYPE_5__* type; int opt; struct TYPE_18__* next; } ;
struct TYPE_15__ {TYPE_5__** param; TYPE_5__* stru; } ;
struct TYPE_14__ {TYPE_5__* lang_struct; TYPE_6__* fields; int opt; } ;
struct TYPE_13__ {TYPE_5__* p; } ;
struct TYPE_16__ {TYPE_3__ param_struct; TYPE_2__ s; TYPE_1__ a; TYPE_5__* p; } ;
struct TYPE_17__ {int gc_used; int kind; TYPE_4__ u; struct TYPE_17__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 TYPE_5__* FUNC_0 (TYPE_5__*,TYPE_5__**) ;
 int FUNC_1 (int ,int,int*,int*,int*,TYPE_5__**) ;

__attribute__((used)) static void
FUNC_2 (type_p VAR_5, enum gc_used_enum VAR_6, type_p VAR_7[VAR_4])
{
  if (VAR_5->gc_used >= VAR_6)
    return;

  VAR_5->gc_used = VAR_6;

  switch (VAR_5->kind)
    {
    case 129:
    case 128:
      {
 pair_p VAR_8;
 int VAR_9;
 type_p VAR_10;

 FUNC_1 (VAR_5->u.s.opt, VAR_6, &VAR_9, &VAR_9, &VAR_9,
       &VAR_10);

 for (VAR_8 = VAR_5->u.s.fields; VAR_8; VAR_8 = VAR_8->next)
   {
     int VAR_11 = 0;
     int VAR_12 = 0;
     int VAR_13 = 0;
     type_p VAR_14 = ((void*)0);
     FUNC_1 (VAR_8->opt, VAR_6, &VAR_11, &VAR_12,
    &VAR_13, &VAR_14);

     if (VAR_14 && VAR_8->type->kind == 130)
       FUNC_2 (VAR_14, VAR_1,
    VAR_12 ? VAR_7 : ((void*)0));
     else if (VAR_13 && VAR_8->type->kind == 130)
       FUNC_2 (VAR_8->type->u.p, VAR_3, ((void*)0));
     else if (VAR_11 && VAR_8->type->kind == 130)
       FUNC_2 (VAR_8->type->u.p, VAR_0, ((void*)0));
     else if (VAR_12 && VAR_8->type->kind == 130 && VAR_7)
       FUNC_2 (FUNC_0 (VAR_8->type->u.p, VAR_7),
    VAR_1, ((void*)0));
     else
       FUNC_2 (VAR_8->type, VAR_3, VAR_12 ? VAR_7 : ((void*)0));
   }
 break;
      }

    case 130:
      FUNC_2 (VAR_5->u.p, VAR_1, ((void*)0));
      break;

    case 133:
      FUNC_2 (VAR_5->u.a.p, VAR_3, VAR_7);
      break;

    case 132:
      for (VAR_5 = VAR_5->u.s.lang_struct; VAR_5; VAR_5 = VAR_5->next)
 FUNC_2 (VAR_5, VAR_6, VAR_7);
      break;

    case 131:
      {
 int VAR_15;
 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
   if (VAR_5->u.param_struct.param[VAR_15] != 0)
     FUNC_2 (VAR_5->u.param_struct.param[VAR_15], VAR_3, ((void*)0));
      }
      if (VAR_5->u.param_struct.stru->gc_used == VAR_1)
 VAR_6 = VAR_1;
      else
 VAR_6 = VAR_3;
      VAR_5->u.param_struct.stru->gc_used = VAR_2;
      FUNC_2 (VAR_5->u.param_struct.stru, VAR_6,
   VAR_5->u.param_struct.param);
      break;

    default:
      break;
    }
}
