
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (char*,int ) ;

int
FUNC_10(void)
{



    sigset_t VAR_8, VAR_9;
    int VAR_10;





    if (!VAR_4)
 return (0);


    FUNC_4(&VAR_8);
    FUNC_3(&VAR_8, VAR_2);
    (void)FUNC_5(VAR_3, &VAR_8, &VAR_9);
    FUNC_0(&VAR_9, VAR_7);
    VAR_10 = FUNC_8(VAR_1, &VAR_6);
    FUNC_1(&VAR_9);
    if (VAR_10 == -1) {



 return -1;
    }


    VAR_4 = 0;
    return (0);
}
