
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vortex_t ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6 = 0, VAR_7;

 VAR_6 &= 0xFFFFFFE3;
 VAR_6 |= 0x22;
 VAR_6 &= 0xFFFFFEBF;
 VAR_6 |= 0x80;
 VAR_6 |= 0x200;
 VAR_6 &= 0xfffffffe;
 VAR_6 &= 0xfffffbff;
 VAR_6 |= 0x1800;

 VAR_3 = 0x10000000;
 VAR_5 = 0x00830000;
 VAR_4 = 0x00830000;


 for (VAR_7 = 0; VAR_7 < (VAR_0 / VAR_1); VAR_7++) {
  FUNC_0(VAR_2, 0xc, VAR_7, 0);
  FUNC_0(VAR_2, 0xa, VAR_7, VAR_6);
  FUNC_0(VAR_2, 0x9, VAR_7, VAR_3);
  FUNC_0(VAR_2, 0x8, VAR_7, VAR_5);
  FUNC_0(VAR_2, 0x5, VAR_7, VAR_4);
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_0(VAR_2, 0x4, VAR_7, 0);
  FUNC_0(VAR_2, 0x3, VAR_7, 0);
  FUNC_0(VAR_2, 0x2, VAR_7, 0);
  FUNC_0(VAR_2, 0x1, VAR_7, 0);
  FUNC_0(VAR_2, 0xb, VAR_7, 0);
 }
 VAR_6 |= 1;
 for (VAR_7 = 0; VAR_7 < (VAR_0 / VAR_1); VAR_7++)
  FUNC_0(VAR_2, 0xa, VAR_7, VAR_6);
}
