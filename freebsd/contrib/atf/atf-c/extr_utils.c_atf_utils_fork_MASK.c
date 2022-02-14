
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int atf_dynstr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,char*,int) ;

pid_t
FUNC_7(void)
{
    const pid_t VAR_2 = FUNC_4();
    if (VAR_2 == -1)
        FUNC_2("fork failed");

    if (VAR_2 == 0) {
        atf_dynstr_t VAR_3;
        FUNC_6(&VAR_3, FUNC_5(), "out", 0);

        atf_dynstr_t VAR_4;
        FUNC_6(&VAR_4, FUNC_5(), "err", 0);

        FUNC_3(VAR_1, FUNC_0(&VAR_3));
        FUNC_3(VAR_0, FUNC_0(&VAR_4));

        FUNC_1(&VAR_4);
        FUNC_1(&VAR_3);
    }
    return VAR_2;
}
