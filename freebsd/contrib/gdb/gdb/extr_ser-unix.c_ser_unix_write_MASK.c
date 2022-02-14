
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int fd; } ;


 int FUNC_0 (int ,char const*,int) ;

int
FUNC_1 (struct serial *VAR_0, const char *VAR_1, int VAR_2)
{
  int VAR_3;

  while (VAR_2 > 0)
    {
      VAR_3 = FUNC_0 (VAR_0->fd, VAR_1, VAR_2);

      if (VAR_3 < 0)
 return 1;
      VAR_2 -= VAR_3;
      VAR_1 += VAR_3;
    }
  return 0;
}
