
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CHAR16 ;



void
FUNC_0(const char *VAR_0, CHAR16 *VAR_1, size_t VAR_2)
{
 VAR_2 <<= 1;
 while (VAR_2 > 0 && *VAR_0) {
  *VAR_1++ = *VAR_0++;
  VAR_2--;
 }
 *VAR_1++ = (CHAR16)0;
}
