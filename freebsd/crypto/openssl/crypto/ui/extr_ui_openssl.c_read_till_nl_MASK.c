
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *) ;
 int * FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2(FILE *VAR_1)
{

    char VAR_2[4 + 1];

    do {
        if (!FUNC_0(VAR_2, 4, VAR_1))
            return 0;
    } while (FUNC_1(VAR_2, '\n') == ((void*)0));
    return 1;
}
