
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct elf_link_hash_table {int dynstr; int dynobj; } ;
struct elf_backend_data {TYPE_1__* s; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_9__ {int size; int * contents; } ;
typedef TYPE_3__ asection ;
struct TYPE_8__ {scalar_t__ d_val; } ;
struct TYPE_10__ {scalar_t__ d_tag; TYPE_2__ d_un; } ;
struct TYPE_7__ {int (* swap_dyn_in ) (int ,int *,TYPE_4__*) ;int sizeof_dyn; } ;
typedef TYPE_4__ Elf_Internal_Dyn ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfd_link_info*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,struct bfd_link_info*) ;
 int FUNC_2 (int *,struct bfd_link_info*) ;
 scalar_t__ FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int ,char*) ;
 struct elf_link_hash_table* FUNC_7 (struct bfd_link_info*) ;
 struct elf_backend_data* FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_10 (bfd *VAR_2,
         struct bfd_link_info *VAR_3,
         const char *VAR_4,
         bfd_boolean VAR_5)
{
  struct elf_link_hash_table *VAR_6;
  bfd_size_type VAR_7;
  bfd_size_type VAR_8;

  if (!FUNC_2 (VAR_2, VAR_3))
    return -1;

  VAR_6 = FUNC_7 (VAR_3);
  VAR_7 = FUNC_5 (VAR_6->dynstr);
  VAR_8 = FUNC_3 (VAR_6->dynstr, VAR_4, VAR_1);
  if (VAR_8 == (bfd_size_type) -1)
    return -1;

  if (VAR_7 == FUNC_5 (VAR_6->dynstr))
    {
      asection *VAR_9;
      const struct elf_backend_data *VAR_10;
      bfd_byte *VAR_11;

      VAR_10 = FUNC_8 (VAR_6->dynobj);
      VAR_9 = FUNC_6 (VAR_6->dynobj, ".dynamic");
      if (VAR_9 != ((void*)0))
 for (VAR_11 = VAR_9->contents;
      VAR_11 < VAR_9->contents + VAR_9->size;
      VAR_11 += VAR_10->s->sizeof_dyn)
   {
     Elf_Internal_Dyn VAR_12;

     VAR_10->s->swap_dyn_in (VAR_6->dynobj, VAR_11, &VAR_12);
     if (VAR_12.d_tag == VAR_0
  && VAR_12.d_un.d_val == VAR_8)
       {
  FUNC_4 (VAR_6->dynstr, VAR_8);
  return 1;
       }
   }
    }

  if (VAR_5)
    {
      if (!FUNC_1 (VAR_6->dynobj, VAR_3))
 return -1;

      if (!FUNC_0 (VAR_3, VAR_0, VAR_8))
 return -1;
    }
  else

    FUNC_4 (VAR_6->dynstr, VAR_8);

  return 0;
}
