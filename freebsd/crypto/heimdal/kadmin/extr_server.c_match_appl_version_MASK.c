
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_boolean ;


 int FUNC_0 (char const*,char*,unsigned int*) ;

__attribute__((used)) static krb5_boolean
FUNC_1(const void *VAR_0, const char *VAR_1)
{
    unsigned VAR_2;
    if(FUNC_0(VAR_1, "KADM0.%u", &VAR_2) != 1)
 return 0;

    *(unsigned*)(intptr_t)VAR_0 = VAR_2;
    return 1;
}
