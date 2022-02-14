
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (char**,size_t*,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (char**,size_t*,char*,...) ;
 int FUNC_3 (scalar_t__**,size_t*,char**,size_t*) ;

int FUNC_4(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{

 uint8_t VAR_4;
 uint8_t VAR_5;
 uint8_t VAR_6;
 uint8_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 char VAR_11;
 char VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 double VAR_15;
 uint32_t VAR_16 = (uint32_t)1 << 31;
 int VAR_17 = 0;

 if(*VAR_1 < 16) return -1;
 VAR_4 = (*VAR_0)[0];
 if(VAR_4 != 0)
  return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_5 = (*VAR_0)[1];
 VAR_6 = (*VAR_0)[2];
 VAR_7 = (*VAR_0)[3];

 VAR_9 = FUNC_1((*VAR_0)+4);
 VAR_8 = FUNC_1((*VAR_0)+8);
 VAR_10 = FUNC_1((*VAR_0)+12);

 if (VAR_9 > VAR_16) {
  VAR_11 = 'N';
  VAR_9 = VAR_9 - VAR_16;
 } else {
  VAR_11 = 'S';
  VAR_9 = VAR_16 - VAR_9;
 }
 VAR_13 = VAR_9 / (1000 * 60 * 60);
 VAR_9 = VAR_9 % (1000 * 60 * 60);
 VAR_14 = VAR_9 / (1000 * 60);
 VAR_9 = VAR_9 % (1000 * 60);
 VAR_15 = (double) VAR_9 / 1000.0;
 VAR_17 += FUNC_2(VAR_2, VAR_3, "%02u %02u %06.3f %c ",
  VAR_13, VAR_14, VAR_15, VAR_11);

 if (VAR_8 > VAR_16) {
  VAR_12 = 'E';
  VAR_8 = VAR_8 - VAR_16;
 } else {
  VAR_12 = 'W';
  VAR_8 = VAR_16 - VAR_8;
 }
 VAR_13 = VAR_8 / (1000 * 60 * 60);
 VAR_8 = VAR_8 % (1000 * 60 * 60);
 VAR_14 = VAR_8 / (1000 * 60);
 VAR_8 = VAR_8 % (1000 * 60);
 VAR_15 = (double) VAR_8 / (1000.0);
 VAR_17 += FUNC_2(VAR_2, VAR_3, "%02u %02u %06.3f %c ",
  VAR_13, VAR_14, VAR_15, VAR_12);

 VAR_15 = ((double) VAR_10) / 100;
 VAR_15 -= 100000;

 if(VAR_10%100 != 0)
  VAR_17 += FUNC_2(VAR_2, VAR_3, "%.2f", VAR_15);
 else
  VAR_17 += FUNC_2(VAR_2, VAR_3, "%.0f", VAR_15);

 VAR_17 += FUNC_2(VAR_2, VAR_3, "m ");

 VAR_17 += FUNC_0(VAR_2, VAR_3, (VAR_5 & 0xf0) >> 4, VAR_5 & 0x0f);
 VAR_17 += FUNC_2(VAR_2, VAR_3, "m ");

 VAR_17 += FUNC_0(VAR_2, VAR_3, (VAR_6 & 0xf0) >> 4,
  VAR_6 & 0x0f);
 VAR_17 += FUNC_2(VAR_2, VAR_3, "m ");

 VAR_17 += FUNC_0(VAR_2, VAR_3, (VAR_7 & 0xf0) >> 4,
  VAR_7 & 0x0f);
 VAR_17 += FUNC_2(VAR_2, VAR_3, "m");

 (*VAR_0)+=16;
 (*VAR_1)-=16;
 return VAR_17;
}
