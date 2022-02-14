
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int (* sb_statfs ) (struct dentry*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct dentry*) ;

int FUNC_1(struct dentry *VAR_1)
{
 return VAR_0->sb_statfs(VAR_1);
}
