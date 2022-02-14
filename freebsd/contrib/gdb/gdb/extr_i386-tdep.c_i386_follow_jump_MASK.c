
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 long FUNC_0 (scalar_t__,int) ;
 unsigned char FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_0)
{
  unsigned char VAR_1;
  long VAR_2 = 0;
  int VAR_3 = 0;

  VAR_1 = FUNC_1 (VAR_0, 1);
  if (VAR_1 == 0x66)
    {
      VAR_3 = 1;
      VAR_1 = FUNC_1 (VAR_0 + 1, 1);
    }

  switch (VAR_1)
    {
    case 0xe9:

      if (VAR_3)
 {
   VAR_2 = FUNC_0 (VAR_0 + 2, 2);



   VAR_2 += 4;
 }
      else
 {
   VAR_2 = FUNC_0 (VAR_0 + 1, 4);


   VAR_2 += 5;
 }
      break;
    case 0xeb:

      VAR_2 = FUNC_0 (VAR_0 + VAR_3 + 1, 1);

      VAR_2 += VAR_3 + 2;
      break;
    }

  return VAR_0 + VAR_2;
}
