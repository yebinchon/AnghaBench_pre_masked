
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(FILE * VAR_2)
{
    int VAR_3;
    FILE *VAR_4;

    FUNC_3(VAR_1);
    if (VAR_1 == ((void*)0))
 FUNC_1("text_file");
    VAR_4 = VAR_1;
    if ((VAR_3 = FUNC_0(VAR_4)) == VAR_0)
 return;
    FUNC_2(VAR_2, VAR_3);
    while ((VAR_3 = FUNC_0(VAR_4)) != VAR_0)
    {
 FUNC_2(VAR_2, VAR_3);
    }
    FUNC_4(VAR_2);
}
