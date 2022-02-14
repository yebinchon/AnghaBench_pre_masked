
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int salt ;
typedef int hash ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char const*,int,unsigned char*,int,char*,int) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static void FUNC_4(abts_case *VAR_0, void *VAR_1)
{
    const char *VAR_2 = "hellojed";
    const char *VAR_3 = "hellojed2";
    unsigned char VAR_4[] = "sardine_sardine";
    char VAR_5[100];
    const char *VAR_6 = "$2a$08$qipUJiI9fySUN38hcbz.lucXvAmtgowKOWYtB9y3CXyl6lTknruou";
    const char *VAR_7 = "foobar";

    FUNC_1(VAR_0, "bcrypt encode password",
                       FUNC_2(VAR_2, 5, VAR_4, sizeof(VAR_4), VAR_5,
                                         sizeof(VAR_5)));

    FUNC_1(VAR_0, "bcrypt password validated",
                       FUNC_3(VAR_2, VAR_5));
    FUNC_0(VAR_0, "wrong bcrypt password should not validate",
                       FUNC_3(VAR_3, VAR_5));
    FUNC_1(VAR_0, "bcrypt password validated",
                       FUNC_3(VAR_7, VAR_6));
}
