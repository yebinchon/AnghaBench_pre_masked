
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,char**,int*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int,char**) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (char*,char*) ;

int
FUNC_9(int VAR_6, char **VAR_7)
{
    int VAR_8 = 0;
    krb5_error_code VAR_9;

    FUNC_5(VAR_7[0]);

    if(FUNC_2(VAR_0, VAR_4, VAR_6, VAR_7, &VAR_8))
 FUNC_7(1);
    if(VAR_3)
 FUNC_7(0);
    if(VAR_5) {
 FUNC_4(((void*)0));
 FUNC_1(0);
    }
    VAR_6 -= VAR_8;
    VAR_7 += VAR_8;
    if(VAR_6 == 0)
 FUNC_7(1);

    VAR_9 = FUNC_3(&VAR_2);
    if (VAR_9)
 FUNC_0(1, "krb5_init_context failed with: %d\n", VAR_9);

    VAR_9 = FUNC_6(VAR_1, VAR_6, VAR_7);
    if(VAR_9 == -1)
 FUNC_8 ("unrecognized command: %s", VAR_7[0]);
    return VAR_9;
}
