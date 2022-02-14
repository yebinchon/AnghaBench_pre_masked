
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pollfd* FUNC_1 (int,int) ;

__attribute__((used)) static struct pollfd *
FUNC_2(int *VAR_2, fd_set *VAR_3, fd_set *VAR_4, fd_set *VAR_5)
{
 struct pollfd *VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_6 = FUNC_1(*VAR_2, sizeof(*VAR_6));
 if (!VAR_6)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < *VAR_2; VAR_7++) {
  if (VAR_3 && FUNC_0(VAR_7, VAR_3)) {
   VAR_6[VAR_8].fd = VAR_7;
   VAR_6[VAR_8].events = VAR_0;
  }

  if (VAR_4 && FUNC_0(VAR_7, VAR_4)) {
   VAR_6[VAR_8].fd = VAR_7;
   VAR_6[VAR_8].events |= VAR_1;
  }

  if (VAR_5 && FUNC_0(VAR_7, VAR_5))
   VAR_6[VAR_8].fd = VAR_7;

  if (VAR_6[VAR_8].fd)
   VAR_8++;
 }

 *VAR_2 = VAR_8;
 return VAR_6;
}
