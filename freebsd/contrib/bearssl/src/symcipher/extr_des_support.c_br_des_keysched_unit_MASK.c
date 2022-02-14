
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (int*,int*) ;

void
FUNC_2(uint32_t *VAR_0, const void *VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_0((const unsigned char *)VAR_1 + 4);
 FUNC_1(&VAR_2, &VAR_3);
 VAR_4 = ((VAR_3 & (uint32_t)0xFF000000) >> 4)
  | ((VAR_2 & (uint32_t)0xFF000000) >> 12)
  | ((VAR_3 & (uint32_t)0x00FF0000) >> 12)
  | ((VAR_2 & (uint32_t)0x00FF0000) >> 20);
 VAR_5 = ((VAR_3 & (uint32_t)0x000000FF) << 20)
  | ((VAR_2 & (uint32_t)0x0000FF00) << 4)
  | ((VAR_3 & (uint32_t)0x0000FF00) >> 4)
  | ((VAR_2 & (uint32_t)0x000F0000) >> 16);





 for (VAR_6 = 0; VAR_6 < 16; VAR_6 ++) {
  if ((1 << VAR_6) & 0x8103) {
   VAR_4 = (VAR_4 << 1) | (VAR_4 >> 27);
   VAR_5 = (VAR_5 << 1) | (VAR_5 >> 27);
  } else {
   VAR_4 = (VAR_4 << 2) | (VAR_4 >> 26);
   VAR_5 = (VAR_5 << 2) | (VAR_5 >> 26);
  }
  VAR_4 &= (uint32_t)0x0FFFFFFF;
  VAR_5 &= (uint32_t)0x0FFFFFFF;
  VAR_0[(VAR_6 << 1) + 0] = VAR_4;
  VAR_0[(VAR_6 << 1) + 1] = VAR_5;
 }
}
