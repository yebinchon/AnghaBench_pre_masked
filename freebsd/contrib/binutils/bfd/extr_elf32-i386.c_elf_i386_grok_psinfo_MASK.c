
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {char* core_command; void* core_program; } ;
struct TYPE_4__ {int namesz; int descsz; scalar_t__ descdata; int namedata; } ;
typedef TYPE_1__ Elf_Internal_Note ;


 int FALSE ;
 int TRUE ;
 void* _bfd_elfcore_strndup (int *,scalar_t__,int) ;
 int bfd_get_32 (int *,scalar_t__) ;
 TYPE_2__* elf_tdata (int *) ;
 scalar_t__ strcmp (int ,char*) ;
 int strlen (char*) ;

__attribute__((used)) static bfd_boolean
elf_i386_grok_psinfo (bfd *abfd, Elf_Internal_Note *note)
{
  if (note->namesz == 8 && strcmp (note->namedata, "FreeBSD") == 0)
    {
      int pr_version = bfd_get_32 (abfd, note->descdata);

      if (pr_version != 1)
 return FALSE;

      elf_tdata (abfd)->core_program
 = _bfd_elfcore_strndup (abfd, note->descdata + 8, 17);
      elf_tdata (abfd)->core_command
 = _bfd_elfcore_strndup (abfd, note->descdata + 25, 81);
    }
  else
    {
      switch (note->descsz)
 {
 default:
   return FALSE;

 case 124:
   elf_tdata (abfd)->core_program
     = _bfd_elfcore_strndup (abfd, note->descdata + 28, 16);
   elf_tdata (abfd)->core_command
     = _bfd_elfcore_strndup (abfd, note->descdata + 44, 80);
 }
    }




  {
    char *command = elf_tdata (abfd)->core_command;
    int n = strlen (command);

    if (0 < n && command[n - 1] == ' ')
      command[n - 1] = '\0';
  }

  return TRUE;
}
