
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3 (int VAR_1)
{
  if (VAR_1 >= '0' && VAR_1 <= '9')
    {
      return (VAR_1 - '0');
    }
  if (VAR_1 >= 'A' && VAR_1 <= 'F')
    {
      return (VAR_1 - 'A' + 10);
    }
  if (VAR_1 >= 'a' && VAR_1 <= 'f')
    {
      return (VAR_1 - 'a' + 10);
    }
  FUNC_2 (VAR_0, "\nInvalid hex digit '%c'\n", VAR_1);
  FUNC_1 (VAR_0);
  FUNC_0 (1);
}
