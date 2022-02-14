
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtr_reg {unsigned int base; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static unsigned long
FUNC_2 (void)
{
  unsigned VAR_2;
  unsigned VAR_3;
  unsigned long VAR_4, VAR_5;
  struct dtr_reg VAR_6;

  if (VAR_1 > 0 && VAR_1 <= 0xfffff)
    return VAR_1;


  __asm__ __volatile__ ("sgdt   %0" : "=m" (VAR_6) : );
  __asm__ __volatile__ ("str    %0" : "=m" (VAR_3) : );






  VAR_2 = VAR_6.base + (VAR_3 & 0xfff8) + 2;



  if (VAR_2 > 0xfffff)
    return 0;

  FUNC_1 (VAR_0);
  VAR_4 = FUNC_0 (VAR_2) & 0xffffffU;
  VAR_4 += FUNC_0 (VAR_2 + 2) & 0xff000000U;
  if (VAR_4 > 0xfffff)
    return 0;



  VAR_5 = FUNC_0 (VAR_4 + 0x1c) & ~0xfff;
  if (VAR_5 > 0xfffff)
    {
      if (VAR_5 > 0xfffff)
 VAR_5 = 0;
    }

  return VAR_5;
}
