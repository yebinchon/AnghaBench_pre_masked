
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elt_loc_list {int loc; struct elt_loc_list* next; } ;
typedef int rtx ;
struct TYPE_3__ {struct elt_loc_list* locs; } ;
typedef TYPE_1__ cselib_val ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

 int FUNC_6 (int ) ;
 int VAR_2 ;

 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;




 int VAR_3 ;
 int FUNC_10 (int ,int) ;

 int FUNC_11 (int ,int ) ;
 int VAR_4 ;

rtx
FUNC_12 (rtx VAR_5)
{
  cselib_val *VAR_6;
  struct elt_loc_list *VAR_7;






  switch (FUNC_3 (VAR_5))
    {
    case 133:
      return FUNC_7 (VAR_5);

    case 130:
      if (FUNC_5 (FUNC_4 (VAR_5)) < FUNC_5 (VAR_2))
 return 0;

    case 144:
    case 135:
    case 136:
    case 138:
    case 139:
    case 134:
    case 137:
      return FUNC_12 (FUNC_10 (VAR_5, 0));

    case 128:
    case 132:
      {
 rtx VAR_8 = FUNC_12 (FUNC_10 (VAR_5, 0));

 if (VAR_8 != 0 && FUNC_0 (VAR_8))
   VAR_8 = FUNC_11 (VAR_2, VAR_8);

 return VAR_8;
      }

    case 129:
      VAR_6 = FUNC_1 (VAR_5);
      if (!VAR_6)
 return 0;
      for (VAR_7 = VAR_6->locs; VAR_7; VAR_7 = VAR_7->next)
 if ((VAR_5 = FUNC_12 (VAR_7->loc)) != 0)
   return VAR_5;
      return 0;

    case 145:
      VAR_5 = FUNC_10 (VAR_5, 0);
      if (FUNC_3 (VAR_5) != 140 && FUNC_3 (VAR_5) != 141)
 return 0;

    case 142:
    case 140:
    case 141:
      {
 rtx VAR_9 = FUNC_10 (VAR_5, 0);
 rtx VAR_10 = FUNC_10 (VAR_5, 1);
 if (VAR_9 == VAR_4 && FUNC_0 (VAR_10))
   return FUNC_12 (VAR_10);



 if (FUNC_8 (VAR_9) && FUNC_9 (VAR_9))
   return FUNC_12 (VAR_9);

 if (FUNC_8 (VAR_10) && FUNC_9 (VAR_10))
   return FUNC_12 (VAR_10);



 VAR_9 = FUNC_12 (VAR_9);
 VAR_10 = FUNC_12 (VAR_10);




 if (VAR_9 != 0
     && (FUNC_3 (VAR_9) == 131
  || FUNC_3 (VAR_9) == 143
  || (FUNC_3 (VAR_9) == VAR_0
      && FUNC_4 (VAR_9) != VAR_3)))
   return VAR_9;

 if (VAR_10 != 0
     && (FUNC_3 (VAR_10) == 131
  || FUNC_3 (VAR_10) == 143
  || (FUNC_3 (VAR_10) == VAR_0
      && FUNC_4 (VAR_10) != VAR_3)))
   return VAR_10;




 return 0;
      }

    case 146:
      if (FUNC_3 (FUNC_10 (VAR_5, 1)) == VAR_1 && FUNC_6 (FUNC_10 (VAR_5, 1)) != 0)
 return FUNC_12 (FUNC_10 (VAR_5, 0));
      return 0;

    case 131:
    case 143:
      return VAR_5;

    default:
      return 0;
    }
}
