
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_3__ {scalar_t__ st_shndx; } ;
typedef TYPE_1__ Elf_Internal_Sym ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_5, Elf_Internal_Sym *VAR_6)
{
  if (VAR_6->st_shndx > VAR_1)
    {


      FUNC_1)
 (FUNC_0("%B: Too many sections: %d (>= %d)"),
  VAR_5, FUNC_2 (VAR_5), VAR_2);
      FUNC_3 (VAR_4);
      return VAR_0;
    }
  return VAR_3;
}
