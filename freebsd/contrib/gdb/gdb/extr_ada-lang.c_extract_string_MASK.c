
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__,char*,int) ;

void
FUNC_1 (CORE_ADDR VAR_0, char *VAR_1)
{
  int VAR_2 = 0;



  do
    {
      FUNC_0 (VAR_0 + VAR_2 * sizeof (char),
     VAR_1 + VAR_2 * sizeof (char), sizeof (char));
      VAR_2++;
    }
  while (VAR_1[VAR_2 - 1] != '\000');
}
