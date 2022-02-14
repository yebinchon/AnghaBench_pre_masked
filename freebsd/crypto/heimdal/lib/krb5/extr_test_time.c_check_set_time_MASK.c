
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
typedef scalar_t__ krb5_timestamp ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (int ,int,char*,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_6(krb5_context VAR_0)
{
    krb5_error_code VAR_1;
    krb5_timestamp VAR_2;
    int32_t VAR_3;
    struct timeval VAR_4;
    int VAR_5 = 10;
    int VAR_6;

    FUNC_1(&VAR_4, ((void*)0));

    VAR_1 = FUNC_4(VAR_0, VAR_4.tv_sec + VAR_5, VAR_4.tv_usec);
    if (VAR_1)
 FUNC_2(VAR_0, 1, VAR_1, "krb5_us_timeofday");

    VAR_1 = FUNC_5(VAR_0, &VAR_2, &VAR_3);
    if (VAR_1)
 FUNC_2(VAR_0, 1, VAR_1, "krb5_us_timeofday");

    VAR_6 = FUNC_0(VAR_2 - VAR_4.tv_sec);

    if (VAR_6 < 9 || VAR_5 > 11)
 FUNC_3(VAR_0, 1, "set time error: diff: %d",
    FUNC_0(VAR_2 - VAR_4.tv_sec));
}
