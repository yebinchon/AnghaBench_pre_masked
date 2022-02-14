
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int *,int *,int *,struct timeval*) ;

int
FUNC_6(void)
{
    static struct timeval VAR_3 = { 0, 0 };
    fd_set VAR_4;
    int VAR_5;

    do {
 FUNC_2(&VAR_4);
 FUNC_1(VAR_2, &VAR_4);
 VAR_5 = FUNC_5(VAR_2+1, (fd_set *)0, (fd_set *)0, &VAR_4, &VAR_3);
    } while ((VAR_5 == -1) && (VAR_1 == VAR_0));

    if (VAR_5 < 0) {
 FUNC_3("select");
 (void) FUNC_4();

    }
    if (FUNC_0(VAR_2, &VAR_4)) {
 return 1;
    } else {
 return 0;
    }
}
