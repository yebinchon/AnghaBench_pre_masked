
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct elf_backend_data {int dynamic_sec_flags; int (* elf_backend_create_dynamic_sections ) (int *,struct bfd_link_info*) ;TYPE_1__* s; } ;
struct bfd_link_info {scalar_t__ emit_gnu_hash; scalar_t__ emit_hash; scalar_t__ executable; int hash; } ;
typedef int flagword ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_8__ {scalar_t__ dynamic_sections_created; int * dynobj; } ;
struct TYPE_6__ {int sh_entsize; } ;
struct TYPE_7__ {TYPE_2__ this_hdr; } ;
struct TYPE_5__ {int log_file_align; int sizeof_hash_entry; int arch_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct bfd_link_info*,int *,char*) ;
 int FUNC_1 (int *,struct bfd_link_info*) ;
 int * FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int *,int) ;
 TYPE_4__* FUNC_4 (struct bfd_link_info*) ;
 TYPE_3__* FUNC_5 (int *) ;
 struct elf_backend_data* FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct bfd_link_info*) ;

bfd_boolean
FUNC_9 (bfd *VAR_3, struct bfd_link_info *VAR_4)
{
  flagword VAR_5;
  register asection *VAR_6;
  const struct elf_backend_data *VAR_7;

  if (! FUNC_7 (VAR_4->hash))
    return VAR_0;

  if (FUNC_4 (VAR_4)->dynamic_sections_created)
    return VAR_2;

  if (!FUNC_1 (VAR_3, VAR_4))
    return VAR_0;

  VAR_3 = FUNC_4 (VAR_4)->dynobj;
  VAR_7 = FUNC_6 (VAR_3);

  VAR_5 = VAR_7->dynamic_sec_flags;



  if (VAR_4->executable)
    {
      VAR_6 = FUNC_2 (VAR_3, ".interp",
           VAR_5 | VAR_1);
      if (VAR_6 == ((void*)0))
 return VAR_0;
    }



  VAR_6 = FUNC_2 (VAR_3, ".gnu.version_d",
       VAR_5 | VAR_1);
  if (VAR_6 == ((void*)0)
      || ! FUNC_3 (VAR_3, VAR_6, VAR_7->s->log_file_align))
    return VAR_0;

  VAR_6 = FUNC_2 (VAR_3, ".gnu.version",
       VAR_5 | VAR_1);
  if (VAR_6 == ((void*)0)
      || ! FUNC_3 (VAR_3, VAR_6, 1))
    return VAR_0;

  VAR_6 = FUNC_2 (VAR_3, ".gnu.version_r",
       VAR_5 | VAR_1);
  if (VAR_6 == ((void*)0)
      || ! FUNC_3 (VAR_3, VAR_6, VAR_7->s->log_file_align))
    return VAR_0;

  VAR_6 = FUNC_2 (VAR_3, ".dynsym",
       VAR_5 | VAR_1);
  if (VAR_6 == ((void*)0)
      || ! FUNC_3 (VAR_3, VAR_6, VAR_7->s->log_file_align))
    return VAR_0;

  VAR_6 = FUNC_2 (VAR_3, ".dynstr",
       VAR_5 | VAR_1);
  if (VAR_6 == ((void*)0))
    return VAR_0;

  VAR_6 = FUNC_2 (VAR_3, ".dynamic", VAR_5);
  if (VAR_6 == ((void*)0)
      || ! FUNC_3 (VAR_3, VAR_6, VAR_7->s->log_file_align))
    return VAR_0;







  if (!FUNC_0 (VAR_3, VAR_4, VAR_6, "_DYNAMIC"))
    return VAR_0;

  if (VAR_4->emit_hash)
    {
      VAR_6 = FUNC_2 (VAR_3, ".hash", VAR_5 | VAR_1);
      if (VAR_6 == ((void*)0)
   || ! FUNC_3 (VAR_3, VAR_6, VAR_7->s->log_file_align))
 return VAR_0;
      FUNC_5 (VAR_6)->this_hdr.sh_entsize = VAR_7->s->sizeof_hash_entry;
    }

  if (VAR_4->emit_gnu_hash)
    {
      VAR_6 = FUNC_2 (VAR_3, ".gnu.hash",
           VAR_5 | VAR_1);
      if (VAR_6 == ((void*)0)
   || ! FUNC_3 (VAR_3, VAR_6, VAR_7->s->log_file_align))
 return VAR_0;



      if (VAR_7->s->arch_size == 64)
 FUNC_5 (VAR_6)->this_hdr.sh_entsize = 0;
      else
 FUNC_5 (VAR_6)->this_hdr.sh_entsize = 4;
    }




  if (! (*VAR_7->elf_backend_create_dynamic_sections) (VAR_3, VAR_4))
    return VAR_0;

  FUNC_4 (VAR_4)->dynamic_sections_created = VAR_2;

  return VAR_2;
}
