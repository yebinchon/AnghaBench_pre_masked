
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sb ;


 char* VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (char*,int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_2 (char**) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_4 (sb *VAR_3)
{
  char *VAR_4;

  if (VAR_2[-1] == '\n')
    FUNC_0 ();

  if (VAR_2 >= VAR_0)
    {
      VAR_0 = FUNC_2 (&VAR_2);
      if (VAR_0 == 0)
 return 0;
    }

  VAR_4 = FUNC_1 (VAR_2, VAR_1);
  FUNC_3 (VAR_3, VAR_2, VAR_4 - VAR_2);
  VAR_2 = VAR_4;






  return *VAR_2++;
}
