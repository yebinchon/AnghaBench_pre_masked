
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct elf_link_hash_entry {int def_regular; int type; scalar_t__ non_elf; } ;
struct bfd_link_info {int shared; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef int flagword ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_4__ {int dynobj; } ;
struct TYPE_3__ {int collect; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bfd_link_info*,int *,char const*,int ,int ,int ,char const*,int ,int ,struct bfd_link_hash_entry**) ;
 int VAR_12 ;
 int FUNC_1 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 TYPE_2__* FUNC_6 (struct bfd_link_info*) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *,struct bfd_link_info*,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (bfd *VAR_13, struct bfd_link_info *VAR_14)
{
  struct elf_link_hash_entry *VAR_15;
  struct bfd_link_hash_entry *VAR_16;
  flagword VAR_17;
  asection *VAR_18;

  VAR_17 = (VAR_3 | VAR_8 | VAR_5 | VAR_6
           | VAR_7 | VAR_9);


  VAR_18 = FUNC_2 (VAR_13, ".dynamic");
  if (VAR_18 != ((void*)0))
    {
      if (!FUNC_5 (VAR_13, VAR_18, VAR_17))
        return VAR_1;
    }


  if (!FUNC_8 (VAR_13, VAR_14, VAR_1))
    return VAR_1;

  if (!FUNC_9 (FUNC_6 (VAR_14)->dynobj, VAR_11))
    return VAR_1;


  if (FUNC_2 (VAR_13, VAR_2) == ((void*)0))
    {
      VAR_18 = FUNC_3 (VAR_13, VAR_2,
                                       VAR_17 | VAR_4);
      if (VAR_18 == ((void*)0)
          || !FUNC_4 (VAR_13, VAR_18, 2))

        return VAR_1;
    }

  if (!VAR_14->shared)
    {
      const char *VAR_19;

      VAR_19 = "_DYNAMIC_LINK";
      VAR_16 = ((void*)0);
      if (!(FUNC_0
            (VAR_14, VAR_13, VAR_19, VAR_0, VAR_12,
             (bfd_vma) 0, (const char *)((void*)0), VAR_1, FUNC_7 (VAR_13)->collect, &VAR_16)))
        return VAR_1;

      VAR_15 = (struct elf_link_hash_entry *)VAR_16;
      VAR_15->non_elf = 0;
      VAR_15->def_regular = 1;
      VAR_15->type = VAR_10;

      if (!FUNC_1 (VAR_14, VAR_15))
        return VAR_1;
    }

  return VAR_11;
}
