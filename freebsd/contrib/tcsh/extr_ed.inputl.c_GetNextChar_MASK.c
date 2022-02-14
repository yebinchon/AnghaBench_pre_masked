
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__** VAR_5 ;
 int FUNC_0 () ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_1 () ;
 int VAR_9 ;
 char VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (char*,char*,size_t) ;
 int VAR_14 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 char VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_8 (int ,char*,int) ;

int
FUNC_9(Char *VAR_17)
{
    int VAR_18;
    int VAR_19 = 0;
    char VAR_20[VAR_7];
    size_t VAR_21;

    if (VAR_13) {
 VAR_13 = 0;
 *VAR_17 = VAR_15;
 return 1;
    }
    for (;;) {
 if (VAR_8 < 0) {
     if (!FUNC_0())
  break;
 }
 if (*VAR_5[VAR_8] == 0) {
     VAR_8--;
     continue;
 }
 *VAR_17 = *VAR_5[VAR_8]++ & VAR_0;
 if (*VAR_5[VAR_8] == 0) {
     VAR_8--;
 }
 return (1);
    }

    if (FUNC_1() < 0)
 return 0;
    VAR_21 = 0;
    for (;;) {
 while ((VAR_18 = FUNC_8(VAR_9, VAR_20 + VAR_21, 1)) == -1) {
     if (!VAR_19 && FUNC_3(VAR_9, VAR_12) != -1)
  VAR_19 = 1;
     else {







  *VAR_17 = '\0';
  return -1;
     }
 }
 if (VAR_21 == 0
     && VAR_1[(unsigned char)*VAR_20] == VAR_3) {
     *VAR_17 = (unsigned char)*VAR_20;
 } else {
     VAR_21++;
     if (FUNC_4(VAR_17, VAR_20, VAR_21) == -1) {
  FUNC_5();
  if (VAR_21 < VAR_6)
      continue;

  *VAR_17 = (unsigned char)*VAR_20 | VAR_4;
     }
 }
 break;
    }






    return VAR_18;
}
