
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int edge ;
typedef int basic_block ;
struct TYPE_2__ {int (* lv_adjust_loop_header_phi ) (int ,int ,int ,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void
FUNC_1 (basic_block VAR_1, basic_block VAR_2,
      basic_block VAR_3, edge VAR_4)
{
  if (VAR_0->lv_adjust_loop_header_phi)
    VAR_0->lv_adjust_loop_header_phi (VAR_1, VAR_2, VAR_3, VAR_4);
}
