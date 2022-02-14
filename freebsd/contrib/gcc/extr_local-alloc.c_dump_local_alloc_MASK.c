
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int VAR_1 ;
 int* VAR_2 ;

void
FUNC_1 (FILE *VAR_3)
{
  int VAR_4;
  for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++)
    if (VAR_2[VAR_4] != -1)
      FUNC_0 (VAR_3, ";; Register %d in %d.\n", VAR_4, VAR_2[VAR_4]);
}
