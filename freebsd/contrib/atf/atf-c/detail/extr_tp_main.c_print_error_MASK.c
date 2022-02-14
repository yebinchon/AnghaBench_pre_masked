
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const,char*,int) ;
 scalar_t__ FUNC_2 (int const,char*) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int ,char*,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
void
FUNC_5(const atf_error_t VAR_2)
{
    char VAR_3[4096];

    FUNC_0(FUNC_3(VAR_2));

    FUNC_1(VAR_2, VAR_3, sizeof(VAR_3));
    FUNC_4(VAR_1, "%s: ERROR: %s\n", VAR_0, VAR_3);

    if (FUNC_2(VAR_2, "usage"))
        FUNC_4(VAR_1, "%s: See atf-test-program(1) for usage details.\n",
                VAR_0);
}
