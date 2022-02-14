
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, char *VAR_1)
{
 char *VAR_2[4];
 int VAR_3[4];
 char *VAR_4, *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 1;


 VAR_5 = VAR_4 = VAR_0;
 for (;;) {
  if (*VAR_4 == '.' || *VAR_4 == '\0') {

   if (VAR_7 && VAR_4 - VAR_5 == 1 && *VAR_5 == '0')
    VAR_3[VAR_6] = 0;
   else {
    VAR_3[VAR_6] = VAR_4 - VAR_5;
    VAR_7 = 0;
   }
   VAR_2[VAR_6] = VAR_5;
   VAR_5 = VAR_4 + 1;
   VAR_6++;
  }
  if (VAR_6 == 4)
   break;
  if (*VAR_4 == 0) {
   for (; VAR_6 < 4; VAR_6++) {
    VAR_2[VAR_6] = VAR_4;
    VAR_3[VAR_6] = 0;
   }
   break;
  }
  VAR_4++;
 }


 VAR_4 = VAR_1;
 VAR_7 = 1;
 for (VAR_6 = 3; VAR_6 >= 0; VAR_6--) {
  FUNC_0(VAR_4, VAR_2[VAR_6], VAR_3[VAR_6]);
  if (VAR_3[VAR_6])
   VAR_7 = 0;
  VAR_4 += VAR_3[VAR_6];

  if (!VAR_7 && VAR_6 > 0 && VAR_3[VAR_6 - 1])
   *VAR_4++ = '.';
 }
 *VAR_4 = '\0';
}
