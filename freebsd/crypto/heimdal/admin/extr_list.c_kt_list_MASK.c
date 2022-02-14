
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_options {int timestamp_flag; } ;
typedef int kt ;
typedef int krb5_error_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct list_options*,char*) ;
 char* VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ VAR_2 ;

int
FUNC_3(struct list_options *VAR_3, int VAR_4, char **VAR_5)
{
    krb5_error_code VAR_6;
    char VAR_7[1024];

    if(VAR_2)
 VAR_3->timestamp_flag = 1;

    if (VAR_1 == ((void*)0)) {
 if((VAR_6 = FUNC_1(VAR_0, VAR_7, sizeof(VAR_7))) != 0) {
     FUNC_2(VAR_0, VAR_6, "getting default keytab name");
     return 1;
 }
 VAR_1 = VAR_7;
    }
    return FUNC_0(VAR_3, VAR_1) != 0;
}
