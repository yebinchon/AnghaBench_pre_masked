
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct elf_link_hash_entry {int dummy; } ;
struct elf_backend_data {scalar_t__ got_header_size; scalar_t__ want_got_sym; scalar_t__ want_got_plt; int dynamic_sec_flags; TYPE_1__* s; } ;
struct bfd_link_info {int dummy; } ;
typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_9__ {int flags; int size; } ;
typedef TYPE_2__ asection ;
struct TYPE_10__ {struct elf_link_hash_entry* hgot; } ;
struct TYPE_8__ {int arch_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct elf_link_hash_entry* FUNC_0 (int *,struct bfd_link_info*,TYPE_2__*,char*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int *,char*) ;
 TYPE_2__* FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_2__*,int) ;
 TYPE_3__* FUNC_5 (struct bfd_link_info*) ;
 struct elf_backend_data* FUNC_6 (int *) ;

bfd_boolean
FUNC_7 (bfd *VAR_4, struct bfd_link_info *VAR_5)
{
  flagword VAR_6;
  asection *VAR_7;
  struct elf_link_hash_entry *VAR_8;
  const struct elf_backend_data *VAR_9 = FUNC_6 (VAR_4);
  int VAR_10;


  VAR_7 = FUNC_1 (VAR_4, ".got");
  if (VAR_7 != ((void*)0) && (VAR_7->flags & VAR_1) != 0)
    return VAR_2;

  switch (VAR_9->s->arch_size)
    {
    case 32:
      VAR_10 = 2;
      break;

    case 64:
      VAR_10 = 3;
      break;

    default:
      FUNC_3 (VAR_3);
      return VAR_0;
    }

  VAR_6 = VAR_9->dynamic_sec_flags;

  VAR_7 = FUNC_2 (VAR_4, ".got", VAR_6);
  if (VAR_7 == ((void*)0)
      || !FUNC_4 (VAR_4, VAR_7, VAR_10))
    return VAR_0;

  if (VAR_9->want_got_plt)
    {
      VAR_7 = FUNC_2 (VAR_4, ".got.plt", VAR_6);
      if (VAR_7 == ((void*)0)
   || !FUNC_4 (VAR_4, VAR_7, VAR_10))
 return VAR_0;
    }

  if (VAR_9->want_got_sym)
    {




      VAR_8 = FUNC_0 (VAR_4, VAR_5, VAR_7, "_GLOBAL_OFFSET_TABLE_");
      FUNC_5 (VAR_5)->hgot = VAR_8;
      if (VAR_8 == ((void*)0))
 return VAR_0;
    }


  VAR_7->size += VAR_9->got_header_size;

  return VAR_2;
}
