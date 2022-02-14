
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* lambda_vector ;
typedef int FILE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_2 (FILE * VAR_0, lambda_vector VAR_1, int VAR_2,
    char VAR_3)
{
  int VAR_4;
  bool VAR_5 = 1;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
      if (VAR_1[VAR_4] != 0)
 {
   if (VAR_5)
     {
       if (VAR_1[VAR_4] < 0)
  FUNC_1 (VAR_0, "-");
       VAR_5 = 0;
     }
   else if (VAR_1[VAR_4] > 0)
     FUNC_1 (VAR_0, " + ");
   else
     FUNC_1 (VAR_0, " - ");
   if (FUNC_0 (VAR_1[VAR_4]) == 1)
     FUNC_1 (VAR_0, "%c", VAR_3 + VAR_4);
   else
     FUNC_1 (VAR_0, "%d%c", FUNC_0 (VAR_1[VAR_4]), VAR_3 + VAR_4);
 }
    }
}
