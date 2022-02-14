
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct path {int dummy; } ;
struct TYPE_2__ {int (* sb_post_addmount ) (struct vfsmount*,struct path*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct vfsmount*,struct path*) ;

void FUNC_1(struct vfsmount *VAR_1, struct path *VAR_2)
{
 VAR_0->sb_post_addmount(VAR_1, VAR_2);
}
