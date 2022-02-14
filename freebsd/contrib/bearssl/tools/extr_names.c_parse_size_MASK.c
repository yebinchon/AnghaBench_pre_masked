
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

size_t
FUNC_2(const char *VAR_1)
{
 int VAR_2;
 size_t VAR_3;
 const char *VAR_4;

 VAR_4 = VAR_1;
 if (VAR_4[0] == '0' && (VAR_4[1] == 'x' || VAR_4[1] == 'X')) {
  VAR_2 = 16;
  VAR_4 += 2;
 } else {
  VAR_2 = 10;
 }
 VAR_3 = 0;
 for (;;) {
  int VAR_5, VAR_6;
  size_t VAR_7;

  VAR_5 = *VAR_4 ++;
  if (VAR_5 == 0) {
   return VAR_3;
  }
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 < 0 || VAR_6 >= VAR_2) {
   FUNC_0(VAR_0, "ERROR: not a valid digit: '%c'\n", VAR_5);
   return (size_t)-1;
  }
  VAR_7 = VAR_3 * (size_t)VAR_2 + (size_t)VAR_6;
  if (VAR_7 < (size_t)VAR_6 || (VAR_7 / (size_t)VAR_2) != VAR_3
   || VAR_7 == (size_t)-1)
  {
   FUNC_0(VAR_0, "ERROR: value too large: %s\n", VAR_1);
   return (size_t)-1;
  }
  VAR_3 = VAR_7;
 }
}
