
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_arch_choice {unsigned long bfd_mach; scalar_t__ bfd_mach_valid; } ;


 unsigned int FUNC_0 (struct mips_arch_choice*) ;
 struct mips_arch_choice* VAR_0 ;

__attribute__((used)) static const struct mips_arch_choice *
FUNC_1 (unsigned long VAR_1)
{
  static unsigned long VAR_2;
  static const struct mips_arch_choice *VAR_3;
  const struct mips_arch_choice *VAR_4;
  unsigned int VAR_5;



  if (VAR_2 == VAR_1
      && VAR_3 != ((void*)0)
      && VAR_3->bfd_mach == VAR_2)
    return VAR_3;

  for (VAR_5 = 0, VAR_4 = ((void*)0); VAR_5 < FUNC_0 (VAR_0) && VAR_4 == ((void*)0); VAR_5++)
    {
      if (VAR_0[VAR_5].bfd_mach_valid
   && VAR_0[VAR_5].bfd_mach == VAR_1)
 {
   VAR_4 = &VAR_0[VAR_5];
   VAR_2 = VAR_1;
   VAR_3 = VAR_4;
 }
    }
  return VAR_4;
}
