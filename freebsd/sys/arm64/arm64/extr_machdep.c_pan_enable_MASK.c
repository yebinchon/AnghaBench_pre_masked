
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void
FUNC_2(void)
{
 if (VAR_1) {
  FUNC_1(VAR_2,
      FUNC_0(VAR_2) & ~VAR_0);
  __asm __volatile(".inst 0xd500409f | (0x1 << 8)");
 }
}
