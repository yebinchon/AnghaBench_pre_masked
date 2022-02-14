
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_deltat ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,int *) ;

int
FUNC_3 (const char *VAR_1, krb5_deltat *VAR_2, int *VAR_3, int VAR_4)
{
    krb5_deltat VAR_5;

    if (FUNC_2(VAR_1, &VAR_5) == 0) {
 *VAR_2 = VAR_5;
 if (VAR_3)
     *VAR_3 |= VAR_4;
 return 0;
    } else if(*VAR_1 == '?') {
 FUNC_1 (VAR_0);
    } else {
 FUNC_0 (VAR_0, "Unable to parse time \"%s\"\n", VAR_1);
    }
    return -1;
}
