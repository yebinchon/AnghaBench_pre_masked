
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void* sa_handler; int sa_mask; scalar_t__ sa_flags; } ;
typedef int krb5_error_code ;
typedef int heim_sipc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int,char**) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int *) ;
 int VAR_10 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,struct sigaction*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,void*) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;

int
FUNC_13(int VAR_14, char **VAR_15)
{
    krb5_error_code VAR_16;
    FUNC_9(VAR_15[0]);

    VAR_16 = FUNC_7(&VAR_7);
    if (VAR_16) {
 FUNC_1 (1, "krb5_init_context failed: %d", VAR_16);
 return VAR_16;
    }

    FUNC_5(VAR_14, VAR_15);
    FUNC_12(VAR_0, VAR_11);
    FUNC_12(VAR_2, VAR_11);
    FUNC_12(VAR_3, VAR_12);
    FUNC_12(VAR_4, VAR_13);
    FUNC_12(VAR_1, VAR_5);





    FUNC_8(((void*)0));

    if (VAR_9) {
 heim_sipc VAR_17;
 FUNC_3(VAR_10, VAR_8, ((void*)0), &VAR_17);
    } else {
 heim_sipc VAR_18;
 FUNC_4(VAR_10, VAR_8, ((void*)0), &VAR_18);
    }

    FUNC_2();

    FUNC_6(VAR_7);
    return 0;
}
