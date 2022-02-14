
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct elt_loc_list {int loc; struct elt_loc_list* next; } ;
typedef int rtx ;
struct TYPE_8__ {int val_rtx; } ;
struct TYPE_9__ {struct TYPE_9__* next_containing_mem; TYPE_1__ u; struct elt_loc_list* locs; int addr_list; } ;
typedef TYPE_2__ cselib_val ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 struct elt_loc_list* FUNC_4 (struct elt_loc_list*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6 (cselib_val *VAR_1, cselib_val *VAR_2, rtx VAR_3)
{
  struct elt_loc_list *VAR_4;


  for (VAR_4 = VAR_2->locs; VAR_4; VAR_4 = VAR_4->next)
    if (FUNC_1 (VAR_4->loc)
 && FUNC_0 (FUNC_2 (VAR_4->loc, 0)) == VAR_1)
      return;

  VAR_1->addr_list = FUNC_3 (VAR_1->addr_list, VAR_2);
  VAR_2->locs
    = FUNC_4 (VAR_2->locs,
   FUNC_5 (VAR_3, VAR_1->u.val_rtx));
  if (VAR_2->next_containing_mem == ((void*)0))
    {
      VAR_2->next_containing_mem = VAR_0;
      VAR_0 = VAR_2;
    }
}
