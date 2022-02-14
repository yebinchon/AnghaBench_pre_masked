
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct elt_loc_list {int loc; struct elt_loc_list* next; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {int val_rtx; } ;
struct TYPE_4__ {struct elt_loc_list* locs; TYPE_1__ u; } ;
typedef TYPE_2__ cselib_val ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5 (const void *VAR_4, const void *VAR_5)
{
  struct elt_loc_list *VAR_6;
  const cselib_val *VAR_7 = (const cselib_val *) VAR_4;
  rtx VAR_8 = (rtx) VAR_5;
  enum machine_mode VAR_9 = FUNC_1 (VAR_8);

  FUNC_3 (FUNC_0 (VAR_8) != VAR_2
       && (VAR_9 != VAR_3 || FUNC_0 (VAR_8) != VAR_1));

  if (VAR_9 != FUNC_1 (VAR_7->u.val_rtx))
    return 0;


  if (FUNC_0 (VAR_8) == VAR_0
      && (FUNC_0 (FUNC_2 (VAR_8, 0)) == VAR_2
   || FUNC_0 (FUNC_2 (VAR_8, 0)) == VAR_1))
    VAR_8 = FUNC_2 (VAR_8, 0);



  for (VAR_6 = VAR_7->locs; VAR_6; VAR_6 = VAR_6->next)
    if (FUNC_4 (VAR_6->loc, VAR_8))
      return 1;

  return 0;
}
