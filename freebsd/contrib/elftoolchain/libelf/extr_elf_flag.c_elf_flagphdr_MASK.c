
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* e_phdr64; void* e_phdr32; } ;
struct TYPE_8__ {TYPE_1__ e_phdr; } ;
struct TYPE_9__ {TYPE_2__ e_elf; } ;
struct TYPE_10__ {scalar_t__ e_kind; int e_class; TYPE_3__ e_u; } ;
typedef scalar_t__ Elf_Cmd ;
typedef TYPE_4__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 unsigned int FUNC_1 (TYPE_4__*,scalar_t__,unsigned int) ;

unsigned int
FUNC_2(Elf *VAR_8, Elf_Cmd VAR_9, unsigned int VAR_10)
{
 int VAR_11;
 void *VAR_12;

 if (VAR_8 == ((void*)0))
  return (0);

 if ((VAR_9 != VAR_4 && VAR_9 != VAR_3) ||
     (VAR_8->e_kind != VAR_6) || (VAR_10 & ~VAR_5) != 0 ||
     ((VAR_11 = VAR_8->e_class) != VAR_1 && VAR_11 != VAR_2)) {
  FUNC_0(VAR_0, 0);
  return (0);
 }

 if (VAR_11 == VAR_1)
  VAR_12 = VAR_8->e_u.e_elf.e_phdr.e_phdr32;
 else
  VAR_12 = VAR_8->e_u.e_elf.e_phdr.e_phdr64;

 if (VAR_12 == ((void*)0)) {
  FUNC_0(VAR_7, 0);
  return (0);
 }

 return (FUNC_1(VAR_8, VAR_9, VAR_10));
}
