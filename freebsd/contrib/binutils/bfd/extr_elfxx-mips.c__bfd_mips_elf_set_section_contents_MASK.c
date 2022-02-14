
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct bfd_elf_section_data {int dummy; } ;
typedef TYPE_2__* sec_ptr ;
typedef int file_ptr ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_8__ {int * tdata; } ;
struct TYPE_10__ {TYPE_1__ u; } ;
struct TYPE_9__ {int size; void* used_by_bfd; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*,void const*,int,int) ;
 void* FUNC_2 (int *,int) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,void const*,int) ;
 TYPE_3__* FUNC_5 (TYPE_2__*) ;

bfd_boolean
FUNC_6 (bfd *VAR_1, sec_ptr VAR_2,
        const void *VAR_3,
        file_ptr VAR_4, bfd_size_type VAR_5)
{
  if (FUNC_0 (VAR_2->name))
    {
      bfd_byte *VAR_6;

      if (FUNC_3 (VAR_2) == ((void*)0))
 {
   bfd_size_type VAR_7 = sizeof (struct bfd_elf_section_data);
   VAR_2->used_by_bfd = FUNC_2 (VAR_1, VAR_7);
   if (FUNC_3 (VAR_2) == ((void*)0))
     return VAR_0;
 }
      VAR_6 = FUNC_5 (VAR_2)->u.tdata;
      if (VAR_6 == ((void*)0))
 {
   VAR_6 = FUNC_2 (VAR_1, VAR_2->size);
   if (VAR_6 == ((void*)0))
     return VAR_0;
   FUNC_5 (VAR_2)->u.tdata = VAR_6;
 }

      FUNC_4 (VAR_6 + VAR_4, VAR_3, VAR_5);
    }

  return FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5);
}
