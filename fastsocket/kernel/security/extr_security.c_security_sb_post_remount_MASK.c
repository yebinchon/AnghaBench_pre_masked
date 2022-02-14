
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_2__ {int (* sb_post_remount ) (struct vfsmount*,unsigned long,void*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct vfsmount*,unsigned long,void*) ;

void FUNC_1(struct vfsmount *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 VAR_0->sb_post_remount(VAR_1, VAR_2, VAR_3);
}
