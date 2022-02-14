
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (char*,char*) ;

__attribute__((used)) static
atf_error_t
FUNC_5(char *VAR_1)
{
    atf_error_t VAR_2;

    FUNC_0(FUNC_4(VAR_1, "XXXXXX") != ((void*)0));

    if (FUNC_3(VAR_1) == ((void*)0))
        VAR_2 = FUNC_1(VAR_0, "Cannot create temporary directory "
                             "with template '%s'", VAR_1);
    else
        VAR_2 = FUNC_2();

    return VAR_2;
}
