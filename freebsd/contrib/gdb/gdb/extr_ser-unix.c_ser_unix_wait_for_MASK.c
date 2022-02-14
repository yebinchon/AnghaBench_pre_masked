
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct serial {scalar_t__ fd; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,int *,int ,int *,struct timeval*) ;

int
FUNC_3 (struct serial *VAR_4, int VAR_5)
{
  while (1)
    {
      int VAR_6;
      struct timeval VAR_7;
      fd_set VAR_8, VAR_9;





      VAR_7.tv_sec = VAR_5;
      VAR_7.tv_usec = 0;

      FUNC_1 (&VAR_8);
      FUNC_1 (&VAR_9);
      FUNC_0 (VAR_4->fd, &VAR_8);
      FUNC_0 (VAR_4->fd, &VAR_9);

      if (VAR_5 >= 0)
 VAR_6 = FUNC_2 (VAR_4->fd + 1, &VAR_8, 0, &VAR_9, &VAR_7);
      else
 VAR_6 = FUNC_2 (VAR_4->fd + 1, &VAR_8, 0, &VAR_9, 0);

      if (VAR_6 <= 0)
 {
   if (VAR_6 == 0)
     return VAR_2;
   else if (VAR_3 == VAR_0)
     continue;
   else
     return VAR_1;
 }

      return 0;
    }
}
