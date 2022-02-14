
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_dynstr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,char const**,int*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (char*,int ) ;

bool
FUNC_6(const char *VAR_1)
{
    bool VAR_2;
    atf_dynstr_t VAR_3;
    const char *VAR_4[4];

    FUNC_0(FUNC_4(&VAR_3, "-I%s", FUNC_5(
        "ATF_INCLUDEDIR", VAR_0)));

    VAR_4[0] = FUNC_2(&VAR_3);
    VAR_4[1] = "-Wall";
    VAR_4[2] = "-Werror";
    VAR_4[3] = ((void*)0);

    FUNC_0(FUNC_1(VAR_1, "test.o", VAR_4, &VAR_2));

    FUNC_3(&VAR_3);

    return VAR_2;
}
