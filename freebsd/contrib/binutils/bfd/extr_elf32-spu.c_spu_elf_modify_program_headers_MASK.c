
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spu_link_hash_table {scalar_t__ num_overlays; TYPE_2__* ovtab; } ;
struct elf_segment_map {scalar_t__ count; int * sections; struct elf_segment_map* next; } ;
struct elf_obj_tdata {unsigned int program_header_size; struct elf_segment_map* segment_map; TYPE_3__* phdr; } ;
struct elf_backend_data {TYPE_1__* s; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_8__ {unsigned int ovl_index; } ;
struct TYPE_7__ {unsigned int p_offset; scalar_t__ p_type; int p_filesz; int p_memsz; unsigned int p_vaddr; int p_flags; } ;
struct TYPE_6__ {scalar_t__ size; int owner; int * contents; } ;
struct TYPE_5__ {unsigned int sizeof_phdr; } ;
typedef TYPE_3__ Elf_Internal_Phdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int,int *) ;
 struct elf_obj_tdata* FUNC_1 (int *) ;
 struct elf_backend_data* FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int ) ;
 struct spu_link_hash_table* FUNC_4 (struct bfd_link_info*) ;

__attribute__((used)) static int
FUNC_5 (bfd *VAR_3, struct bfd_link_info *VAR_4)
{
  const struct elf_backend_data *VAR_5;
  struct elf_obj_tdata *VAR_6;
  Elf_Internal_Phdr *VAR_7, *VAR_8;
  struct spu_link_hash_table *VAR_9;
  unsigned int VAR_10;
  unsigned int VAR_11;

  if (VAR_4 == ((void*)0))
    return VAR_2;

  VAR_5 = FUNC_2 (VAR_3);
  VAR_6 = FUNC_1 (VAR_3);
  VAR_7 = VAR_6->phdr;
  VAR_10 = VAR_6->program_header_size / VAR_5->s->sizeof_phdr;
  VAR_9 = FUNC_4 (VAR_4);
  if (VAR_9->num_overlays != 0)
    {
      struct elf_segment_map *VAR_12;
      unsigned int VAR_13;

      for (VAR_11 = 0, VAR_12 = FUNC_1 (VAR_3)->segment_map; VAR_12; ++VAR_11, VAR_12 = VAR_12->next)
 if (VAR_12->count != 0
     && (VAR_13 = FUNC_3 (VAR_12->sections[0])->ovl_index) != 0)
   {

     VAR_7[VAR_11].p_flags |= VAR_0;

     if (VAR_9->ovtab != ((void*)0) && VAR_9->ovtab->size != 0)
       {
  bfd_byte *VAR_14 = VAR_9->ovtab->contents;
  unsigned int VAR_15 = (VAR_13 - 1) * 16 + 8;


  FUNC_0 (VAR_9->ovtab->owner, VAR_7[VAR_11].p_offset, VAR_14 + VAR_15);
       }
   }
    }





  VAR_8 = ((void*)0);
  for (VAR_11 = VAR_10; VAR_11-- != 0; )
    if (VAR_7[VAR_11].p_type == VAR_1)
      {
 unsigned VAR_16;

 VAR_16 = -VAR_7[VAR_11].p_filesz & 15;
 if (VAR_16 != 0
     && VAR_8 != ((void*)0)
     && VAR_7[VAR_11].p_offset + VAR_7[VAR_11].p_filesz > VAR_8->p_offset - VAR_16)
   break;

 VAR_16 = -VAR_7[VAR_11].p_memsz & 15;
 if (VAR_16 != 0
     && VAR_8 != ((void*)0)
     && VAR_7[VAR_11].p_filesz != 0
     && VAR_7[VAR_11].p_vaddr + VAR_7[VAR_11].p_memsz > VAR_8->p_vaddr - VAR_16
     && VAR_7[VAR_11].p_vaddr + VAR_7[VAR_11].p_memsz <= VAR_8->p_vaddr)
   break;

 if (VAR_7[VAR_11].p_filesz != 0)
   VAR_8 = &VAR_7[VAR_11];
      }

  if (VAR_11 == (unsigned int) -1)
    for (VAR_11 = VAR_10; VAR_11-- != 0; )
      if (VAR_7[VAR_11].p_type == VAR_1)
 {
 unsigned VAR_17;

 VAR_17 = -VAR_7[VAR_11].p_filesz & 15;
 VAR_7[VAR_11].p_filesz += VAR_17;

 VAR_17 = -VAR_7[VAR_11].p_memsz & 15;
 VAR_7[VAR_11].p_memsz += VAR_17;
      }

  return VAR_2;
}
