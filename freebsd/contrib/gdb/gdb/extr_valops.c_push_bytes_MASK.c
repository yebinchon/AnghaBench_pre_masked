
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,int) ;

CORE_ADDR
FUNC_2 (CORE_ADDR VAR_0, char *VAR_1, int VAR_2)
{
  if (FUNC_0 (1, 2))
    {

      VAR_0 -= VAR_2;
      FUNC_1 (VAR_0, VAR_1, VAR_2);
    }
  else
    {

      FUNC_1 (VAR_0, VAR_1, VAR_2);
      VAR_0 += VAR_2;
    }

  return VAR_0;
}
