
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char,int *) ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_2 (char*) ;
 char** VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(void)
{
    int VAR_6, VAR_7;
    size_t VAR_8, VAR_9 = 0;
    FILE *VAR_10 = VAR_4;

    if (!VAR_5)
 return;

    VAR_7 = 1;
    for (VAR_6 = 2; VAR_6 < VAR_0; ++VAR_6)
    {
 if (VAR_2[VAR_6] != VAR_2[VAR_6 - 1])
 {
     if (VAR_6 != 2)
  FUNC_0(VAR_10, "\n");
     FUNC_0(VAR_10, "%4d  %s :", VAR_6 - 2, VAR_3[VAR_2[VAR_6]]);
     VAR_9 = FUNC_2(VAR_3[VAR_2[VAR_6]]) + 1;
 }
 else
 {
     FUNC_0(VAR_10, "%4d  ", VAR_6 - 2);
     VAR_8 = VAR_9;
     while (VAR_8-- != 0)
  FUNC_1(' ', VAR_10);
     FUNC_1('|', VAR_10);
 }

 while (VAR_1[VAR_7] >= 0)
 {
     FUNC_0(VAR_10, " %s", VAR_3[VAR_1[VAR_7]]);
     ++VAR_7;
 }
 ++VAR_7;
 FUNC_1('\n', VAR_10);
    }
}
