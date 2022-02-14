
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int fd; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (struct serial *VAR_0)
{
  if (VAR_0->fd < 0)
    return;

  FUNC_0 (VAR_0->fd);
  VAR_0->fd = -1;
}
