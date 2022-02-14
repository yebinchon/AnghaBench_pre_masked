
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (int,int *,int *,int *,struct timeval*) ;

int
FUNC_6(int VAR_3)
{
    static struct timeval VAR_4 = { 0, 0 };
    fd_set VAR_5;
    int VAR_6;

    do {
 FUNC_2(&VAR_5);
 FUNC_1(VAR_3, &VAR_5);
 FUNC_4((char *)&VAR_4, 0, sizeof VAR_4);
 VAR_6 = FUNC_5(VAR_3+1, (fd_set *)0, (fd_set *)0, &VAR_5, &VAR_4);
    } while ((VAR_6 == -1) && (VAR_1 == VAR_0));

    if (VAR_6 < 0) {
 FUNC_3(VAR_2, "select");
    }
    if (FUNC_0(VAR_3, &VAR_5)) {
 return 1;
    } else {
 return 0;
    }
}
