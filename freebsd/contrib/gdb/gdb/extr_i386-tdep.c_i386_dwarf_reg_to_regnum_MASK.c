
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (int VAR_3)
{


  if (VAR_3 >= 0 && VAR_3 <= 9)
    {

      return VAR_3;
    }
  else if (VAR_3 >= 11 && VAR_3 <= 18)
    {

      return VAR_3 - 11 + VAR_0;
    }
  else if (VAR_3 >= 21)
    {

      return FUNC_0 (VAR_3);
    }


  return VAR_2 + VAR_1;
}
