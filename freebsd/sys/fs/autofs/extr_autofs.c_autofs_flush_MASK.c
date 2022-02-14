
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct autofs_mount {int am_mountpoint; TYPE_1__* am_root; } ;
struct TYPE_2__ {int an_cached; } ;


 int FUNC_0 (char*,int ) ;

void
FUNC_1(struct autofs_mount *VAR_0)
{





 VAR_0->am_root->an_cached = 0;
 FUNC_0("%s flushed", VAR_0->am_mountpoint);
}
