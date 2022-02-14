
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int section; scalar_t__ value; } ;
struct TYPE_8__ {TYPE_1__ def; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_9__ {int size; } ;
typedef TYPE_3__ asection ;
struct TYPE_10__ {int hash; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (int ,TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 struct bfd_link_hash_entry* FUNC_4 (int ,char const*,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;

void
FUNC_6 (const char *VAR_7, const char *VAR_8)
{
  struct bfd_link_hash_entry *VAR_9;

  VAR_9 = FUNC_4 (VAR_5.hash, VAR_8, VAR_0, VAR_0, VAR_0);
  if (VAR_9 == ((void*)0))
    FUNC_5 (FUNC_1("%P%F: bfd_link_hash_lookup failed: %E\n"));

  if (VAR_9->type == VAR_3
      || VAR_9->type == VAR_4)
    {
      asection *VAR_10;

      VAR_9->type = VAR_2;

      VAR_10 = FUNC_2 (VAR_6, VAR_7);
      if (VAR_10 == ((void*)0))
 VAR_9->u.def.value = 0;
      else
 VAR_9->u.def.value = (FUNC_3 (VAR_6, VAR_10)
     + FUNC_0 (VAR_10->size));

      VAR_9->u.def.section = VAR_1;
    }
}
