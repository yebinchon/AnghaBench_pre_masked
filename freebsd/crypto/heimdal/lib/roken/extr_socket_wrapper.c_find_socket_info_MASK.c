
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int fd; struct socket_info* next; } ;


 struct socket_info* VAR_0 ;

__attribute__((used)) static struct socket_info *FUNC_0(int VAR_1)
{
 struct socket_info *VAR_2;
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->fd == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}
