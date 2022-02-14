
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 int FUNC_5 (int,int ,int ,int *,struct timeval*) ;

int
FUNC_6(int VAR_4)
{
    static struct timeval VAR_5 = { 0 };
    fd_set VAR_6;
    int VAR_7;

    if (VAR_4 >= VAR_1)
 FUNC_3(VAR_3, "fd too large");

    do {
 FUNC_2(&VAR_6);
 FUNC_1(VAR_4, &VAR_6);
 VAR_7 = FUNC_5(VAR_4+1, 0, 0, &VAR_6, &VAR_5);
    } while ((VAR_7 == -1) && (VAR_2 == VAR_0));

    if (VAR_7 < 0) {
 FUNC_4(VAR_3, "select");
    }
    if (FUNC_0(VAR_4, &VAR_6)) {
 return 1;
    } else {
 return 0;
    }
}
