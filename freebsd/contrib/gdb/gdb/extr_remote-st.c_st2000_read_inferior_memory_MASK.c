
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned long,int) ;

__attribute__((used)) static int
FUNC_4 (CORE_ADDR VAR_2, char *VAR_3, int VAR_4)
{
  int VAR_5;


  int VAR_6;


  unsigned long VAR_7;


  int VAR_8;
  if (((VAR_2 - 1) + VAR_4) < VAR_2)
    {
      VAR_1 = VAR_0;
      return 0;
    }

  VAR_7 = VAR_2;
  VAR_6 = 0;
  while (VAR_6 < VAR_4)
    {
      VAR_8 = 16;
      if ((VAR_7 % 16) != 0)
 VAR_8 -= VAR_7 % 16;
      if (VAR_8 > (VAR_4 - VAR_6))
 VAR_8 = (VAR_4 - VAR_6);

      FUNC_3 ("DI.L %x %x\r", VAR_7, VAR_8);
      FUNC_0 (":  ", 1);

      for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++)
 FUNC_2 (&VAR_3[VAR_6++]);

      FUNC_1 (1);

      VAR_7 += VAR_8;
    }
  return VAR_4;
}
