
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct def_blocks_d {int phi_blocks; int def_blocks; } ;
typedef enum need_phi_state { ____Placeholder_need_phi_state } need_phi_state ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct def_blocks_d* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4 (tree VAR_3, basic_block VAR_4, bool VAR_5)
{
  struct def_blocks_d *VAR_6;
  enum need_phi_state VAR_7;

  VAR_7 = FUNC_2 (VAR_3);
  VAR_6 = FUNC_1 (VAR_3);


  FUNC_0 (VAR_6->def_blocks, VAR_4->index);
  if (VAR_5)
    FUNC_0 (VAR_6->phi_blocks, VAR_4->index);
  if (VAR_7 == VAR_2)
    FUNC_3 (VAR_3, VAR_1);
  else
    FUNC_3 (VAR_3, VAR_0);
}
