
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct def_blocks_d {int def_blocks; int livein_blocks; } ;
typedef enum need_phi_state { ____Placeholder_need_phi_state } need_phi_state ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {int index; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 struct def_blocks_d* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7 (tree VAR_3, basic_block VAR_4)
{
  struct def_blocks_d *VAR_5;
  enum need_phi_state VAR_6 = FUNC_5 (VAR_3);

  VAR_5 = FUNC_4 (VAR_3);


  FUNC_2 (VAR_5->livein_blocks, VAR_4->index);







  if (VAR_6 == VAR_2)
    {
      int VAR_7 = FUNC_1 (VAR_5->def_blocks);

      if (VAR_7 == -1
   || ! FUNC_3 (VAR_0, VAR_4,
                        FUNC_0 (VAR_7)))
 FUNC_6 (VAR_3, VAR_1);
    }
  else
    FUNC_6 (VAR_3, VAR_1);
}
