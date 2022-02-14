
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int fd; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct pollfd *VAR_2, int *VAR_3,
       fd_set *VAR_4, fd_set *VAR_5, fd_set *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < *VAR_3; VAR_7++) {
  VAR_8 = (VAR_4 && FUNC_0(VAR_7, VAR_4)) ? VAR_0 : 0;
  if (VAR_5 && FUNC_0(VAR_7, VAR_5))
   VAR_8 |= VAR_1;

  if (VAR_8 || (VAR_6 && FUNC_0(VAR_7, VAR_6))) {
   VAR_2[VAR_9].fd = FUNC_1(VAR_7);
   VAR_2[VAR_9++].events = VAR_8;
  }
 }

 *VAR_3 = VAR_9;
}
