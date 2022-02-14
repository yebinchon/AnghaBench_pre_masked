
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(vortex_t * VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {

  FUNC_1(VAR_4->mmio, (VAR_1 + (VAR_5 << 2)), -VAR_5);
  FUNC_2(2);
 }
 if (0) {
  FUNC_1(VAR_4->mmio, VAR_2, 0x8068);
  FUNC_2(1);
  FUNC_1(VAR_4->mmio, VAR_2, 0x00e8);
  FUNC_2(1);
 } else {
  FUNC_1(VAR_4->mmio, VAR_2, 0x00a8);
  FUNC_2(2);
  FUNC_1(VAR_4->mmio, VAR_2, 0x80a8);
  FUNC_2(2);
  FUNC_1(VAR_4->mmio, VAR_2, 0x80e8);
  FUNC_2(2);
  FUNC_1(VAR_4->mmio, VAR_2, 0x80a8);
  FUNC_2(2);
  FUNC_1(VAR_4->mmio, VAR_2, 0x00a8);
  FUNC_2(2);
  FUNC_1(VAR_4->mmio, VAR_2, 0x00e8);
 }
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  FUNC_1(VAR_4->mmio, (VAR_1 + (VAR_5 << 2)), -VAR_5);
  FUNC_2(5);
 }
 FUNC_1(VAR_4->mmio, VAR_2, 0xe8);
 FUNC_2(1);

 FUNC_1(VAR_4->mmio, VAR_3,
  FUNC_0(VAR_4->mmio, VAR_3) | VAR_0);
}
