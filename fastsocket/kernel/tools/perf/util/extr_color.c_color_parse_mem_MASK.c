
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char const*,char*,int) ;

void FUNC_7(const char *VAR_1, int VAR_2, const char *VAR_3,
  char *VAR_4)
{
 const char *VAR_5 = VAR_1;
 int VAR_6 = VAR_2;
 int VAR_7 = -1;
 int VAR_8 = -2;
 int VAR_9 = -2;

 if (!FUNC_6(VAR_1, "reset", VAR_6)) {
  FUNC_5(VAR_4, VAR_0);
  return;
 }


 while (VAR_6 > 0) {
  const char *VAR_10 = VAR_5;
  int VAR_11, VAR_12 = 0;

  while (VAR_6 > 0 && !FUNC_1(VAR_10[VAR_12])) {
   VAR_12++;
   VAR_6--;
  }

  VAR_5 = VAR_10 + VAR_12;
  while (VAR_6 > 0 && FUNC_1(*VAR_5)) {
   VAR_5++;
   VAR_6--;
  }

  VAR_11 = FUNC_3(VAR_10, VAR_12);
  if (VAR_11 >= -1) {
   if (VAR_8 == -2) {
    VAR_8 = VAR_11;
    continue;
   }
   if (VAR_9 == -2) {
    VAR_9 = VAR_11;
    continue;
   }
   goto bad;
  }
  VAR_11 = FUNC_2(VAR_10, VAR_12);
  if (VAR_11 < 0 || VAR_7 != -1)
   goto bad;
  VAR_7 = VAR_11;
 }

 if (VAR_7 >= 0 || VAR_8 >= 0 || VAR_9 >= 0) {
  int VAR_13 = 0;

  *VAR_4++ = '\033';
  *VAR_4++ = '[';
  if (VAR_7 >= 0) {
   *VAR_4++ = '0' + VAR_7;
   VAR_13++;
  }
  if (VAR_8 >= 0) {
   if (VAR_13++)
    *VAR_4++ = ';';
   if (VAR_8 < 8) {
    *VAR_4++ = '3';
    *VAR_4++ = '0' + VAR_8;
   } else {
    VAR_4 += FUNC_4(VAR_4, "38;5;%d", VAR_8);
   }
  }
  if (VAR_9 >= 0) {
   if (VAR_13++)
    *VAR_4++ = ';';
   if (VAR_9 < 8) {
    *VAR_4++ = '4';
    *VAR_4++ = '0' + VAR_9;
   } else {
    VAR_4 += FUNC_4(VAR_4, "48;5;%d", VAR_9);
   }
  }
  *VAR_4++ = 'm';
 }
 *VAR_4 = 0;
 return;
bad:
 FUNC_0("bad color value '%.*s' for variable '%s'", VAR_2, VAR_1, VAR_3);
}
