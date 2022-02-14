
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

__attribute__((used)) static void
FUNC_1(device_t VAR_3, mii_bitbang_ops_t VAR_4, uint32_t VAR_5,
    int VAR_6)
{
 int VAR_7;
 uint32_t VAR_8;

 VAR_8 = VAR_1;
 FUNC_0(VAR_8);

 for (VAR_7 = 1 << (VAR_6 - 1); VAR_7 != 0; VAR_7 >>= 1) {
  if (VAR_5 & VAR_7)
   VAR_8 |= VAR_2;
  else
   VAR_8 &= ~VAR_2;
  FUNC_0(VAR_8);
  FUNC_0(VAR_8 | VAR_0);
  FUNC_0(VAR_8);
 }
}
