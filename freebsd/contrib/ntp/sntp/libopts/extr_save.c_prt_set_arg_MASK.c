
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tOptDesc ;
typedef int FILE ;


 scalar_t__ FUNC_0 (size_t,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char*) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(FILE * VAR_0, tOptDesc * VAR_1)
{
    char * VAR_2 = FUNC_3(VAR_1);
    size_t VAR_3 = FUNC_5(VAR_2);
    char * VAR_4 = (char *)FUNC_0(VAR_3 + 3, "dir name");
    *VAR_4= '=';
    FUNC_2(VAR_4+1, VAR_2, VAR_3 + 1);
    FUNC_4(VAR_0, VAR_1, VAR_4);
    FUNC_1(VAR_4);
    FUNC_1(VAR_2);
}
