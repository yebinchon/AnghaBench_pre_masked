
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_2(vortex_t * VAR_12)
{
 u32 VAR_13;
 int VAR_14;


 FUNC_1(VAR_10, 0, VAR_1 * sizeof(int));
 FUNC_1(VAR_11, 0, VAR_1 * sizeof(int));

 VAR_13 = VAR_7 + 0x17c;
 for (VAR_14 = 0x5f; VAR_14 >= 0; VAR_14--) {
  FUNC_0(VAR_12->mmio, VAR_13, 0);
  VAR_13 -= 4;
 }
 VAR_13 = VAR_4 + 0x1fc;
 for (VAR_14 = 0x7f; VAR_14 >= 0; VAR_14--) {
  FUNC_0(VAR_12->mmio, VAR_13, 0);
  VAR_13 -= 4;
 }
 VAR_13 = VAR_7 + 0x17c;
 for (VAR_14 = 0x5f; VAR_14 >= 0; VAR_14--) {
  FUNC_0(VAR_12->mmio, VAR_13, 0);
  VAR_13 -= 4;
 }
 VAR_13 = VAR_5 + 0x7fc;
 for (VAR_14 = 0x1ff; VAR_14 >= 0; VAR_14--) {
  FUNC_0(VAR_12->mmio, VAR_13, 0x80);
  VAR_13 -= 4;
 }
 VAR_13 = VAR_8 + 0x3c;
 for (VAR_14 = 0xf; VAR_14 >= 0; VAR_14--) {
  FUNC_0(VAR_12->mmio, VAR_13, 0x80);
  VAR_13 -= 4;
 }
 VAR_13 = VAR_6 + 0x7fc;
 for (VAR_14 = 0x1ff; VAR_14 >= 0; VAR_14--) {
  FUNC_0(VAR_12->mmio, VAR_13, 0x80);
  VAR_13 -= 4;
 }
 VAR_13 = VAR_9 + 0x3c;
 for (VAR_14 = 0xf; VAR_14 >= 0; VAR_14--) {
  FUNC_0(VAR_12->mmio, VAR_13, 0x80);
  VAR_13 -= 4;
 }
 VAR_13 = VAR_2 + (VAR_0 - 1) * 4;
 for (VAR_14 = (VAR_0 - 1); VAR_14 >= 0; VAR_14--) {
  FUNC_0(VAR_12->mmio, VAR_13, 0x0);
  VAR_13 -= 4;
 }
 FUNC_0(VAR_12->mmio, VAR_3, 0);
}
