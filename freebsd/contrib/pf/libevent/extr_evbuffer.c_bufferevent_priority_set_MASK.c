
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int ev_write; int ev_read; } ;


 int FUNC_0 (int *,int) ;

int
FUNC_1(struct bufferevent *VAR_0, int VAR_1)
{
 if (FUNC_0(&VAR_0->ev_read, VAR_1) == -1)
  return (-1);
 if (FUNC_0(&VAR_0->ev_write, VAR_1) == -1)
  return (-1);

 return (0);
}
