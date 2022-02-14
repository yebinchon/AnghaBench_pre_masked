
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int revents; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct pollfd *VAR_2, int VAR_3,
      fd_set *VAR_4, fd_set *VAR_5, fd_set *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10 = 0;

 for (VAR_9 = 0, VAR_7 = 0; VAR_9 < VAR_3; VAR_7++) {
  VAR_8 = FUNC_1(VAR_7);
  if (VAR_8 != VAR_2[VAR_9].fd)
   continue;

  if (VAR_4 && (VAR_2[VAR_9].revents & VAR_0)) {
   FUNC_0(VAR_7, VAR_4);
   VAR_10++;
  }

  if (VAR_5 && (VAR_2[VAR_9].revents & VAR_1)) {
   FUNC_0(VAR_7, VAR_5);
   VAR_10++;
  }

  if (VAR_6 && (VAR_2[VAR_9].revents & ~(VAR_0 | VAR_1))) {
   FUNC_0(VAR_7, VAR_6);
   VAR_10++;
  }
  VAR_9++;
 }

 return VAR_10;
}
