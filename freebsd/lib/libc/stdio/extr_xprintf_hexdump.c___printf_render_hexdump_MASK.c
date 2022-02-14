
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_info {int width; scalar_t__ alt; scalar_t__ showsign; } ;
struct __printf_io {int dummy; } ;


 int FUNC_0 (struct __printf_io*) ;
 scalar_t__ FUNC_1 (struct __printf_io*,char*,int) ;
 int FUNC_2 (char*,char*,...) ;

int
FUNC_3(struct __printf_io *VAR_0, const struct printf_info *VAR_1, const void *const *VAR_2)
{
 unsigned char *VAR_3;
 int VAR_4;
 unsigned VAR_5, VAR_6, VAR_7, VAR_8;
 char VAR_9[100], *VAR_10;
 int VAR_11;

 if (VAR_1->width > 0 && VAR_1->width < 16)
  VAR_6 = VAR_1->width;
 else
  VAR_6 = 16;
 VAR_3 = *((unsigned char **)VAR_2[0]);
 VAR_4 = *((int *)VAR_2[1]);
 if (VAR_4 < 0)
  VAR_4 = 0;
 VAR_5 = VAR_4;

 VAR_11 = 0;
 VAR_8 = 0;
 while (VAR_5 > 0) {
  VAR_10 = VAR_9;
  if (VAR_1->showsign)
   VAR_10 += FUNC_2(VAR_10, " %04x", VAR_8);
  for (VAR_7 = 0; VAR_7 < VAR_6 && VAR_7 < VAR_5; VAR_7++)
   VAR_10 += FUNC_2(VAR_10, " %02x", VAR_3[VAR_7]);
  if (VAR_1->alt) {
   for (; VAR_7 < VAR_6; VAR_7++)
    VAR_10 += FUNC_2(VAR_10, "   ");
   VAR_10 += FUNC_2(VAR_10, "  |");
   for (VAR_7 = 0; VAR_7 < VAR_6 && VAR_7 < VAR_5; VAR_7++) {
    if (VAR_3[VAR_7] < ' ' || VAR_3[VAR_7] > '~')
     *VAR_10++ = '.';
    else
     *VAR_10++ = VAR_3[VAR_7];
   }
   for (; VAR_7 < VAR_6; VAR_7++)
    *VAR_10++ = ' ';
   *VAR_10++ = '|';
  }
  if (VAR_6 < VAR_5)
   VAR_7 = VAR_6;
  else
   VAR_7 = VAR_5;
  VAR_3 += VAR_7;
  VAR_5 -= VAR_7;
  VAR_8 += VAR_7;
  if (VAR_5 > 0)
   *VAR_10++ = '\n';
  VAR_11 += FUNC_1(VAR_0, VAR_9 + 1, VAR_10 - (VAR_9 + 1));
  FUNC_0(VAR_0);
 }
 return (VAR_11);
}
