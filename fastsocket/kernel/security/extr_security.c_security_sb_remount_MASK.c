
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int (* sb_remount ) (struct super_block*,void*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct super_block*,void*) ;

int FUNC_1(struct super_block *VAR_1, void *VAR_2)
{
 return VAR_0->sb_remount(VAR_1, VAR_2);
}
