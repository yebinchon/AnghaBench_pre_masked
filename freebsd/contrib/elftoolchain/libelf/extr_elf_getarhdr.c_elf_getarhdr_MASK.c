
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * e_arhdr; } ;
struct TYPE_6__ {int e_flags; TYPE_1__ e_hdr; } ;
typedef int Elf_Arhdr ;
typedef TYPE_2__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (TYPE_2__*) ;

Elf_Arhdr *
FUNC_2(Elf *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if (VAR_2->e_flags & VAR_1)
  return (VAR_2->e_hdr.e_arhdr);

 return (FUNC_1(VAR_2));
}
