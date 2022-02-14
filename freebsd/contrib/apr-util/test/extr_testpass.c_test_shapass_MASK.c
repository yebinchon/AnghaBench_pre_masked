
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int abts_case ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,int ,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(abts_case *VAR_0, void *VAR_1)
{
    const char *VAR_2 = "hellojed";
    const char *VAR_3 = "hellojed2";
    char VAR_4[100];

    FUNC_3(VAR_2, FUNC_4(VAR_2), VAR_4);

    FUNC_1(VAR_0, "SHA1 password validated",
                       FUNC_2(VAR_2, VAR_4));
    FUNC_0(VAR_0, "wrong SHA1 password should not validate",
                       FUNC_2(VAR_3, VAR_4));
}
