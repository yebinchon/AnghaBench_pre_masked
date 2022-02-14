
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {int alignment_power; int filepos; int size; } ;
typedef TYPE_1__ asection ;
struct TYPE_9__ {long core_lwpid; } ;
struct TYPE_8__ {int descpos; int descsz; } ;
typedef TYPE_2__ Elf_Internal_Note ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,scalar_t__) ;
 TYPE_1__* FUNC_1 (int *,char*,int ) ;
 TYPE_5__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,TYPE_1__*) ;
 int FUNC_4 (char*,char*,char*,long) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (bfd *VAR_3,
         Elf_Internal_Note *VAR_4,
         long VAR_5,
         char *VAR_6)
{
  char VAR_7[100];
  char *VAR_8;
  asection *VAR_9;


  FUNC_4 (VAR_7, "%s/%ld", VAR_6, VAR_5);

  VAR_8 = FUNC_0 (VAR_3, FUNC_6 (VAR_7) + 1);
  if (VAR_8 == ((void*)0))
    return VAR_0;
  FUNC_5 (VAR_8, VAR_7);

  VAR_9 = FUNC_1 (VAR_3, VAR_8, VAR_1);
  if (VAR_9 == ((void*)0))
    return VAR_0;

  VAR_9->size = VAR_4->descsz;
  VAR_9->filepos = VAR_4->descpos;
  VAR_9->alignment_power = 2;


  if (FUNC_2 (VAR_3)->core_lwpid == VAR_5)
    return FUNC_3 (VAR_3, VAR_6, VAR_9);

  return VAR_2;
}
