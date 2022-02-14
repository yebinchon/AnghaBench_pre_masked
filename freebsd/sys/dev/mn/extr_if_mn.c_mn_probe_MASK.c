
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct m32xreg {int dummy; } ;
struct f54wreg {int dummy; } ;
struct f54rreg {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3 (device_t VAR_2)
{
 u_int VAR_3 = FUNC_1(VAR_2);

 if (sizeof (struct m32xreg) != 256) {
  FUNC_2("MN: sizeof(struct m32xreg) = %zd, should have been 256\n", sizeof (struct m32xreg));
  return (VAR_1);
 }
 if (sizeof (struct f54rreg) != 128) {
  FUNC_2("MN: sizeof(struct f54rreg) = %zd, should have been 128\n", sizeof (struct f54rreg));
  return (VAR_1);
 }
 if (sizeof (struct f54wreg) != 128) {
  FUNC_2("MN: sizeof(struct f54wreg) = %zd, should have been 128\n", sizeof (struct f54wreg));
  return (VAR_1);
 }

 if (VAR_3 != 0x2101110a)
  return (VAR_1);

 FUNC_0(VAR_2, "Munich32X E1/T1 HDLC Controller");
 return (VAR_0);
}
