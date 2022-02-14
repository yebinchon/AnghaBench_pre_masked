
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variant {int arch; unsigned long mach; scalar_t__ name; } ;
typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;


 struct variant* VAR_0 ;

__attribute__((used)) static const struct variant *
FUNC_0 (enum bfd_architecture VAR_1, unsigned long VAR_2)
{
  const struct variant *VAR_3;

  for (VAR_3 = VAR_0; VAR_3->name; VAR_3++)
    if (VAR_1 == VAR_3->arch && VAR_2 == VAR_3->mach)
      return VAR_3;

  return ((void*)0);
}
