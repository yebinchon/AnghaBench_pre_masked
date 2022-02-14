
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ,int ,int *,struct timeval*) ;

int
FUNC_7(void)
{
    static struct timeval VAR_4 = { 0 };
    fd_set VAR_5;
    int VAR_6;

    do {
 FUNC_2(&VAR_5);
 if (VAR_3 >= VAR_1)
     FUNC_3 (1, "fd too large");
 FUNC_1(VAR_3, &VAR_5);
 VAR_6 = FUNC_6(VAR_3+1, 0, 0, &VAR_5, &VAR_4);
    } while ((VAR_6 == -1) && (VAR_2 == VAR_0));

    if (VAR_6 < 0) {
 FUNC_4("select");
 FUNC_5();

    }
    if (FUNC_0(VAR_3, &VAR_5)) {
 return 1;
    } else {
 return 0;
    }
}
