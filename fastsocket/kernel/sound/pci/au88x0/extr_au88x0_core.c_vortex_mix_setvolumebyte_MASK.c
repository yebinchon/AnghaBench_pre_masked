
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,unsigned char) ;

__attribute__((used)) static void
FUNC_2(vortex_t * VAR_2, unsigned char VAR_3,
    unsigned char VAR_4)
{
 int VAR_5;
 FUNC_1(VAR_2->mmio, VAR_0 + (VAR_3 << 2), VAR_4);
 if (1) {
  VAR_5 = FUNC_0(VAR_2->mmio, VAR_1 + (VAR_3 << 2));
  if ((VAR_5 != 0x80) || (VAR_4 == 0x80))
   return;
 }
 FUNC_1(VAR_2->mmio, VAR_1 + (VAR_3 << 2), VAR_4);
}
