
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {int f_pos; int f_version; int f_vfsmnt; TYPE_2__ f_path; } ;
typedef int filldir_t ;
struct TYPE_6__ {scalar_t__ ip_blkno; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,unsigned long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int *,int *,void*,int ,int *) ;
 int FUNC_5 (struct inode*,int *,int ) ;
 int FUNC_6 (struct inode*,int ,int*) ;
 int FUNC_7 (struct inode*,int) ;

int FUNC_8(struct file * VAR_1, void * VAR_2, filldir_t VAR_3)
{
 int VAR_4 = 0;
 struct inode *VAR_5 = VAR_1->f_path.dentry->d_inode;
 int VAR_6 = 0;

 FUNC_1("dirino=%llu\n",
     (unsigned long long)FUNC_0(VAR_5)->ip_blkno);

 VAR_4 = FUNC_6(VAR_5, VAR_1->f_vfsmnt, &VAR_6);
 if (VAR_6 && VAR_4 >= 0) {



  FUNC_7(VAR_5, 1);
  VAR_6 = 0;
  VAR_4 = FUNC_5(VAR_5, ((void*)0), 0);
 }
 if (VAR_4 < 0) {
  if (VAR_4 != -VAR_0)
   FUNC_2(VAR_4);

  goto bail_nolock;
 }

 VAR_4 = FUNC_4(VAR_5, &VAR_1->f_version, &VAR_1->f_pos,
          VAR_2, VAR_3, ((void*)0));

 FUNC_7(VAR_5, VAR_6);

bail_nolock:
 FUNC_3(VAR_4);

 return VAR_4;
}
