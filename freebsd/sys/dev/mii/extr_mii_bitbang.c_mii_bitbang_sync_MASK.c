
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mii_bitbang_ops_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

void
FUNC_1(device_t VAR_3, mii_bitbang_ops_t VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 VAR_6 = VAR_1 | VAR_2;

 FUNC_0(VAR_6);
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  FUNC_0(VAR_6 | VAR_0);
  FUNC_0(VAR_6);
 }
}
