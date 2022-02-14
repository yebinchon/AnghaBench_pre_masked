
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_gpio {int active_val; int inactive_val; int addr; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct pmac_gpio*,int) ;

__attribute__((used)) static void FUNC_2(struct pmac_gpio *VAR_0, int VAR_1)
{
 if (! VAR_0->addr)
  return;
 VAR_1 = VAR_1 ? VAR_0->active_val : VAR_0->inactive_val;
 FUNC_1(VAR_0, VAR_1);
 FUNC_0("(I) gpio %x write %d\n", VAR_0->addr, VAR_1);
}
