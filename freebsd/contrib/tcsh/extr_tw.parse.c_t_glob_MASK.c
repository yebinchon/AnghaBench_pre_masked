
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jmp_buf_t ;
typedef int Char ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ) ;
 int ** FUNC_5 (int **,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(Char ***VAR_2, int VAR_3)
{
    jmp_buf_t VAR_4;
    int VAR_5;

    if (**VAR_2 == 0)
 return (0);
    VAR_5 = FUNC_8(*VAR_2);
    if (VAR_5) {
 size_t VAR_6;

 FUNC_4(VAR_4);
 VAR_6 = FUNC_2();
 if (FUNC_7() == 0)
     *VAR_2 = FUNC_5(*VAR_2, VAR_5);
 FUNC_1(VAR_6);
 FUNC_6(VAR_4);
 if (VAR_1) {
     VAR_1 = 0;
     VAR_0 = 1;
     return (-1);
 }
 if (*VAR_2 == 0)
     return (0);
    }
    else
 return (0);

    if (VAR_3) {
 Char **VAR_7 = *VAR_2, *VAR_8;
 int VAR_9, VAR_10;

 for (VAR_10 = 0, VAR_9 = 0; VAR_7[VAR_10] != ((void*)0); VAR_10++)
     if (!FUNC_3(((void*)0), VAR_7[VAR_10], 0)) {
  VAR_9++;
  VAR_8 = VAR_7[VAR_10];
  VAR_7[VAR_10] = ((void*)0);
  FUNC_9(VAR_8);
     }
     else if (VAR_9)
  VAR_7[VAR_10 - VAR_9] = VAR_7[VAR_10];

 if (VAR_9)
     VAR_7[VAR_10 - VAR_9] = VAR_7[VAR_10];
    }

    return FUNC_0(*VAR_2);
}
