
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int fd_set ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ,int *,int ,struct timeval*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;

void
FUNC_6(void)
{
    fd_set VAR_2;

    FUNC_2(&VAR_2);

    if (VAR_1 >= VAR_0)
 FUNC_0("fd too large", 1);

    if (FUNC_3() == 0) {
 FUNC_1(VAR_1, &VAR_2);
 FUNC_4(VAR_1+1, 0, &VAR_2, 0,
        (struct timeval *) 0);
    } else {
 while (FUNC_3()) {
     FUNC_5(0);
     FUNC_1(VAR_1, &VAR_2);
     FUNC_4(VAR_1+1, 0, &VAR_2, 0,
     (struct timeval *) 0);
 }
    }
}
