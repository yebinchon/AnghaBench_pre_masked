
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_log_facility ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int **) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(void)
{
    int VAR_0;

    for (VAR_0 = 0; VAR_0 < 10; VAR_0++) {
 krb5_log_facility *VAR_1;
 krb5_context VAR_2;
 krb5_error_code VAR_3;

 VAR_3 = FUNC_3(&VAR_2);
 if (VAR_3)
     FUNC_0 (1, "krb5_init_context failed: %d", VAR_3);

 FUNC_4(VAR_2, "test-mem", &VAR_1);
 FUNC_1(VAR_2, VAR_1, "0/STDERR:");
 FUNC_5(VAR_2, VAR_1);

 FUNC_2(VAR_2);
    }
}
