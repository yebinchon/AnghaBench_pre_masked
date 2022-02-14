
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_2(device_t VAR_1)
{
 switch (FUNC_1(VAR_1, VAR_0, 1) & 0x0f) {
 case 0: return (512 * 1024 * 1024);
 case 8: return (256 * 1024 * 1024);
 case 12: return (128 * 1024 * 1024);
 case 14: return (64 * 1024 * 1024);
 case 15: return (32 * 1024 * 1024);
 default:
  FUNC_0(VAR_1, "Invalid aperture setting 0x%x\n",
      FUNC_1(VAR_1, VAR_0, 1));
  return 0;
 }
}
