
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int (* sb_kern_mount ) (struct super_block*,int,void*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct super_block*,int,void*) ;

int FUNC_1(struct super_block *VAR_1, int VAR_2, void *VAR_3)
{
 return VAR_0->sb_kern_mount(VAR_1, VAR_2, VAR_3);
}
