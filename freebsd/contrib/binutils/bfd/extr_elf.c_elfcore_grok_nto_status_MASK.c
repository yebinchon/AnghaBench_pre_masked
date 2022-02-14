
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {int alignment_power; int filepos; int size; } ;
typedef TYPE_1__ asection ;
struct TYPE_9__ {short core_signal; long core_lwpid; void* core_pid; } ;
struct TYPE_8__ {int descpos; int descsz; void* descdata; } ;
typedef TYPE_2__ Elf_Internal_Note ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,scalar_t__) ;
 short FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *,char*,int ) ;
 TYPE_5__* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,TYPE_1__*) ;
 int FUNC_6 (char*,char*,long) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_2, Elf_Internal_Note *VAR_3, long *VAR_4)
{
  void *VAR_5 = VAR_3->descdata;
  char VAR_6[100];
  char *VAR_7;
  asection *VAR_8;
  short VAR_9;
  unsigned VAR_10;


  FUNC_4 (VAR_2)->core_pid = FUNC_2 (VAR_2, (bfd_byte *) VAR_5);


  *VAR_4 = FUNC_2 (VAR_2, (bfd_byte *) VAR_5 + 4);


  VAR_10 = FUNC_2 (VAR_2, (bfd_byte *) VAR_5 + 8);


  if ((VAR_9 = FUNC_1 (VAR_2, (bfd_byte *) VAR_5 + 14)) > 0)
    {
      FUNC_4 (VAR_2)->core_signal = VAR_9;
      FUNC_4 (VAR_2)->core_lwpid = *VAR_4;
    }




  if (VAR_10 & 0x00000080)
    FUNC_4 (VAR_2)->core_lwpid = *VAR_4;


  FUNC_6 (VAR_6, ".qnx_core_status/%ld", *VAR_4);

  VAR_7 = FUNC_0 (VAR_2, FUNC_8 (VAR_6) + 1);
  if (VAR_7 == ((void*)0))
    return VAR_0;
  FUNC_7 (VAR_7, VAR_6);

  VAR_8 = FUNC_3 (VAR_2, VAR_7, VAR_1);
  if (VAR_8 == ((void*)0))
    return VAR_0;

  VAR_8->size = VAR_3->descsz;
  VAR_8->filepos = VAR_3->descpos;
  VAR_8->alignment_power = 2;

  return (FUNC_5 (VAR_2, ".qnx_core_status", VAR_8));
}
