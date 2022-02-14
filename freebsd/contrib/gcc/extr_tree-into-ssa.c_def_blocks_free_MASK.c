
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct def_blocks_d {int livein_blocks; int phi_blocks; int def_blocks; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct def_blocks_d*) ;

__attribute__((used)) static void
FUNC_2 (void *VAR_0)
{
  struct def_blocks_d *VAR_1 = (struct def_blocks_d *) VAR_0;
  FUNC_0 (VAR_1->def_blocks);
  FUNC_0 (VAR_1->phi_blocks);
  FUNC_0 (VAR_1->livein_blocks);
  FUNC_1 (VAR_1);
}
