
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;

int
FUNC_2 (rtx VAR_0)
{
  int VAR_1;
  unsigned long VAR_2 = FUNC_0 (VAR_0);



  if ((VAR_2 & 0x80000000) == 0)
    {
      FUNC_1 (VAR_2 & 0xffffffff);

      VAR_1 = 1;
      while (((VAR_2 <<= 1) & 0x80000000) == 0)
 ++VAR_1;
      return VAR_1;
    }



  if ((VAR_2 & 1) == 0 || (VAR_2 & 0xffffffff) == 0xffffffff)
    return 0;



  VAR_1 = 31;
  while (((VAR_2 >>= 1) & 1) != 0)
    --VAR_1;

  return VAR_1;
}
