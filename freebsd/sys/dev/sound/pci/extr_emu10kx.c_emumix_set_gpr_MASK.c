
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_sc_info {int dbg_level; int dev; } ;
typedef int int32_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct emu_sc_info*,int ,int ,int ) ;
 int FUNC_3 () ;

void
FUNC_4(struct emu_sc_info *VAR_0, unsigned VAR_1, int32_t VAR_2)
{
 if (VAR_0->dbg_level > 1)
  if (VAR_1 == 0) {
   FUNC_1(VAR_0->dev, "Zero gpr write access\n");



   return;
   }

 FUNC_2(VAR_0, 0, FUNC_0(VAR_1), VAR_2);
}
