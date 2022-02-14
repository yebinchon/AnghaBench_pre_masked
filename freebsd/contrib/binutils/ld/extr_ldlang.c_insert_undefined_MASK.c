
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * abfd; } ;
struct TYPE_5__ {TYPE_1__ undef; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_6__ {int hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct bfd_link_hash_entry*) ;
 struct bfd_link_hash_entry* FUNC_2 (int ,char const*,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_5)
{
  struct bfd_link_hash_entry *VAR_6;

  VAR_6 = FUNC_2 (VAR_4.hash, VAR_5, VAR_1, VAR_0, VAR_1);
  if (VAR_6 == ((void*)0))
    FUNC_3 (FUNC_0("%P%F: bfd_link_hash_lookup failed: %E\n"));
  if (VAR_6->type == VAR_2)
    {
      VAR_6->type = VAR_3;
      VAR_6->u.undef.abfd = ((void*)0);
      FUNC_1 (VAR_4.hash, VAR_6);
    }
}
