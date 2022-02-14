
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (char*,char*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

int
FUNC_1(char *VAR_0, uint64_t *VAR_1)
{
 uint8_t VAR_2;
 uint8_t VAR_3;
 uint8_t VAR_4;
 uint8_t VAR_5;
 uint8_t VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_0, "0x%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx",
    &VAR_2, &VAR_3, &VAR_4, &VAR_5,
    &VAR_6, &VAR_7, &VAR_8, &VAR_9);

 if (VAR_10 == 8) {
  *VAR_1 = ((uint64_t)VAR_2 << 56) |
    ((uint64_t)VAR_3 << 48) |
    ((uint64_t)VAR_4 << 40) |
    ((uint64_t)VAR_5 << 32) |
    ((uint64_t)VAR_6 << 24) |
    ((uint64_t)VAR_7 << 16) |
    ((uint64_t)VAR_8 << 8) |
    ((uint64_t)VAR_9);
  return 0;

 } else {
  return 1;
 }
}
