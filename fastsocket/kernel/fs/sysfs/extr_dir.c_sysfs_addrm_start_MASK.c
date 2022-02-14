
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int s_ino; } ;
struct sysfs_addrm_cxt {struct inode* parent_inode; struct sysfs_dirent* parent_sd; } ;
struct inode {int i_state; int i_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct inode* FUNC_1 (int ,int ,int ,struct sysfs_dirent*) ;
 int FUNC_2 (struct sysfs_addrm_cxt*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_6(struct sysfs_addrm_cxt *VAR_4,
         struct sysfs_dirent *VAR_5)
{
 struct inode *VAR_6;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->parent_sd = VAR_5;





 FUNC_3(&VAR_2);

 VAR_6 = FUNC_1(VAR_3, VAR_5->s_ino, VAR_1,
    VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_6->i_state & VAR_0);


  VAR_4->parent_inode = VAR_6;





  if (!FUNC_4(&VAR_6->i_mutex)) {
   FUNC_5(&VAR_2);
   FUNC_3(&VAR_6->i_mutex);
   FUNC_3(&VAR_2);
  }
 }
}
