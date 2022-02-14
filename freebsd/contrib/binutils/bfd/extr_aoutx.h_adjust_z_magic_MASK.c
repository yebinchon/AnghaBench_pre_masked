
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct internal_exec {void* a_text; scalar_t__ a_data; scalar_t__ a_bss; } ;
struct aout_backend_data {int default_text_vma; int exec_header_not_counted; scalar_t__ zmagic_mapped_contiguous; scalar_t__ text_includes_header; } ;
typedef void* file_ptr ;
typedef void* bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_15__ {int flags; } ;
typedef TYPE_1__ bfd ;
struct TYPE_16__ {int filepos; int vma; int size; int user_set_vma; } ;
typedef TYPE_2__ asection ;
struct TYPE_17__ {scalar_t__ vma; scalar_t__ size; int alignment_power; int user_set_vma; } ;
struct TYPE_14__ {int exec_bytes_size; int zmagic_disk_block_size; int page_size; int segment_size; } ;


 void* FUNC_0 (void*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct internal_exec,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_12__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (void*,int ) ;
 struct aout_backend_data* FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 TYPE_7__* FUNC_6 (TYPE_1__*) ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 TYPE_2__* FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_9 (bfd *VAR_4, struct internal_exec *VAR_5)
{
  bfd_size_type VAR_6, VAR_7;
  file_ptr VAR_8;
  const struct aout_backend_data *VAR_9;

  bfd_boolean VAR_10;

  VAR_9 = FUNC_4 (VAR_4);


  VAR_10 = (VAR_9 != ((void*)0)
   && (VAR_9->text_includes_header
       || FUNC_5 (VAR_4) == VAR_3));
  FUNC_8 (VAR_4)->filepos = (VAR_10
     ? FUNC_2 (VAR_4).exec_bytes_size
     : FUNC_2 (VAR_4).zmagic_disk_block_size);
  if (! FUNC_8 (VAR_4)->user_set_vma)
    {

      FUNC_8 (VAR_4)->vma = ((VAR_4->flags & VAR_0)
     ? 0
     : (VAR_10
        ? (VAR_9->default_text_vma
           + FUNC_2 (VAR_4).exec_bytes_size)
        : VAR_9->default_text_vma));
      VAR_7 = 0;
    }
  else
    {



      if (VAR_10)
 VAR_7 = ((FUNC_8 (VAR_4)->filepos - FUNC_8 (VAR_4)->vma)
      & (FUNC_2 (VAR_4).page_size - 1));
      else
 VAR_7 = ((- FUNC_8 (VAR_4)->vma)
      & (FUNC_2 (VAR_4).page_size - 1));
    }


  if (VAR_10)
    {
      VAR_8 = FUNC_8 (VAR_4)->filepos + FUNC_8 (VAR_4)->size;
      VAR_7 += FUNC_0 (VAR_8, FUNC_2 (VAR_4).page_size) - VAR_8;
    }
  else
    {



      VAR_8 = FUNC_8 (VAR_4)->size;
      VAR_7 += FUNC_0 (VAR_8, FUNC_2 (VAR_4).page_size) - VAR_8;
      VAR_8 += FUNC_8 (VAR_4)->filepos;
    }
  FUNC_8 (VAR_4)->size += VAR_7;
  VAR_8 += VAR_7;


  if (!FUNC_7 (VAR_4)->user_set_vma)
    {
      bfd_vma VAR_11;
      VAR_11 = FUNC_8 (VAR_4)->vma + FUNC_8 (VAR_4)->size;
      FUNC_7 (VAR_4)->vma = FUNC_0 (VAR_11, FUNC_2 (VAR_4).segment_size);
    }
  if (VAR_9 && VAR_9->zmagic_mapped_contiguous)
    {
      asection * VAR_12 = FUNC_8 (VAR_4);
      asection * VAR_13 = FUNC_7 (VAR_4);

      VAR_7 = VAR_13->vma - (VAR_12->vma + VAR_12->size);


      if (VAR_7 > 0)
 VAR_12->size += VAR_7;
    }
  FUNC_7 (VAR_4)->filepos = (FUNC_8 (VAR_4)->filepos
     + FUNC_8 (VAR_4)->size);


  VAR_5->a_text = FUNC_8 (VAR_4)->size;
  if (VAR_10 && (!VAR_9 || (VAR_9 && !VAR_9->exec_header_not_counted)))
    VAR_5->a_text += FUNC_2 (VAR_4).exec_bytes_size;
  if (FUNC_5 (VAR_4) == VAR_3)
    FUNC_1 (*VAR_5, VAR_1);
  else
    FUNC_1 (*VAR_5, VAR_2);


  FUNC_7 (VAR_4)->size
    = FUNC_3 (FUNC_7 (VAR_4)->size,
     FUNC_6 (VAR_4)->alignment_power);
  VAR_5->a_data = FUNC_0 (FUNC_7 (VAR_4)->size,
        FUNC_2 (VAR_4).page_size);
  VAR_6 = VAR_5->a_data - FUNC_7 (VAR_4)->size;


  if (!FUNC_6 (VAR_4)->user_set_vma)
    FUNC_6 (VAR_4)->vma = (FUNC_7 (VAR_4)->vma
         + FUNC_7 (VAR_4)->size);







  if (FUNC_3 (FUNC_6 (VAR_4)->vma, FUNC_6 (VAR_4)->alignment_power)
      == FUNC_7 (VAR_4)->vma + FUNC_7 (VAR_4)->size)
    VAR_5->a_bss = (VAR_6 > FUNC_6 (VAR_4)->size
      ? 0 : FUNC_6 (VAR_4)->size - VAR_6);
  else
    VAR_5->a_bss = FUNC_6 (VAR_4)->size;
}
