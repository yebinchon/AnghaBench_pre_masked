
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_6__ {scalar_t__ size; } ;
typedef TYPE_1__ asection ;
struct TYPE_7__ {unsigned int mach; int string; } ;


 int ARRAY_SIZE (TYPE_4__*) ;
 int NOTE_ARCH_STRING ;
 TYPE_4__* architectures ;
 int arm_check_note (int *,int *,scalar_t__,int ,char**) ;
 TYPE_1__* bfd_get_section_by_name (int *,char const*) ;
 unsigned int bfd_mach_arm_unknown ;
 int bfd_malloc_and_get_section (int *,TYPE_1__*,int **) ;
 int free (int *) ;
 scalar_t__ strcmp (char*,int ) ;

unsigned int
bfd_arm_get_mach_from_notes (bfd *abfd, const char *note_section)
{
  asection * arm_arch_section;
  bfd_size_type buffer_size;
  bfd_byte * buffer;
  char * arch_string;
  int i;




  arm_arch_section = bfd_get_section_by_name (abfd, note_section);

  if (arm_arch_section == ((void*)0))
    return bfd_mach_arm_unknown;

  buffer_size = arm_arch_section->size;
  if (buffer_size == 0)
    return bfd_mach_arm_unknown;

  if (!bfd_malloc_and_get_section (abfd, arm_arch_section, &buffer))
    goto FAIL;


  if (! arm_check_note (abfd, buffer, buffer_size, NOTE_ARCH_STRING, & arch_string))
    goto FAIL;


  for (i = ARRAY_SIZE (architectures); i--;)
    if (strcmp (arch_string, architectures[i].string) == 0)
      {
 free (buffer);
 return architectures[i].mach;
      }

 FAIL:
  if (buffer != ((void*)0))
    free (buffer);
  return bfd_mach_arm_unknown;
}
