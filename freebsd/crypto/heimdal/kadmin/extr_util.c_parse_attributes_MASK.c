
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_flags ;


 int FUNC_0 (int ,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*,int *) ;

int
FUNC_3 (const char *VAR_2, krb5_flags *VAR_3, int *VAR_4, int VAR_5)
{
    krb5_flags VAR_6 = *VAR_3;

    if (FUNC_2(VAR_2, &VAR_6) == 0) {
 *VAR_3 = VAR_6;
 if (VAR_4)
     *VAR_4 |= VAR_5;
 return 0;
    } else if(*VAR_2 == '?') {
 FUNC_1 (VAR_0, VAR_1);
    } else {
 FUNC_0 (VAR_1, "Unable to parse \"%s\"\n", VAR_2);
    }
    return -1;
}
