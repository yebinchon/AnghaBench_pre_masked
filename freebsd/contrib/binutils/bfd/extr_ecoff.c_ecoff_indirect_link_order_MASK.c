
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* section; } ;
struct TYPE_10__ {TYPE_1__ indirect; } ;
struct bfd_link_order {scalar_t__ offset; scalar_t__ size; TYPE_2__ u; } ;
struct bfd_link_info {scalar_t__ relocatable; } ;
typedef scalar_t__ file_ptr ;
typedef int bfd_size_type ;
typedef void bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_11__ {int flags; scalar_t__ size; scalar_t__ output_offset; int reloc_count; scalar_t__ rel_filepos; struct TYPE_11__* output_section; int * owner; } ;
typedef TYPE_3__ asection ;
struct TYPE_12__ {int external_reloc_size; int (* relocate_section ) (int *,struct bfd_link_info*,int *,TYPE_3__*,void*,void*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,int,int *) ;
 int FUNC_2 (void*,int,int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,TYPE_3__*,void**) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (int *,TYPE_3__*,void*,scalar_t__,scalar_t__) ;
 TYPE_6__* FUNC_7 (int *) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int *,struct bfd_link_info*,int *,TYPE_3__*,void*,void*) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (bfd *VAR_4,
      struct bfd_link_info *VAR_5,
      asection *VAR_6,
      struct bfd_link_order *VAR_7)
{
  asection *VAR_8;
  bfd *VAR_9;
  bfd_byte *VAR_10 = ((void*)0);
  bfd_size_type VAR_11;
  bfd_size_type VAR_12;
  void * VAR_13 = ((void*)0);

  FUNC_0 ((VAR_6->flags & VAR_1) != 0);

  VAR_8 = VAR_7->u.indirect.section;
  VAR_9 = VAR_8->owner;
  if (VAR_8->size == 0)
    return VAR_3;

  FUNC_0 (VAR_8->output_section == VAR_6);
  FUNC_0 (VAR_8->output_offset == VAR_7->offset);
  FUNC_0 (VAR_8->size == VAR_7->size);


  if (!FUNC_4 (VAR_9, VAR_8, &VAR_10))
    goto error_return;



  VAR_11 = FUNC_7 (VAR_9)->external_reloc_size;
  VAR_12 = VAR_11 * VAR_8->reloc_count;

  VAR_13 = FUNC_3 (VAR_12);
  if (VAR_13 == ((void*)0) && VAR_12 != 0)
    goto error_return;

  if (FUNC_5 (VAR_9, VAR_8->rel_filepos, VAR_2) != 0
      || (FUNC_1 (VAR_13, VAR_12, VAR_9)
   != VAR_12))
    goto error_return;


  if (! ((*FUNC_7 (VAR_9)->relocate_section)
  (VAR_4, VAR_5, VAR_9, VAR_8, VAR_10,
   VAR_13)))
    goto error_return;


  if (! FUNC_6 (VAR_4,
      VAR_6,
      VAR_10,
      VAR_8->output_offset,
      VAR_8->size))
    goto error_return;





  if (VAR_5->relocatable)
    {
      file_ptr VAR_14 = (VAR_6->rel_filepos
        + VAR_6->reloc_count * VAR_11);
      if (FUNC_5 (VAR_4, VAR_14, VAR_2) != 0
   || (FUNC_2 (VAR_13, VAR_12, VAR_4)
       != VAR_12))
 goto error_return;
      VAR_6->reloc_count += VAR_8->reloc_count;
    }

  if (VAR_10 != ((void*)0))
    FUNC_8 (VAR_10);
  if (VAR_13 != ((void*)0))
    FUNC_8 (VAR_13);
  return VAR_3;

 error_return:
  if (VAR_10 != ((void*)0))
    FUNC_8 (VAR_10);
  if (VAR_13 != ((void*)0))
    FUNC_8 (VAR_13);
  return VAR_0;
}
