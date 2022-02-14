
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct elt_list {TYPE_2__* elt; struct elt_list* next; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_8__ {int val_rtx; } ;
struct TYPE_9__ {int value; TYPE_1__ u; struct elt_list* addr_list; } ;
typedef TYPE_2__ cselib_val ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_5 (int ,int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void** FUNC_6 (int ,int ,int ,int ) ;
 TYPE_2__* FUNC_7 (int ,int) ;
 int VAR_5 ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static cselib_val *
FUNC_9 (rtx VAR_6, int VAR_7)
{
  enum machine_mode VAR_8 = FUNC_1 (VAR_6);
  void **VAR_9;
  cselib_val *VAR_10;
  cselib_val *VAR_11;
  struct elt_list *VAR_12;

  if (FUNC_2 (VAR_6) || VAR_8 == VAR_0
      || !VAR_3
      || (FUNC_0 (VAR_8) && VAR_4))
    return 0;


  VAR_10 = FUNC_5 (FUNC_3 (VAR_6, 0), VAR_8, VAR_7);
  if (! VAR_10)
    return 0;


  for (VAR_12 = VAR_10->addr_list; VAR_12; VAR_12 = VAR_12->next)
    if (FUNC_1 (VAR_12->elt->u.val_rtx) == VAR_8)
      return VAR_12->elt;

  if (! VAR_7)
    return 0;

  VAR_11 = FUNC_7 (++VAR_5, VAR_8);
  FUNC_4 (VAR_10, VAR_11, VAR_6);
  VAR_9 = FUNC_6 (VAR_2, FUNC_8 (VAR_8, VAR_6),
       VAR_11->value, VAR_1);
  *VAR_9 = VAR_11;
  return VAR_11;
}
