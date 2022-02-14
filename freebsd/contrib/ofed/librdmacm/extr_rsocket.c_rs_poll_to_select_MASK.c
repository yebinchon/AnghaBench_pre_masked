
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int revents; int fd; } ;
typedef int fd_set ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(int VAR_3, struct pollfd *VAR_4, fd_set *VAR_5,
    fd_set *VAR_6, fd_set *VAR_7)
{
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_5 && (VAR_4[VAR_8].revents & (VAR_1 | VAR_0))) {
   FUNC_0(VAR_4[VAR_8].fd, VAR_5);
   VAR_9++;
  }

  if (VAR_6 && (VAR_4[VAR_8].revents & VAR_2)) {
   FUNC_0(VAR_4[VAR_8].fd, VAR_6);
   VAR_9++;
  }

  if (VAR_7 && (VAR_4[VAR_8].revents & ~(VAR_1 | VAR_2))) {
   FUNC_0(VAR_4[VAR_8].fd, VAR_7);
   VAR_9++;
  }
 }
 return VAR_9;
}
