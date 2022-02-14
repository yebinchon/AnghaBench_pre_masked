
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;


 int FUNC_0 (int ,int *,char*,char const*,char const*,...) ;

__attribute__((used)) static int
FUNC_1 (krb5_context VAR_0,
   const char *VAR_1,
   const char *VAR_2,
   int VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0 (VAR_0, ((void*)0),
    "realms",
    VAR_1,
    VAR_2,
    ((void*)0));
    if (VAR_4 >= 0)
 return VAR_4;
    VAR_4 = FUNC_0 (VAR_0, ((void*)0),
    "libdefaults",
    VAR_2,
    ((void*)0));
    if (VAR_4 >= 0)
 return VAR_4;
    return VAR_3;
}
