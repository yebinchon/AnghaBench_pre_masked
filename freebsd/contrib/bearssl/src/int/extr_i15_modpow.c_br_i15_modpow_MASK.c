
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (unsigned char,int*,int*,size_t) ;
 int FUNC_1 (int*,int*,int*,int const*,int) ;
 int FUNC_2 (int*,int const*) ;
 int FUNC_3 (int*,int const) ;
 int FUNC_4 (int*,int*,size_t) ;

void
FUNC_5(uint16_t *VAR_0,
 const unsigned char *VAR_1, size_t VAR_2,
 const uint16_t *VAR_3, uint16_t VAR_4, uint16_t *VAR_5, uint16_t *VAR_6)
{
 size_t VAR_7;
 unsigned VAR_8;

 VAR_7 = ((VAR_3[0] + 31) >> 4) * sizeof VAR_3[0];
 FUNC_4(VAR_5, VAR_0, VAR_7);
 FUNC_2(VAR_5, VAR_3);
 FUNC_3(VAR_0, VAR_3[0]);
 VAR_0[1] = 1;
 for (VAR_8 = 0; VAR_8 < ((unsigned)VAR_2 << 3); VAR_8 ++) {
  uint32_t VAR_9;

  VAR_9 = (VAR_1[VAR_2 - 1 - (VAR_8 >> 3)] >> (VAR_8 & 7)) & 1;
  FUNC_1(VAR_6, VAR_0, VAR_5, VAR_3, VAR_4);
  FUNC_0(VAR_9, VAR_0, VAR_6, VAR_7);
  FUNC_1(VAR_6, VAR_5, VAR_5, VAR_3, VAR_4);
  FUNC_4(VAR_5, VAR_6, VAR_7);
 }
}
