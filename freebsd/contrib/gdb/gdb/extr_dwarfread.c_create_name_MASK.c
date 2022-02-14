
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obstack {int dummy; } ;


 scalar_t__ FUNC_0 (struct obstack*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3 (char *VAR_0, struct obstack *VAR_1)
{
  int VAR_2;
  char *VAR_3;

  VAR_2 = FUNC_2 (VAR_0) + 1;
  VAR_3 = (char *) FUNC_0 (VAR_1, VAR_2);
  FUNC_1 (VAR_3, VAR_0);
  return (VAR_3);
}
