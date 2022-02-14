
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static void
FUNC_0(const char *VAR_16)
{
 const char *VAR_17;
 char *VAR_18;
 char VAR_19;
 int VAR_20 = 0;

 if (VAR_15 <= 0)
  return;
 VAR_17 = VAR_16;
 VAR_18 = VAR_14;
 while ((VAR_19 = *VAR_17++) != '\0') {
  if (VAR_19 == VAR_4)
   *VAR_18++ = *VAR_17++;
  else if (VAR_19 == VAR_8) {
   *VAR_18++ = '$';
   if (--VAR_15 > 0)
    *VAR_18++ = '{';
   VAR_20 = *VAR_17++;
   if ((VAR_20 & VAR_13) == VAR_9 && --VAR_15 > 0)
    *VAR_18++ = '#';
  } else if (VAR_19 == '=' && VAR_20 != 0) {
   *VAR_18 = "}-+?=##%%\0X"[(VAR_20 & VAR_13) - VAR_10];
   if (*VAR_18)
    VAR_18++;
   else
    VAR_15++;
   if (((VAR_20 & VAR_13) == VAR_11 ||
       (VAR_20 & VAR_13) == VAR_12) &&
       --VAR_15 > 0)
    *VAR_18 = VAR_18[-1], VAR_18++;
   VAR_20 = 0;
  } else if (VAR_19 == VAR_3) {
   *VAR_18++ = '}';
  } else if (VAR_19 == VAR_1 || VAR_19 == VAR_1+VAR_5) {
   VAR_15 -= 5;
   if (VAR_15 > 0) {
    *VAR_18++ = '$';
    *VAR_18++ = '(';
    *VAR_18++ = '.';
    *VAR_18++ = '.';
    *VAR_18++ = '.';
    *VAR_18++ = ')';
   }
  } else if (VAR_19 == VAR_0) {
   VAR_15 -= 2;
   if (VAR_15 > 0) {
    *VAR_18++ = '$';
    *VAR_18++ = '(';
    *VAR_18++ = '(';
   }
   VAR_17++;
  } else if (VAR_19 == VAR_2) {
   if (--VAR_15 > 0) {
    *VAR_18++ = ')';
    *VAR_18++ = ')';
   }
  } else if (VAR_19 == VAR_7 || VAR_19 == VAR_6)
   VAR_15++;
  else
   *VAR_18++ = VAR_19;
  if (--VAR_15 <= 0) {
   *VAR_18++ = '.';
   *VAR_18++ = '.';
   *VAR_18++ = '.';
   break;
  }
 }
 VAR_14 = VAR_18;
}
