
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int au_etype; int au_errno; } ;
typedef TYPE_1__ amq_sync_umnt ;




__attribute__((used)) static int
FUNC_0(amq_sync_umnt *VAR_0)
{
  switch (VAR_0->au_etype) {
  case 128:
    if (VAR_0->au_errno == 0) {






      return 0;
    }

  default:
    return VAR_0->au_etype;
  }
}
