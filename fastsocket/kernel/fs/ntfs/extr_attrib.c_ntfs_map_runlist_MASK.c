
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; int rl; } ;
struct TYPE_6__ {TYPE_1__ runlist; } ;
typedef TYPE_2__ ntfs_inode ;
typedef int VCN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(ntfs_inode *VAR_1, VCN VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(&VAR_1->runlist.lock);

 if (FUNC_1(FUNC_3(VAR_1->runlist.rl, VAR_2) <=
   VAR_0))
  VAR_3 = FUNC_2(VAR_1, VAR_2, ((void*)0));
 FUNC_4(&VAR_1->runlist.lock);
 return VAR_3;
}
