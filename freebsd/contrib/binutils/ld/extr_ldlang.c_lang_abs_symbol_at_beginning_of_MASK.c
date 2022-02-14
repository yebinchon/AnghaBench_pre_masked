
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int section; int value; } ;
struct TYPE_5__ {TYPE_1__ def; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_2__ u; } ;
typedef int asection ;
struct TYPE_6__ {int hash; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ VAR_2 ;
 struct bfd_link_hash_entry* FUNC_3 (int ,char const*,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;

void
FUNC_5 (const char *VAR_7, const char *VAR_8)
{
  struct bfd_link_hash_entry *VAR_9;

  VAR_9 = FUNC_3 (VAR_5.hash, VAR_8, VAR_0, VAR_0, VAR_0);
  if (VAR_9 == ((void*)0))
    FUNC_4 (FUNC_0("%P%F: bfd_link_hash_lookup failed: %E\n"));

  if (VAR_9->type == VAR_3
      || VAR_9->type == VAR_4)
    {
      asection *VAR_10;

      VAR_9->type = VAR_2;

      VAR_10 = FUNC_1 (VAR_6, VAR_7);
      if (VAR_10 == ((void*)0))
 VAR_9->u.def.value = 0;
      else
 VAR_9->u.def.value = FUNC_2 (VAR_6, VAR_10);

      VAR_9->u.def.section = VAR_1;
    }
}
