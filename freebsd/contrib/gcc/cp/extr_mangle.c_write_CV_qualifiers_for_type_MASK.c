
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char) ;

__attribute__((used)) static int
FUNC_2 (const tree VAR_3)
{
  int VAR_4 = 0;
  if (FUNC_0 (VAR_3) & VAR_1)
    {
      FUNC_1 ('r');
      ++VAR_4;
    }
  if (FUNC_0 (VAR_3) & VAR_2)
    {
      FUNC_1 ('V');
      ++VAR_4;
    }
  if (FUNC_0 (VAR_3) & VAR_0)
    {
      FUNC_1 ('K');
      ++VAR_4;
    }

  return VAR_4;
}
