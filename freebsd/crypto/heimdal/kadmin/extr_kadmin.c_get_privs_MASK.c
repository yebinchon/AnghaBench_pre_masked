
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int str ;
typedef scalar_t__ kadm5_ret_t ;


 scalar_t__ FUNC_0 (scalar_t__,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__,char*) ;
 int FUNC_3 (char*,...) ;

int
FUNC_4(void *VAR_2, int VAR_3, char **VAR_4)
{
    uint32_t VAR_5;
    char VAR_6[128];
    kadm5_ret_t VAR_7;

    VAR_7 = FUNC_1(VAR_1, &VAR_5);
    if(VAR_7)
 FUNC_2(VAR_0, VAR_7, "kadm5_get_privs");
    else{
 VAR_7 =FUNC_0(VAR_5, VAR_6, sizeof(VAR_6));
 if (VAR_7 == 0)
     FUNC_3("%s\n", VAR_6);
 else
     FUNC_3("privs: 0x%x\n", (unsigned int)VAR_5);
    }
    return 0;
}
