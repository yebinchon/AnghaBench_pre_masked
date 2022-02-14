
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comp_unit {char* dwarf_frame_buffer; int dwarf_frame_size; TYPE_2__* dwarf_frame_section; } ;
typedef int ptrdiff_t ;
struct TYPE_4__ {int name; TYPE_1__* owner; } ;
struct TYPE_3__ {int filename; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 char* FUNC_1 (struct comp_unit*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_2 (struct comp_unit *VAR_1, char *VAR_2, int VAR_3)
{
  enum { NONE, ALIGN4, ALIGN8, FAIL } VAR_4 = NONE;
  char *VAR_5;
  const char *VAR_6;
  ptrdiff_t VAR_7;

  while (1)
    {
      VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_3);
      if (VAR_5 != ((void*)0))
 break;
      VAR_7 = VAR_2 - VAR_1->dwarf_frame_buffer;
      if (VAR_4 < ALIGN4 && (VAR_7 & 3) != 0)
 {
   VAR_2 += 4 - (VAR_7 & 3);
   VAR_4 = ALIGN4;
   continue;
 }
      if (VAR_4 < ALIGN8 && (VAR_7 & 7) != 0)
 {
   VAR_2 += 8 - (VAR_7 & 7);
   VAR_4 = ALIGN8;
   continue;
 }




      VAR_4 = FAIL;
      VAR_5 = VAR_1->dwarf_frame_buffer + VAR_1->dwarf_frame_size;
      break;
    }

  switch (VAR_4)
    {
    case NONE:
      break;

    case ALIGN4:
      FUNC_0 (&VAR_0,
   "Corrupt data in %s:%s; align 4 workaround apparently succeeded",
   VAR_1->dwarf_frame_section->owner->filename,
   VAR_1->dwarf_frame_section->name);
      break;

    case ALIGN8:
      FUNC_0 (&VAR_0,
   "Corrupt data in %s:%s; align 8 workaround apparently succeeded",
   VAR_1->dwarf_frame_section->owner->filename,
   VAR_1->dwarf_frame_section->name);
      break;

    default:
      FUNC_0 (&VAR_0,
   "Corrupt data in %s:%s",
   VAR_1->dwarf_frame_section->owner->filename,
   VAR_1->dwarf_frame_section->name);
      break;
    }

  return VAR_5;
}
