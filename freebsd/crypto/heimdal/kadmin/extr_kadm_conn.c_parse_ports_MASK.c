
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p ;
typedef int krb5_context ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char const**,char*,char*,int) ;

void
FUNC_4(krb5_context VAR_0, const char *VAR_1)
{
    char VAR_2[128];

    while(FUNC_3(&VAR_1, " \t", VAR_2, sizeof(VAR_2)) != -1) {
 if(FUNC_2(VAR_2, "+") == 0)
     FUNC_1(VAR_0);
 else
     FUNC_0(VAR_0, VAR_2, 0);
    }
}
