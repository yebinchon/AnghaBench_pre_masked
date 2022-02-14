
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {int core_signal; int core_pid; } ;
struct TYPE_4__ {int descsz; scalar_t__ descpos; scalar_t__ descdata; } ;
typedef TYPE_1__ Elf_Internal_Note ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,size_t,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 TYPE_2__* FUNC_3 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_1, Elf_Internal_Note *VAR_2)
{
  int VAR_3;
  size_t VAR_4;

  switch (VAR_2->descsz)
    {
      default:
 return VAR_0;

      case 148:

 FUNC_3 (VAR_1)->core_signal = FUNC_1 (VAR_1, VAR_2->descdata + 12);


 FUNC_3 (VAR_1)->core_pid = FUNC_2 (VAR_1, VAR_2->descdata + 24);


 VAR_3 = 72;
 VAR_4 = 72;

 break;

      case 96:

 if (FUNC_3(VAR_1)->core_signal == 0)
   FUNC_3 (VAR_1)->core_signal = ((int *)(VAR_2->descdata))[5];


 FUNC_3 (VAR_1)->core_pid = ((int *)(VAR_2->descdata))[6];


 VAR_3 = 28;
 VAR_4 = 68;
 break;
    }


  return FUNC_0 (VAR_1, ".reg",
       VAR_4, VAR_2->descpos + VAR_3);
}
