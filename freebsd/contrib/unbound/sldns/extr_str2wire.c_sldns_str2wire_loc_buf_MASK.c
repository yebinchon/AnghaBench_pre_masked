
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,char**,int*,int*) ;
 int FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 double FUNC_5 (char*,char**) ;
 scalar_t__ FUNC_6 (char*,char**,int) ;

int FUNC_7(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 uint32_t VAR_6 = 0;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;

 uint32_t VAR_9 = (uint32_t)1<<31;


 uint32_t VAR_10 = 0;
 uint32_t VAR_11 = 0;
 uint8_t VAR_12 = 1, VAR_13 = 2;
 uint8_t VAR_14 = 1, VAR_15 = 6;
 uint8_t VAR_16 = 1, VAR_17 = 3;

 double VAR_18 = 0.0;
 int VAR_19;
 int VAR_20;

 char *VAR_21 = (char *) VAR_3;

 if (FUNC_1((unsigned char) *VAR_21)) {
  VAR_10 = (uint32_t) FUNC_6(VAR_21, &VAR_21, 10);
 } else {
  return VAR_1;
 }

 while (FUNC_0((unsigned char) *VAR_21)) {
  VAR_21++;
 }

 if (FUNC_1((unsigned char) *VAR_21)) {
  VAR_11 = (uint32_t) FUNC_6(VAR_21, &VAR_21, 10);
 } else if (*VAR_21 == 'N' || *VAR_21 == 'S') {
  goto north;
 } else {
  return VAR_1;
 }

 while (FUNC_0((unsigned char) *VAR_21)) {
  VAR_21++;
 }

 if (FUNC_1((unsigned char) *VAR_21)) {
  VAR_18 = FUNC_5(VAR_21, &VAR_21);
 }


 while (FUNC_0((unsigned char) *VAR_21)) {
  VAR_21++;
 }

north:
 if (*VAR_21 == 'N') {
  VAR_19 = 1;
 } else if (*VAR_21 == 'S') {
  VAR_19 = 0;
 } else {
  return VAR_1;
 }

 VAR_21++;


 VAR_18 = 1000.0 * VAR_18;

 VAR_18 += 0.0005;
 VAR_6 = (uint32_t) VAR_18;
 VAR_6 += 1000 * 60 * VAR_11;
 VAR_6 += 1000 * 60 * 60 * VAR_10;
 if (VAR_19) {
  VAR_6 = VAR_9 + VAR_6;
 } else {
  VAR_6 = VAR_9 - VAR_6;
 }
 while (FUNC_0((unsigned char)*VAR_21)) {
  VAR_21++;
 }

 if (FUNC_1((unsigned char) *VAR_21)) {
  VAR_10 = (uint32_t) FUNC_6(VAR_21, &VAR_21, 10);
 } else {
  return VAR_1;
 }

 while (FUNC_0((unsigned char) *VAR_21)) {
  VAR_21++;
 }

 if (FUNC_1((unsigned char) *VAR_21)) {
  VAR_11 = (uint32_t) FUNC_6(VAR_21, &VAR_21, 10);
 } else if (*VAR_21 == 'E' || *VAR_21 == 'W') {
  goto east;
 } else {
  return VAR_1;
 }

 while (FUNC_0((unsigned char)*VAR_21)) {
  VAR_21++;
 }

 if (FUNC_1((unsigned char) *VAR_21)) {
  VAR_18 = FUNC_5(VAR_21, &VAR_21);
 }


 while (FUNC_0((unsigned char)*VAR_21)) {
  VAR_21++;
 }

east:
 if (*VAR_21 == 'E') {
  VAR_20 = 1;
 } else if (*VAR_21 == 'W') {
  VAR_20 = 0;
 } else {
  return VAR_1;
 }

 VAR_21++;


 VAR_18 *= 1000.0;

 VAR_18 += 0.0005;
 VAR_7 = (uint32_t) VAR_18;
 VAR_7 += 1000 * 60 * VAR_11;
 VAR_7 += 1000 * 60 * 60 * VAR_10;

 if (VAR_20) {
  VAR_7 += VAR_9;
 } else {
  VAR_7 = VAR_9 - VAR_7;
 }

 VAR_8 = (uint32_t)(FUNC_5(VAR_21, &VAR_21)*100.0 +
  10000000.0 + 0.5);
 if (*VAR_21 == 'm' || *VAR_21 == 'M') {
  VAR_21++;
 }

 if (FUNC_4(VAR_21) > 0) {
  if(!FUNC_2(VAR_21, &VAR_21, &VAR_12, &VAR_13))
   return VAR_1;
 }

 if (FUNC_4(VAR_21) > 0) {
  if(!FUNC_2(VAR_21, &VAR_21, &VAR_14, &VAR_15))
   return VAR_1;
 }

 if (FUNC_4(VAR_21) > 0) {
  if(!FUNC_2(VAR_21, &VAR_21, &VAR_16, &VAR_17))
   return VAR_1;
 }

 if(*VAR_5 < 16)
  return VAR_0;
 VAR_4[0] = 0;
 VAR_4[1] = ((VAR_12 << 4) & 0xf0) | (VAR_13 & 0x0f);
 VAR_4[2] = ((VAR_14 << 4) & 0xf0) | (VAR_15 & 0x0f);
 VAR_4[3] = ((VAR_16 << 4) & 0xf0) | (VAR_17 & 0x0f);
 FUNC_3(VAR_4 + 4, VAR_6);
 FUNC_3(VAR_4 + 8, VAR_7);
 FUNC_3(VAR_4 + 12, VAR_8);
 *VAR_5 = 16;
 return VAR_2;
}
