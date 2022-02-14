
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_18)
{
 static char VAR_19[32];
 char *VAR_20 = VAR_19;

 if (VAR_18 & VAR_4)
  *VAR_20++ = 'A';
 if (VAR_18 & VAR_11)
  *VAR_20++ = 'Q';
 if (VAR_18 & VAR_5)
  *VAR_20++ = 'E';
 if (VAR_18 & VAR_10)
  *VAR_20++ = 'P';
 if (VAR_18 & VAR_6) {
  *VAR_20++ = 'H';
  if (VAR_18 & VAR_7)
   *VAR_20++ = '+';
 }
 if (VAR_18 & VAR_16)
  *VAR_20++ = 'V';
 if (VAR_18 & VAR_17)
  *VAR_20++ = 'W';
 if (VAR_18 & VAR_15)
  *VAR_20++ = 'N';
 if (VAR_18 & VAR_1)
  *VAR_20++ = 'T';
 if (VAR_18 & VAR_0)
  *VAR_20++ = 'R';
 if (VAR_18 & VAR_8) {
  *VAR_20++ = 'M';
  if (VAR_18 & VAR_9)
   *VAR_20++ = '+';
 }
 if (VAR_18 & VAR_12)
  *VAR_20++ = 'I';
 if (VAR_18 & VAR_14) {
  *VAR_20++ = 'S';
  if (VAR_18 & VAR_13)
   *VAR_20++ = '+';
 } else if (VAR_18 & VAR_13)
  *VAR_20++ = 's';
 if (VAR_18 & VAR_3)
  *VAR_20++ = 't';
 if (VAR_18 & VAR_2)
  *VAR_20++ = 'r';
 *VAR_20 = '\0';
 return VAR_19;
}
