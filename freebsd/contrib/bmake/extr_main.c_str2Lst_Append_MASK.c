
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Lst ;


 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*,char const*) ;

int
FUNC_2(Lst VAR_0, char *VAR_1, const char *VAR_2)
{
    char *VAR_3;
    int VAR_4;

    if (!VAR_2)
 VAR_2 = " \t";

    for (VAR_4 = 0, VAR_3 = FUNC_1(VAR_1, VAR_2); VAR_3; VAR_3 = FUNC_1(((void*)0), VAR_2)) {
 (void)FUNC_0(VAR_0, VAR_3);
 VAR_4++;
    }
    return (VAR_4);
}
