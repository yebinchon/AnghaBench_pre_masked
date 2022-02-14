
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dynobj; } ;
struct ppc_link_hash_table {scalar_t__ got; TYPE_1__ elf; } ;
struct bfd_link_info {int dummy; } ;
typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_4__ {int * relgot; int * got; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct bfd_link_info*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int * FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int *,int) ;
 TYPE_2__* FUNC_5 (int *) ;
 struct ppc_link_hash_table* FUNC_6 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (bfd *VAR_8, struct bfd_link_info *VAR_9)
{
  asection *VAR_10, *VAR_11;
  flagword VAR_12;
  struct ppc_link_hash_table *VAR_13 = FUNC_6 (VAR_9);

  if (!VAR_13->got)
    {
      if (! FUNC_0 (VAR_13->elf.dynobj, VAR_9))
 return VAR_0;

      VAR_13->got = FUNC_2 (VAR_13->elf.dynobj, ".got");
      if (!VAR_13->got)
 FUNC_1 ();
    }

  VAR_12 = (VAR_1 | VAR_5 | VAR_2 | VAR_3
    | VAR_4);

  VAR_10 = FUNC_3 (VAR_8, ".got", VAR_12);
  if (!VAR_10
      || !FUNC_4 (VAR_8, VAR_10, 3))
    return VAR_0;

  VAR_11 = FUNC_3 (VAR_8, ".rela.got",
            VAR_12 | VAR_6);
  if (!VAR_11
      || ! FUNC_4 (VAR_8, VAR_11, 3))
    return VAR_0;

  FUNC_5 (VAR_8)->got = VAR_10;
  FUNC_5 (VAR_8)->relgot = VAR_11;
  return VAR_7;
}
