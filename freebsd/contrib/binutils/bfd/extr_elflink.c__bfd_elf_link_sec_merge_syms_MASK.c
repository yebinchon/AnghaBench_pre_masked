
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int value; TYPE_5__* section; } ;
struct TYPE_9__ {scalar_t__ link; } ;
struct TYPE_11__ {TYPE_2__ def; TYPE_1__ i; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_3__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_13__ {int flags; scalar_t__ sec_info_type; } ;
typedef TYPE_5__ asection ;
struct TYPE_14__ {int sec_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_5__**,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_6__* FUNC_1 (TYPE_5__*) ;

bfd_boolean
FUNC_2 (struct elf_link_hash_entry *VAR_6, void *VAR_7)
{
  asection *VAR_8;

  if (VAR_6->root.type == VAR_5)
    VAR_6 = (struct elf_link_hash_entry *) VAR_6->root.u.i.link;

  if ((VAR_6->root.type == VAR_3
       || VAR_6->root.type == VAR_4)
      && ((VAR_8 = VAR_6->root.u.def.section)->flags & VAR_1)
      && VAR_8->sec_info_type == VAR_0)
    {
      bfd *VAR_9 = VAR_7;

      VAR_6->root.u.def.value =
 FUNC_0 (VAR_9,
        &VAR_6->root.u.def.section,
        FUNC_1 (VAR_8)->sec_info,
        VAR_6->root.u.def.value);
    }

  return VAR_2;
}
