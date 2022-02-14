
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_deltat ;


 int FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int
FUNC_2(const char *VAR_0, krb5_deltat *VAR_1)
{
    int VAR_2;

    if(FUNC_1(VAR_0, "unlimited") == 0) {
 *VAR_1 = 0;
 return 0;
    }
    VAR_2 = FUNC_0(VAR_0, "day");
    if (VAR_2 < 0)
 return VAR_2;
    else {
 *VAR_1 = VAR_2;
 return 0;
    }
}
