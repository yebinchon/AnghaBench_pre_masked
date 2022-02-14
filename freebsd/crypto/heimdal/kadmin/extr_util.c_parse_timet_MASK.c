
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int krb5_timestamp ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int *) ;

int
FUNC_2 (const char *VAR_1, krb5_timestamp *VAR_2, int *VAR_3, int VAR_4)
{
    time_t VAR_5;

    if (FUNC_1(VAR_1, &VAR_5) == 0) {
 *VAR_2 = VAR_5;
 if(VAR_3)
     *VAR_3 |= VAR_4;
 return 0;
    }
    if(*VAR_1 != '?')
 FUNC_0 (VAR_0, "Unable to parse time \"%s\"\n", VAR_1);
    FUNC_0 (VAR_0, "Print date on format YYYY-mm-dd [hh:mm:ss]\n");
    return -1;
}
