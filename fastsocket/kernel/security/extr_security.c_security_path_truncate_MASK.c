
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
typedef int loff_t ;
struct TYPE_4__ {int (* path_truncate ) (struct path*,int ,unsigned int) ;} ;
struct TYPE_3__ {int d_inode; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct path*,int ,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct path *VAR_1, loff_t VAR_2,
      unsigned int VAR_3)
{
 if (FUNC_2(FUNC_0(VAR_1->dentry->d_inode)))
  return 0;
 return VAR_0->path_truncate(VAR_1, VAR_2, VAR_3);
}
