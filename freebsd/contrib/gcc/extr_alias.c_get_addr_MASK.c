
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elt_loc_list {int loc; struct elt_loc_list* next; } ;
typedef int rtx ;
struct TYPE_3__ {struct elt_loc_list* locs; } ;
typedef TYPE_1__ cselib_val ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;

rtx
FUNC_5 (rtx VAR_1)
{
  cselib_val *VAR_2;
  struct elt_loc_list *VAR_3;

  if (FUNC_2 (VAR_1) != VAR_0)
    return VAR_1;
  VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2)
    {
      for (VAR_3 = VAR_2->locs; VAR_3; VAR_3 = VAR_3->next)
 if (FUNC_0 (VAR_3->loc))
   return VAR_3->loc;
      for (VAR_3 = VAR_2->locs; VAR_3; VAR_3 = VAR_3->next)
 if (!FUNC_4 (VAR_3->loc) && !FUNC_3 (VAR_3->loc))
   return VAR_3->loc;
      if (VAR_2->locs)
 return VAR_2->locs->loc;
    }
  return VAR_1;
}
