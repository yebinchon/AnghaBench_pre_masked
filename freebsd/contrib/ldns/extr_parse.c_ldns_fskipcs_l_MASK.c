
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void
FUNC_2(FILE *VAR_1, const char *VAR_2, int *VAR_3)
{
        bool VAR_4;
        int VAR_5;
        const char *VAR_6;

 while ((VAR_5 = FUNC_0(VAR_1)) != VAR_0) {
  if (VAR_3 && VAR_5 == '\n') {
   *VAR_3 = *VAR_3 + 1;
  }
                VAR_4 = 0;
                for (VAR_6 = VAR_2; *VAR_6; VAR_6++) {
                        if (*VAR_6 == VAR_5) {
                                VAR_4 = 1;
                        }
                }
  if (!VAR_4) {

   FUNC_1(VAR_5, VAR_1);
   return;
  }
 }
}
