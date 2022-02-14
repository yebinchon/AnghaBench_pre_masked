
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int*,int ) ;

__attribute__((used)) static
int
FUNC_3(void (*VAR_1)(void))
{
    pid_t VAR_2;
    int VAR_3;

    VAR_2 = FUNC_1();
    FUNC_0(VAR_2 != -1);
    if (VAR_2 == 0) {
        VAR_3 = 0;
        VAR_1();
        VAR_0;
    } else {
        FUNC_0(FUNC_2(VAR_2, &VAR_3, 0) != 0);
    }

    return VAR_3;
}
