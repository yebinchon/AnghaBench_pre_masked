
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,long,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4 (char *VAR_1,
   long VAR_2)
{
  do
    {
      VAR_0;
      FUNC_1 (VAR_1, VAR_2, 0);
      if (VAR_1[0] == 0)
 FUNC_0 ("Target does not support this command.");
      else if (VAR_1[0] == 'E')
 FUNC_3 (VAR_1);
      else if (VAR_1[0] == 'O' &&
        VAR_1[1] != 'K')
 FUNC_2 (VAR_1 + 1);
      else
 return VAR_1;
    }
  while (1);
}
