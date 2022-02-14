
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int *,int *,int *,struct timeval*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
    fd_set VAR_1;

    FUNC_1(&VAR_1);

    if (FUNC_2() == 0) {
 FUNC_0(VAR_0, &VAR_1);
 (void) FUNC_3(VAR_0+1, (fd_set *) 0, &VAR_1, (fd_set *) 0,
   (struct timeval *) 0);
    } else {
 while (FUNC_2()) {
     (void) FUNC_4(0);
     FUNC_0(VAR_0, &VAR_1);
     (void) FUNC_3(VAR_0+1, (fd_set *) 0, &VAR_1, (fd_set *) 0,
    (struct timeval *) 0);
 }
    }
}
