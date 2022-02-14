
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_arch_info {int arch; } ;
typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;


 struct bfd_arch_info* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * VAR_1 ;

__attribute__((used)) static enum bfd_architecture
FUNC_2 (void)
{






  if (VAR_1 == ((void*)0))
    FUNC_1 ("Can't find bfd architecture for corefile (need execfile).");

  return FUNC_0 (VAR_1);
}
