
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;
struct TYPE_2__ {int * notice_hash; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char const*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_2 ;
 int * FUNC_4 (int) ;

void
FUNC_5 (const char *VAR_3)
{
  if (VAR_2.notice_hash == ((void*)0))
    {
      VAR_2.notice_hash = FUNC_4 (sizeof (struct bfd_hash_table));
      if (!FUNC_2 (VAR_2.notice_hash,
      VAR_1,
      sizeof (struct bfd_hash_entry),
      61))
 FUNC_3 (FUNC_0("%P%F: bfd_hash_table_init failed: %E\n"));
    }

  if (FUNC_1 (VAR_2.notice_hash, VAR_3, VAR_0, VAR_0) == ((void*)0))
    FUNC_3 (FUNC_0("%P%F: bfd_hash_lookup failed: %E\n"));
}
