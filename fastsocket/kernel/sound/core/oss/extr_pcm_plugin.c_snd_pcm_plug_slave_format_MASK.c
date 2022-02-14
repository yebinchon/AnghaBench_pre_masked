
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mask {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

 int* VAR_1 ;
 scalar_t__ FUNC_1 (struct snd_mask*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (struct snd_mask*,int) ;

int FUNC_7(int VAR_2, struct snd_mask *VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_3, VAR_2))
  return VAR_2;
 if (! FUNC_6(VAR_3, VAR_2))
  return -VAR_0;
 if (FUNC_3(VAR_2)) {
  unsigned int VAR_5 = FUNC_5(VAR_2);
  int VAR_6 = FUNC_4(VAR_2) > 0;
  int VAR_7 = FUNC_2(VAR_2) > 0;
  unsigned int VAR_8, VAR_9 = -1;
  int VAR_10 = -1;
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
   int VAR_11 = VAR_1[VAR_4];
   unsigned int VAR_12;
   if (!FUNC_1(VAR_3, VAR_11))
    continue;
   VAR_12 = FUNC_5(VAR_11);
   if (VAR_12 >= VAR_5)
    VAR_8 = VAR_12 - VAR_5;
   else
    VAR_8 = VAR_5 - VAR_12 + 32;
   VAR_8 += FUNC_4(VAR_11) != VAR_6;
   VAR_8 += FUNC_2(VAR_11) != VAR_7;
   if (VAR_8 < VAR_9) {
    VAR_10 = VAR_11;
    VAR_9 = VAR_8;
   }
  }
  return VAR_10 >= 0 ? VAR_10 : -VAR_0;
 } else {
  switch (VAR_2) {
  case 128:
   for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4) {
    int VAR_13 = VAR_1[VAR_4];
    if (FUNC_1(VAR_3, VAR_13))
     return VAR_13;
   }
  default:
   return -VAR_0;
  }
 }
}
