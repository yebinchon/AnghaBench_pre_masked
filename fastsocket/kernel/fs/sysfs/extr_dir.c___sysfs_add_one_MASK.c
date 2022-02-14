
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int s_parent; int s_name; } ;
struct sysfs_addrm_cxt {int cnt; scalar_t__ parent_inode; int parent_sd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sysfs_dirent*) ;
 scalar_t__ FUNC_4 (struct sysfs_dirent*) ;

int FUNC_5(struct sysfs_addrm_cxt *VAR_2, struct sysfs_dirent *VAR_3)
{
 if (FUNC_1(VAR_2->parent_sd, VAR_3->s_name))
  return -VAR_0;

 VAR_3->s_parent = FUNC_2(VAR_2->parent_sd);

 if (FUNC_4(VAR_3) == VAR_1 && VAR_2->parent_inode)
  FUNC_0(VAR_2->parent_inode);

 VAR_2->cnt++;

 FUNC_3(VAR_3);

 return 0;
}
