
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int,char*,int) ;

CORE_ADDR
FUNC_3 (CORE_ADDR VAR_2, ULONGEST VAR_3)
{
  int VAR_4 = VAR_0;
  char VAR_5[VAR_1];

  FUNC_1 (VAR_5, VAR_4, VAR_3);
  if (FUNC_0 (1, 2))
    {

      VAR_2 -= VAR_4;
      FUNC_2 (VAR_2, VAR_5, VAR_4);
    }
  else
    {

      FUNC_2 (VAR_2, VAR_5, VAR_4);
      VAR_2 += VAR_4;
    }

  return VAR_2;
}
