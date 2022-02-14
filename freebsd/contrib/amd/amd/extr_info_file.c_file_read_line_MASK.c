
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int *) ;

int
FUNC_8(char *VAR_1, int VAR_2, FILE *VAR_3)
{
  int VAR_4 = 0;

  do {
    while (FUNC_2(VAR_1, VAR_2, VAR_3)) {
      int VAR_5 = FUNC_6(VAR_1);
      VAR_4 += VAR_5;
      if (VAR_5 > 1 && VAR_1[VAR_5 - 2] == '\\' &&
   VAR_1[VAR_5 - 1] == '\n') {
 int VAR_6;
 VAR_1 += VAR_5 - 2;
 VAR_2 -= VAR_5 - 2;
 *VAR_1 = '\n';
 VAR_1[1] = '\0';



 while ((VAR_6 = FUNC_3(VAR_3)) != VAR_0 &&
        FUNC_4((unsigned char)VAR_6) && FUNC_5((unsigned char)VAR_6)) ;
 (void) FUNC_7(VAR_6, VAR_3);
      } else {
 return VAR_4;
      }
    }
  } while (VAR_2 > 0 && !FUNC_0(VAR_3) && !FUNC_1(VAR_3));

  return VAR_4;
}
