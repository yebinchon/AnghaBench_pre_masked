
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* min; int passphrase_words; } ;
typedef TYPE_1__ passwdqc_params_t ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char const*,int) ;

__attribute__((used)) static int FUNC_7(passwdqc_params_t *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_2 = VAR_3 = VAR_4 = VAR_5 = 0;
 VAR_6 = VAR_7 = VAR_8 = VAR_9 = VAR_10 = 0;
 VAR_12 = ' ';
 while ((VAR_11 = (unsigned char)VAR_1[VAR_2])) {
  VAR_2++;

  if (!FUNC_2(VAR_11)) VAR_10++; else
  if (FUNC_3(VAR_11)) VAR_6++; else
  if (FUNC_4(VAR_11)) VAR_7++; else
  if (FUNC_5(VAR_11)) VAR_8++; else
   VAR_9++;

  if (FUNC_2(VAR_11) && FUNC_1(VAR_11) && FUNC_2(VAR_12) && !FUNC_1(VAR_12))
   VAR_4++;
  VAR_12 = VAR_11;

  if (!FUNC_6(&VAR_1[VAR_2], VAR_11))
   VAR_5++;
 }

 if (!VAR_2) return 1;



 VAR_11 = (unsigned char)VAR_1[0];
 if (VAR_8 && FUNC_2(VAR_11) && FUNC_5(VAR_11)) VAR_8--;
 VAR_11 = (unsigned char)VAR_1[VAR_2 - 1];
 if (VAR_6 && FUNC_2(VAR_11) && FUNC_3(VAR_11)) VAR_6--;



 VAR_3 = 0;
 if (VAR_6) VAR_3++;
 if (VAR_7) VAR_3++;
 if (VAR_8) VAR_3++;
 if (VAR_9) VAR_3++;
 if (VAR_10 && (!VAR_3 || (VAR_6 && VAR_3 == 1))) VAR_3++;

 for (; VAR_3 > 0; VAR_3--)
 switch (VAR_3) {
 case 1:
  if (VAR_2 >= VAR_0->min[0] &&
      VAR_5 >= FUNC_0(10, VAR_0->min[0]) - 1)
   return 0;
  return 1;

 case 2:
  if (VAR_2 >= VAR_0->min[1] &&
      VAR_5 >= FUNC_0(36, VAR_0->min[1]) - 1)
   return 0;
  if (!VAR_0->passphrase_words ||
      VAR_4 < VAR_0->passphrase_words)
   continue;
  if (VAR_2 >= VAR_0->min[2] &&
      VAR_5 >= FUNC_0(27, VAR_0->min[2]) - 1)
   return 0;
  continue;

 case 3:
  if (VAR_2 >= VAR_0->min[3] &&
      VAR_5 >= FUNC_0(62, VAR_0->min[3]) - 1)
   return 0;
  continue;

 case 4:
  if (VAR_2 >= VAR_0->min[4] &&
      VAR_5 >= FUNC_0(95, VAR_0->min[4]) - 1)
   return 0;
  continue;
 }

 return 1;
}
