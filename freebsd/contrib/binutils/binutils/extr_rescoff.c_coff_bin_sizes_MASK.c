
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct extern_res_entry {int dummy; } ;
struct extern_res_directory {int dummy; } ;
struct extern_res_data {int dummy; } ;
struct coff_write_info {int dirsize; int dirstrsize; int dataentsize; } ;
struct TYPE_11__ {TYPE_6__* dir; } ;
struct TYPE_8__ {int length; } ;
struct TYPE_9__ {TYPE_1__ n; } ;
struct TYPE_10__ {TYPE_2__ u; scalar_t__ named; } ;
struct TYPE_12__ {TYPE_4__ u; scalar_t__ subdir; TYPE_3__ id; struct TYPE_12__* next; } ;
typedef TYPE_5__ rc_res_entry ;
struct TYPE_13__ {TYPE_5__* entries; } ;
typedef TYPE_6__ rc_res_directory ;



__attribute__((used)) static void
FUNC_0 (const rc_res_directory *VAR_0,
  struct coff_write_info *VAR_1)
{
  const rc_res_entry *VAR_2;

  VAR_1->dirsize += sizeof (struct extern_res_directory);

  for (VAR_2 = VAR_0->entries; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    {
      VAR_1->dirsize += sizeof (struct extern_res_entry);

      if (VAR_2->id.named)
 VAR_1->dirstrsize += VAR_2->id.u.n.length * 2 + 2;

      if (VAR_2->subdir)
 FUNC_0 (VAR_2->u.dir, VAR_1);
      else
 VAR_1->dataentsize += sizeof (struct extern_res_data);
    }
}
