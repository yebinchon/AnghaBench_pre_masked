
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {char* key; int value; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, uint32_t *VAR_2, uint32_t *VAR_3)
{
 int VAR_4 = 0, VAR_5, VAR_6, VAR_7, VAR_8;

 for (;;) {
  while (VAR_1[VAR_4] != '\0' &&
      (VAR_1[VAR_4] == ',' || FUNC_0(VAR_1[VAR_4]) != 0))
   VAR_4++;
  if (VAR_1[VAR_4] == '\0')
   return;
  VAR_5 = VAR_4;
  while (VAR_1[VAR_5] != '\0' &&
      !(VAR_1[VAR_5] == ',' || FUNC_0(VAR_1[VAR_5]) != 0))
   VAR_5++;
  VAR_7 = VAR_5 - VAR_4;
  if (VAR_7 > 2 && FUNC_3(VAR_1 + VAR_4, "no", 2) == 0)
   VAR_8 = 2;
  else
   VAR_8 = 0;
  for (VAR_6 = 0; VAR_7 > VAR_8 && VAR_6 < FUNC_1(VAR_0); VAR_6++) {
   if (FUNC_3(VAR_1 + VAR_4 + VAR_8,
       VAR_0[VAR_6].key, VAR_7 - VAR_8) != 0)
    continue;
   if (VAR_7 - VAR_8 != FUNC_2(VAR_0[VAR_6].key))
    continue;
   if (VAR_8 == 0) {
    *VAR_2 |= VAR_0[VAR_6].value;
    *VAR_3 &= ~VAR_0[VAR_6].value;
   } else {
    *VAR_3 |= VAR_0[VAR_6].value;
    *VAR_2 &= ~VAR_0[VAR_6].value;
   }
   break;
  }
  VAR_4 = VAR_5;
 }
}
