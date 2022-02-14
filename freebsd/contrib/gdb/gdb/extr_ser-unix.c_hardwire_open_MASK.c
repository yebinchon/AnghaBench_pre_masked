
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {scalar_t__ fd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static int
FUNC_1 (struct serial *VAR_1, const char *VAR_2)
{
  VAR_1->fd = FUNC_0 (VAR_2, VAR_0);
  if (VAR_1->fd < 0)
    return -1;

  return 0;
}
