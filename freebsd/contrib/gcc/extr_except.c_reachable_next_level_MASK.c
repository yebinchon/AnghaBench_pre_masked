
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * tree ;
struct reachable_info {int saw_any_handlers; int * types_allowed; int * types_caught; } ;
struct TYPE_8__ {int * type_list; } ;
struct TYPE_7__ {int * type_list; struct eh_region* next_catch; } ;
struct TYPE_6__ {struct eh_region* catch; } ;
struct TYPE_9__ {TYPE_3__ allowed; TYPE_2__ catch; TYPE_1__ try; } ;
struct eh_region {int type; TYPE_4__ u; } ;
typedef enum reachable_code { ____Placeholder_reachable_code } reachable_code ;
struct TYPE_10__ {int after_inlining; } ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (struct reachable_info*,struct eh_region*,struct eh_region*) ;
 TYPE_5__* VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 void* FUNC_7 (int *,int *,int *) ;

__attribute__((used)) static enum reachable_code
FUNC_8 (struct eh_region *VAR_6, tree VAR_7,
        struct reachable_info *VAR_8)
{
  switch (VAR_6->type)
    {
    case 132:



      FUNC_2 (VAR_8, VAR_6, VAR_6);
      return VAR_3;

    case 129:
      {
 struct eh_region *VAR_9;
 enum reachable_code VAR_10 = VAR_4;

 for (VAR_9 = VAR_6->u.try.catch; VAR_9 ; VAR_9 = VAR_9->u.catch.next_catch)
   {

     if (VAR_9->u.catch.type_list == ((void*)0))
       {
  FUNC_2 (VAR_8, VAR_6, VAR_9);
  return VAR_2;
       }

     if (VAR_7)
       {

  tree VAR_11 = VAR_9->u.catch.type_list;

  for (; VAR_11; VAR_11 = FUNC_0 (VAR_11))
    {
      tree VAR_12 = FUNC_1 (VAR_11);

      if (VAR_12 == VAR_7
   || (&FUNC_5
       && FUNC_5) (VAR_12, VAR_7)))
        {
   FUNC_2 (VAR_8, VAR_6, VAR_9);
   return VAR_2;
        }
    }



  if (&FUNC_5)
    return VAR_4;
       }
     if (! VAR_8)
       VAR_10 = VAR_3;
     else
       {
  tree VAR_13 = VAR_9->u.catch.type_list;
  bool VAR_14 = 0;



  for (; VAR_13; VAR_13 = FUNC_0 (VAR_13))
    {
      tree VAR_15 = FUNC_1 (VAR_13);

      if (! FUNC_3 (VAR_8->types_caught, VAR_15))
        {
   VAR_8->types_caught
     = FUNC_7 (((void*)0), VAR_15, VAR_8->types_caught);

   VAR_14 = 1;
        }
    }

  if (VAR_14)
    {
      FUNC_2 (VAR_8, VAR_6, VAR_9);



      VAR_10 = VAR_3;
    }
       }
   }

 return VAR_10;
      }

    case 134:

      if (VAR_6->u.allowed.type_list == VAR_0)
 {
   FUNC_2 (VAR_8, VAR_6, VAR_6);
   return VAR_2;
 }



      if (VAR_8)
 VAR_8->types_allowed = FUNC_7 (VAR_0,
      VAR_6->u.allowed.type_list,
      VAR_8->types_allowed);




      if (VAR_7 && &FUNC_5)
 {
   if (FUNC_3 (VAR_6->u.allowed.type_list, VAR_7))
     return VAR_4;
   else
     {
       FUNC_2 (VAR_8, VAR_6, VAR_6);
       return VAR_2;
     }
 }

      FUNC_2 (VAR_8, VAR_6, VAR_6);
      return VAR_3;

    case 133:

      return VAR_4;

    case 131:
      if ((VAR_8 && VAR_8->saw_any_handlers) || !VAR_5->after_inlining)
 {
   FUNC_2 (VAR_8, VAR_6, VAR_6);
   return VAR_2;
 }
      else
 return VAR_1;

    case 130:
    case 128:

      FUNC_4 ();
      break;
    default:
      FUNC_4 ();
    }
}
