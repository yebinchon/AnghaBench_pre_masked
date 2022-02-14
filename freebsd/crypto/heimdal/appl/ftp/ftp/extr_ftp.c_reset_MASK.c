
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

void
FUNC_8 (int VAR_3, char **VAR_4)
{
    fd_set VAR_5;
    int VAR_6 = 1;

    FUNC_1 (&VAR_5);
    while (VAR_6 > 0) {
 if (FUNC_4 (VAR_1) >= VAR_0)
     FUNC_3 (1, "fd too large");
 FUNC_0 (FUNC_4 (VAR_1), &VAR_5);
 if ((VAR_6 = FUNC_2 (&VAR_5, 0)) < 0) {
     FUNC_7 ("reset");
     VAR_2 = -1;
     FUNC_6(0);
 } else if (VAR_6) {
     FUNC_5(0);
 }
    }
}
