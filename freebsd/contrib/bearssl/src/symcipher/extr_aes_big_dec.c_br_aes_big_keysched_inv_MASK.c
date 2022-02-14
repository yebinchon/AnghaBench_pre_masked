
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned int FUNC_0 (int*,void const*,size_t) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;

unsigned
FUNC_5(uint32_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
 unsigned VAR_3;
 int VAR_4, VAR_5;






 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_5 = (int)(VAR_3 << 2);
 for (VAR_4 = 4; VAR_4 < VAR_5; VAR_4 ++) {
  uint32_t VAR_6;
  unsigned VAR_7, VAR_8, VAR_9, VAR_10;
  uint32_t VAR_11, VAR_12, VAR_13, VAR_14;

  VAR_6 = VAR_0[VAR_4];
  VAR_7 = VAR_6 >> 24;
  VAR_8 = (VAR_6 >> 16) & 0xFF;
  VAR_9 = (VAR_6 >> 8) & 0xFF;
  VAR_10 = VAR_6 & 0xFF;
  VAR_11 = FUNC_4(VAR_7) ^ FUNC_2(VAR_8) ^ FUNC_3(VAR_9) ^ FUNC_1(VAR_10);
  VAR_12 = FUNC_1(VAR_7) ^ FUNC_4(VAR_8) ^ FUNC_2(VAR_9) ^ FUNC_3(VAR_10);
  VAR_13 = FUNC_3(VAR_7) ^ FUNC_1(VAR_8) ^ FUNC_4(VAR_9) ^ FUNC_2(VAR_10);
  VAR_14 = FUNC_2(VAR_7) ^ FUNC_3(VAR_8) ^ FUNC_1(VAR_9) ^ FUNC_4(VAR_10);
  VAR_0[VAR_4] = (VAR_11 << 24) | (VAR_12 << 16) | (VAR_13 << 8) | VAR_14;
 }
 return VAR_3;
}
