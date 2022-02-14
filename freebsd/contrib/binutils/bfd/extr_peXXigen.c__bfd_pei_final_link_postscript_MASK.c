
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int value; TYPE_2__* section; } ;
struct TYPE_12__ {TYPE_3__ def; } ;
struct TYPE_13__ {TYPE_4__ u; } ;
struct coff_link_hash_entry {TYPE_5__ root; } ;
struct coff_final_link_info {struct bfd_link_info* info; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_15__ {int ImageBase; TYPE_6__* DataDirectory; } ;
struct TYPE_16__ {TYPE_7__ pe_opthdr; } ;
struct TYPE_14__ {int VirtualAddress; int Size; } ;
struct TYPE_10__ {int output_offset; TYPE_1__* output_section; } ;
struct TYPE_9__ {int vma; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct bfd_link_info*) ;
 struct coff_link_hash_entry* FUNC_3 (int ,char*,int ,int ,int ) ;
 TYPE_8__* FUNC_4 (int *) ;

bfd_boolean
FUNC_5 (bfd * VAR_5, struct coff_final_link_info *VAR_6)
{
  struct coff_link_hash_entry *VAR_7;
  struct bfd_link_info *VAR_8 = VAR_6->info;
  bfd_boolean VAR_9 = VAR_4;
  VAR_7 = FUNC_3 (FUNC_2 (VAR_8),
         ".idata$2", VAR_0, VAR_0, VAR_4);
  if (VAR_7 != ((void*)0))
    {



      if (VAR_7->root.u.def.section != ((void*)0)
   && VAR_7->root.u.def.section->output_section != ((void*)0))
 FUNC_4 (VAR_5)->pe_opthdr.DataDirectory[VAR_2].VirtualAddress =
   (VAR_7->root.u.def.value
    + VAR_7->root.u.def.section->output_section->vma
    + VAR_7->root.u.def.section->output_offset);
      else
 {
   FUNC_1
     (FUNC_0("%B: unable to fill in DataDictionary[1] because .idata$2 is missing"),
      VAR_5);
   VAR_9 = VAR_0;
 }

      VAR_7 = FUNC_3 (FUNC_2 (VAR_8),
      ".idata$4", VAR_0, VAR_0, VAR_4);
      if (VAR_7 != ((void*)0)
   && VAR_7->root.u.def.section != ((void*)0)
   && VAR_7->root.u.def.section->output_section != ((void*)0))
 FUNC_4 (VAR_5)->pe_opthdr.DataDirectory[VAR_2].Size =
   ((VAR_7->root.u.def.value
     + VAR_7->root.u.def.section->output_section->vma
     + VAR_7->root.u.def.section->output_offset)
    - FUNC_4 (VAR_5)->pe_opthdr.DataDirectory[VAR_2].VirtualAddress);
      else
 {
   FUNC_1
     (FUNC_0("%B: unable to fill in DataDictionary[1] because .idata$4 is missing"),
      VAR_5);
   VAR_9 = VAR_0;
 }



      VAR_7 = FUNC_3 (FUNC_2 (VAR_8),
      ".idata$5", VAR_0, VAR_0, VAR_4);
      if (VAR_7 != ((void*)0)
   && VAR_7->root.u.def.section != ((void*)0)
   && VAR_7->root.u.def.section->output_section != ((void*)0))
 FUNC_4 (VAR_5)->pe_opthdr.DataDirectory[VAR_1].VirtualAddress =
   (VAR_7->root.u.def.value
    + VAR_7->root.u.def.section->output_section->vma
    + VAR_7->root.u.def.section->output_offset);
      else
 {
   FUNC_1
     (FUNC_0("%B: unable to fill in DataDictionary[12] because .idata$5 is missing"),
      VAR_5);
   VAR_9 = VAR_0;
 }

      VAR_7 = FUNC_3 (FUNC_2 (VAR_8),
      ".idata$6", VAR_0, VAR_0, VAR_4);
      if (VAR_7 != ((void*)0)
   && VAR_7->root.u.def.section != ((void*)0)
   && VAR_7->root.u.def.section->output_section != ((void*)0))
 FUNC_4 (VAR_5)->pe_opthdr.DataDirectory[VAR_1].Size =
   ((VAR_7->root.u.def.value
     + VAR_7->root.u.def.section->output_section->vma
     + VAR_7->root.u.def.section->output_offset)
    - FUNC_4 (VAR_5)->pe_opthdr.DataDirectory[VAR_1].VirtualAddress);
      else
 {
   FUNC_1
     (FUNC_0("%B: unable to fill in DataDictionary[PE_IMPORT_ADDRESS_TABLE (12)] because .idata$6 is missing"),
      VAR_5);
   VAR_9 = VAR_0;
 }
    }

  VAR_7 = FUNC_3 (FUNC_2 (VAR_8),
         "__tls_used", VAR_0, VAR_0, VAR_4);
  if (VAR_7 != ((void*)0))
    {
      if (VAR_7->root.u.def.section != ((void*)0)
   && VAR_7->root.u.def.section->output_section != ((void*)0))
 FUNC_4 (VAR_5)->pe_opthdr.DataDirectory[VAR_3].VirtualAddress =
   (VAR_7->root.u.def.value
    + VAR_7->root.u.def.section->output_section->vma
    + VAR_7->root.u.def.section->output_offset
    - FUNC_4 (VAR_5)->pe_opthdr.ImageBase);
      else
 {
   FUNC_1
     (FUNC_0("%B: unable to fill in DataDictionary[9] because __tls_used is missing"),
      VAR_5);
   VAR_9 = VAR_0;
 }

      FUNC_4 (VAR_5)->pe_opthdr.DataDirectory[VAR_3].Size = 0x18;
    }




  return VAR_9;
}
