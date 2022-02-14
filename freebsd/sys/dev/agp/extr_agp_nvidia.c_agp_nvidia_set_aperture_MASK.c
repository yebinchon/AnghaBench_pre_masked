
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, u_int32_t VAR_3)
{
 u_int8_t VAR_4;
 u_int8_t VAR_5;

 switch (VAR_3) {
 case (512 * 1024 * 1024): VAR_5 = 0; break;
 case (256 * 1024 * 1024): VAR_5 = 8; break;
 case (128 * 1024 * 1024): VAR_5 = 12; break;
 case (64 * 1024 * 1024): VAR_5 = 14; break;
 case (32 * 1024 * 1024): VAR_5 = 15; break;
 default:
  FUNC_0(VAR_2, "Invalid aperture size (%dMb)\n",
    VAR_3 / 1024 / 1024);
  return (VAR_1);
 }
 VAR_4 = FUNC_1(VAR_2, VAR_0, 1);
 FUNC_2(VAR_2, VAR_0, ((VAR_4 & ~0x0f) | VAR_5), 1);

 return (0);
}
