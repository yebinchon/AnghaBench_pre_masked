
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct score_got_info {int * got_entries; int * next; void* assigned_gotno; void* local_gotno; scalar_t__ global_gotno; int * global_gotsym; } ;
struct elf_link_hash_entry {int def_regular; int type; scalar_t__ non_elf; } ;
struct bfd_link_info {scalar_t__ shared; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef int flagword ;
typedef int bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_15__ {int flags; } ;
typedef TYPE_4__ asection ;
struct TYPE_17__ {int collect; } ;
struct TYPE_13__ {int sh_flags; } ;
struct TYPE_14__ {TYPE_2__ this_hdr; } ;
struct TYPE_12__ {struct score_got_info* got_info; } ;
struct TYPE_16__ {TYPE_3__ elf; TYPE_1__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct bfd_link_info*,int *,char*,int ,TYPE_4__*,int ,int *,scalar_t__,int ,struct bfd_link_hash_entry**) ;
 struct score_got_info* FUNC_1 (int *,int) ;
 int FUNC_2 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 TYPE_4__* FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,TYPE_4__*,int) ;
 TYPE_8__* FUNC_5 (int *) ;
 int * FUNC_6 (int,int ,int ,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_4__* FUNC_7 (int *,scalar_t__) ;
 TYPE_5__* FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_16,
                              struct bfd_link_info *VAR_17,
         bfd_boolean VAR_18)
{
  flagword VAR_19;
  asection *VAR_20;
  struct elf_link_hash_entry *VAR_21;
  struct bfd_link_hash_entry *VAR_22;
  struct score_got_info *VAR_23;
  bfd_size_type VAR_24;


  VAR_20 = FUNC_7 (VAR_16, VAR_13);
  if (VAR_20)
    {
      if (! VAR_18)
 VAR_20->flags &= ~VAR_4;
      return VAR_13;
    }

  VAR_19 = (VAR_3 | VAR_8 | VAR_5 | VAR_6 | VAR_7);

  if (VAR_18)
    VAR_19 |= VAR_4;



  VAR_20 = FUNC_3 (VAR_16, ".got", VAR_19);
   if (VAR_20 == ((void*)0)
      || ! FUNC_4 (VAR_16, VAR_20, 4))
    return VAR_1;




  VAR_22 = ((void*)0);
  if (! (FUNC_0
  (VAR_17, VAR_16, "_GLOBAL_OFFSET_TABLE_", VAR_0, VAR_20,
   0, ((void*)0), VAR_1, FUNC_5 (VAR_16)->collect, &VAR_22)))
    return VAR_1;

  VAR_21 = (struct elf_link_hash_entry *) VAR_22;
  VAR_21->non_elf = 0;
  VAR_21->def_regular = 1;
  VAR_21->type = VAR_12;

  if (VAR_17->shared && ! FUNC_2 (VAR_17, VAR_21))
    return VAR_1;

  VAR_24 = sizeof (struct score_got_info);
  VAR_23 = FUNC_1 (VAR_16, VAR_24);
  if (VAR_23 == ((void*)0))
    return VAR_1;

  VAR_23->global_gotsym = ((void*)0);
  VAR_23->global_gotno = 0;

  VAR_23->local_gotno = VAR_2;
  VAR_23->assigned_gotno = VAR_2;
  VAR_23->next = ((void*)0);

  VAR_23->got_entries = FUNC_6 (1, VAR_15,
        VAR_14, ((void*)0));
  if (VAR_23->got_entries == ((void*)0))
    return VAR_1;
  FUNC_8 (VAR_20)->u.got_info = VAR_23;
  FUNC_8 (VAR_20)->elf.this_hdr.sh_flags |= VAR_9 | VAR_11 | VAR_10;

  return VAR_13;
}
