
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct objfile {TYPE_4__* obfd; } ;
struct comp_unit {int addr_size; char* dwarf_frame_buffer; int dwarf_frame_size; void* dwarf_frame_section; int * cie; scalar_t__ tbase; TYPE_4__* abfd; scalar_t__ dbase; struct objfile* objfile; } ;
struct TYPE_6__ {scalar_t__ vma; } ;
typedef TYPE_2__ asection ;
struct TYPE_7__ {TYPE_1__* arch_info; } ;
struct TYPE_5__ {int bits_per_address; } ;


 TYPE_2__* FUNC_0 (TYPE_4__*,char*) ;
 void* FUNC_1 (void*) ;
 char* FUNC_2 (struct comp_unit*,char*,int) ;
 void* FUNC_3 (struct objfile*,void*) ;
 void* VAR_0 ;
 void* VAR_1 ;

void
FUNC_4 (struct objfile *VAR_2)
{
  struct comp_unit VAR_3;
  char *VAR_4;


  VAR_3.abfd = VAR_2->obfd;
  VAR_3.objfile = VAR_2;
  VAR_3.addr_size = VAR_2->obfd->arch_info->bits_per_address / 8;
  VAR_3.dbase = 0;
  VAR_3.tbase = 0;



  if (VAR_0)
    {
      asection *VAR_5, *VAR_6;

      VAR_3.cie = ((void*)0);
      VAR_3.dwarf_frame_buffer = FUNC_3 (VAR_2,
           VAR_0);

      VAR_3.dwarf_frame_size
 = FUNC_1 (VAR_0);
      VAR_3.dwarf_frame_section = VAR_0;





      VAR_5 = FUNC_0 (VAR_3.abfd, ".got");
      if (VAR_5)
 VAR_3.dbase = VAR_5->vma;



      VAR_6 = FUNC_0 (VAR_3.abfd, ".text");
      if (VAR_6)
 VAR_3.tbase = VAR_6->vma;

      VAR_4 = VAR_3.dwarf_frame_buffer;
      while (VAR_4 < VAR_3.dwarf_frame_buffer + VAR_3.dwarf_frame_size)
 VAR_4 = FUNC_2 (&VAR_3, VAR_4, 1);
    }

  if (VAR_1)
    {
      VAR_3.cie = ((void*)0);
      VAR_3.dwarf_frame_buffer = FUNC_3 (VAR_2,
           VAR_1);
      VAR_3.dwarf_frame_size
 = FUNC_1 (VAR_1);
      VAR_3.dwarf_frame_section = VAR_1;

      VAR_4 = VAR_3.dwarf_frame_buffer;
      while (VAR_4 < VAR_3.dwarf_frame_buffer + VAR_3.dwarf_frame_size)
 VAR_4 = FUNC_2 (&VAR_3, VAR_4, 0);
    }
}
