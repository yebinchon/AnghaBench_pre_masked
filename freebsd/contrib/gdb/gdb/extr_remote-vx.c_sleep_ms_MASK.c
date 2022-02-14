
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static void
FUNC_2 (long VAR_2)
{
  struct timeval VAR_3;
  int VAR_4;

  VAR_3.tv_sec = 0;
  VAR_3.tv_usec = VAR_2 * 1000;

  VAR_4 = FUNC_1 (0, (fd_set *) 0, (fd_set *) 0, (fd_set *) 0,
     &VAR_3);

  if (VAR_4 < 0 && VAR_1 != VAR_0)
    FUNC_0 ("select");
}
