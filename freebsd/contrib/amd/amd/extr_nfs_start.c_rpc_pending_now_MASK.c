
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_4(void)
{
  struct timeval VAR_2;
  int VAR_3;
  fd_set VAR_4;

  FUNC_2(&VAR_4);
  FUNC_1(VAR_1, &VAR_4);

  VAR_2.tv_sec = VAR_2.tv_usec = 0;
  VAR_3 = FUNC_3(VAR_0, &VAR_4, (fd_set *) ((void*)0), (fd_set *) ((void*)0), &VAR_2);
  if (VAR_3 < 1)
    return (0);
  if (FUNC_0(VAR_1, &VAR_4))
    return (1);

  return (0);
}
