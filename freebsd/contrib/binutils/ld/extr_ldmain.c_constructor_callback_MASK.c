
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfd_link_info {int hash; scalar_t__ relocatable; } ;
struct TYPE_4__ {int * abfd; } ;
struct TYPE_5__ {TYPE_1__ undef; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_2__ u; } ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_6__ {int build_constructors; scalar_t__ warn_constructors; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char FUNC_1 (int *) ;
 struct bfd_link_hash_entry* FUNC_2 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_3 (int *,int ) ;
 TYPE_3__ VAR_4 ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 (struct bfd_link_hash_entry*,int ,char const*,int *,int ) ;
 int * VAR_5 ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (struct bfd_link_info *VAR_6,
        bfd_boolean VAR_7,
        const char *VAR_8,
        bfd *VAR_9,
        asection *VAR_10,
        bfd_vma VAR_11)
{
  char *VAR_12;
  struct bfd_link_hash_entry *VAR_13;
  char VAR_14[1 + sizeof "__CTOR_LIST__"];

  if (VAR_4.warn_constructors)
    FUNC_4 (FUNC_0("%P: warning: global constructor %s used\n"), VAR_8);

  if (! VAR_4.build_constructors)
    return VAR_1;



  if (FUNC_3 (VAR_5, VAR_0) == ((void*)0)
      && (VAR_6->relocatable
   || FUNC_3 (VAR_9, VAR_0) == ((void*)0)))
    FUNC_4 (FUNC_0("%P%F: BFD backend error: BFD_RELOC_CTOR unsupported\n"));

  VAR_12 = VAR_14;
  if (FUNC_1 (VAR_9) != '\0')
    *VAR_12++ = FUNC_1 (VAR_9);
  if (VAR_7)
    FUNC_6 (VAR_12, "__CTOR_LIST__");
  else
    FUNC_6 (VAR_12, "__DTOR_LIST__");

  VAR_13 = FUNC_2 (VAR_6->hash, VAR_14, VAR_1, VAR_1, VAR_1);
  if (VAR_13 == (struct bfd_link_hash_entry *) ((void*)0))
    FUNC_4 (FUNC_0("%P%F: bfd_link_hash_lookup failed: %E\n"));
  if (VAR_13->type == VAR_2)
    {
      VAR_13->type = VAR_3;
      VAR_13->u.undef.abfd = VAR_9;



    }

  FUNC_5 (VAR_13, VAR_0, VAR_8, VAR_10, VAR_11);
  return VAR_1;
}
