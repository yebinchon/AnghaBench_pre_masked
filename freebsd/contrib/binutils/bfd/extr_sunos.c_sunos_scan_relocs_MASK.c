
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct reloc_std_external {int dummy; } ;
struct reloc_ext_external {int dummy; } ;
struct bfd_link_info {int keep_memory; } ;
struct aout_section_data_struct {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_8__ {int rel_filepos; } ;
typedef TYPE_1__ asection ;
struct TYPE_9__ {void* relocs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (TYPE_1__*) ;
 struct aout_section_data_struct* FUNC_1 (int *,int) ;
 int FUNC_2 (void*,int,int *) ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,struct aout_section_data_struct*) ;
 int FUNC_8 (struct bfd_link_info*,int *,TYPE_1__*,struct reloc_ext_external*,int) ;
 int FUNC_9 (struct bfd_link_info*,int *,TYPE_1__*,struct reloc_std_external*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (struct bfd_link_info *VAR_4,
     bfd *VAR_5,
     asection *VAR_6,
     bfd_size_type VAR_7)
{
  void * VAR_8;
  void * VAR_9 = ((void*)0);

  if (VAR_7 == 0)
    return VAR_3;

  if (! VAR_4->keep_memory)
    VAR_8 = VAR_9 = FUNC_3 (VAR_7);
  else
    {
      struct aout_section_data_struct *VAR_10;
      bfd_size_type VAR_11 = sizeof (struct aout_section_data_struct);

      VAR_10 = FUNC_1 (VAR_5, VAR_11);
      if (VAR_10 == ((void*)0))
 VAR_8 = ((void*)0);
      else
 {
   FUNC_7 (VAR_6, VAR_10);
   VAR_8 = FUNC_3 (VAR_7);
   FUNC_0 (VAR_6)->relocs = VAR_8;
 }
    }
  if (VAR_8 == ((void*)0))
    return VAR_0;

  if (FUNC_4 (VAR_5, VAR_6->rel_filepos, VAR_2) != 0
      || FUNC_2 (VAR_8, VAR_7, VAR_5) != VAR_7)
    goto error_return;

  if (FUNC_6 (VAR_5) == VAR_1)
    {
      if (! FUNC_9 (VAR_4, VAR_5, VAR_6,
       (struct reloc_std_external *) VAR_8,
       VAR_7))
 goto error_return;
    }
  else
    {
      if (! FUNC_8 (VAR_4, VAR_5, VAR_6,
       (struct reloc_ext_external *) VAR_8,
       VAR_7))
 goto error_return;
    }

  if (VAR_9 != ((void*)0))
    FUNC_5 (VAR_9);

  return VAR_3;

 error_return:
  if (VAR_9 != ((void*)0))
    FUNC_5 (VAR_9);
  return VAR_0;
}
