
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int abts_case ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char const*,char const*,char*,int) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static void FUNC_4(abts_case *VAR_0, void *VAR_1)
{
    const char *VAR_2 = "hellojed", *VAR_3 = "sardine";
    const char *VAR_4 = "hellojed2";
    char VAR_5[100];

    FUNC_2(VAR_2, VAR_3, VAR_5, sizeof VAR_5);

    FUNC_1(VAR_0, "MD5 password validated",
                       FUNC_3(VAR_2, VAR_5));
    FUNC_0(VAR_0, "wrong MD5 password should not validate",
                       FUNC_3(VAR_4, VAR_5));
}
