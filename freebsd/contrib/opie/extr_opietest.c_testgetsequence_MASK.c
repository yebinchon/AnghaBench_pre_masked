
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opie {int opie_n; } ;


 int FUNC_0 (struct opie*) ;

int FUNC_1()
{
  struct opie VAR_0;
  VAR_0.opie_n = 42;

  if (FUNC_0(&VAR_0) != 42)
    return -1;

  return 0;
}
