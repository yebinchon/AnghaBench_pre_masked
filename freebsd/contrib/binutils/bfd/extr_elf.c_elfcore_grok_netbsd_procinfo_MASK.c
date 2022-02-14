
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_6__ {int core_command; void* core_pid; void* core_signal; } ;
struct TYPE_5__ {scalar_t__ descdata; } ;
typedef TYPE_1__ Elf_Internal_Note ;


 int FUNC_0 (int *,scalar_t__,int) ;
 void* FUNC_1 (int *,int *) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_0, Elf_Internal_Note *VAR_1)
{

  FUNC_2 (VAR_0)->core_signal
    = FUNC_1 (VAR_0, (bfd_byte *) VAR_1->descdata + 0x08);


  FUNC_2 (VAR_0)->core_pid
    = FUNC_1 (VAR_0, (bfd_byte *) VAR_1->descdata + 0x50);


  FUNC_2 (VAR_0)->core_command
    = FUNC_0 (VAR_0, VAR_1->descdata + 0x7c, 31);

  return FUNC_3 (VAR_0, ".note.netbsdcore.procinfo",
       VAR_1);
}
