
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_3__ {int descpos; int descsz; } ;
typedef TYPE_1__ Elf_Internal_Note ;


 int FUNC_0 (int *,char*,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_0,
     char *VAR_1,
     Elf_Internal_Note *VAR_2)
{
  return FUNC_0 (VAR_0, VAR_1,
       VAR_2->descsz, VAR_2->descpos);
}
