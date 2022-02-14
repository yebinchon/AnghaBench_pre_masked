
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_target ;


 int ** VAR_0 ;

const bfd_target *
FUNC_0 (int (*VAR_1) (const bfd_target *, void *),
         void *VAR_2)
{
  const bfd_target * const *VAR_3;

  for (VAR_3 = VAR_0; *VAR_3 != ((void*)0); VAR_3 ++)
    if (VAR_1 (*VAR_3, VAR_2))
      return *VAR_3;

  return ((void*)0);
}
