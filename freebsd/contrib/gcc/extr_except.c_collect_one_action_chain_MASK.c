
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_7__ {int filter; } ;
struct TYPE_6__ {int filter_list; int * type_list; struct eh_region* prev_catch; } ;
struct TYPE_5__ {struct eh_region* last_catch; } ;
struct TYPE_8__ {TYPE_3__ allowed; TYPE_2__ catch; TYPE_1__ try; } ;
struct eh_region {int type; struct eh_region* outer; TYPE_4__ u; } ;
typedef int htab_t ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5 (htab_t VAR_0, struct eh_region *VAR_1)
{
  struct eh_region *VAR_2;
  int VAR_3;



  if (VAR_1 == ((void*)0))
    return -1;

  switch (VAR_1->type)
    {
    case 131:






      VAR_3 = FUNC_5 (VAR_0, VAR_1->outer);
      if (VAR_3 <= 0)
 return 0;
      for (VAR_2 = VAR_1->outer; VAR_2 ; VAR_2 = VAR_2->outer)
 if (VAR_2->type == 131)
   return VAR_3;
      return FUNC_3 (VAR_0, 0, VAR_3);

    case 128:




      VAR_3 = -3;
      for (VAR_2 = VAR_1->u.try.last_catch; VAR_2 ; VAR_2 = VAR_2->u.catch.prev_catch)
 {
   if (VAR_2->u.catch.type_list == ((void*)0))
     {


       int VAR_4
  = FUNC_1 (FUNC_2 (VAR_2->u.catch.filter_list));

       VAR_3 = FUNC_3 (VAR_0, VAR_4, 0);
     }
   else
     {


       tree VAR_5;

       if (VAR_3 == -3)
  {
    VAR_3 = FUNC_5 (VAR_0, VAR_1->outer);


    if (VAR_3 == -1)
      VAR_3 = 0;




    else if (VAR_3 <= 0)
      VAR_3 = FUNC_3 (VAR_0, 0, 0);
  }

       VAR_5 = VAR_2->u.catch.filter_list;
       for (; VAR_5; VAR_5 = FUNC_0 (VAR_5))
  {
    int VAR_6 = FUNC_1 (FUNC_2 (VAR_5));
    VAR_3 = FUNC_3 (VAR_0, VAR_6, VAR_3);
  }
     }
 }
      return VAR_3;

    case 133:


      VAR_3 = FUNC_5 (VAR_0, VAR_1->outer);


      if (VAR_3 == -1)
 VAR_3 = 0;




      else if (VAR_3 <= 0)
 VAR_3 = FUNC_3 (VAR_0, 0, 0);

      return FUNC_3 (VAR_0, VAR_1->u.allowed.filter, VAR_3);

    case 130:




      return -2;

    case 132:
    case 129:


      return FUNC_5 (VAR_0, VAR_1->outer);

    default:
      FUNC_4 ();
    }
}
