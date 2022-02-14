
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {int l_name; } ;
struct ocfs2_dentry_lock {scalar_t__ dl_parent_blkno; int dl_count; TYPE_2__ dl_lockres; int dl_inode; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {struct ocfs2_dentry_lock* d_fsdata; TYPE_1__ d_name; } ;
struct TYPE_6__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct ocfs2_dentry_lock*) ;
 struct ocfs2_dentry_lock* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,char*,int ,...) ;
 int FUNC_8 (int,char*,unsigned long long,unsigned long long,...) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct dentry*,int ) ;
 int FUNC_11 (struct ocfs2_dentry_lock*,scalar_t__,struct inode*) ;
 int FUNC_12 (struct dentry*,int ) ;
 struct dentry* FUNC_13 (struct inode*,scalar_t__,int ) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct dentry *VAR_3,
        struct inode *VAR_4,
        u64 VAR_5)
{
 int VAR_6;
 struct dentry *VAR_7;
 struct ocfs2_dentry_lock *VAR_8 = VAR_3->d_fsdata;

 FUNC_7(0, "Attach \"%.*s\", parent %llu, fsdata: %p\n",
      VAR_3->d_name.len, VAR_3->d_name.name,
      (unsigned long long)VAR_5, VAR_8);







 if (!VAR_4)
  return 0;

 if (VAR_8) {
  FUNC_8(VAR_8->dl_parent_blkno != VAR_5,
    " \"%.*s\": old parent: %llu, new: %llu\n",
    VAR_3->d_name.len, VAR_3->d_name.name,
    (unsigned long long)VAR_5,
    (unsigned long long)VAR_8->dl_parent_blkno);
  return 0;
 }

 VAR_7 = FUNC_13(VAR_4, VAR_5, 0);
 if (VAR_7) {
  VAR_8 = VAR_7->d_fsdata;
  FUNC_8(!VAR_8, "parent %llu, ino %llu\n",
    (unsigned long long)VAR_5,
    (unsigned long long)FUNC_1(VAR_4)->ip_blkno);

  FUNC_8(VAR_8->dl_parent_blkno != VAR_5,
    " \"%.*s\": old parent: %llu, new: %llu\n",
    VAR_3->d_name.len, VAR_3->d_name.name,
    (unsigned long long)VAR_5,
    (unsigned long long)VAR_8->dl_parent_blkno);

  FUNC_7(0, "Found: %s\n", VAR_8->dl_lockres.l_name);

  goto out_attach;
 }




 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  VAR_6 = -VAR_0;
  FUNC_9(VAR_6);
  return VAR_6;
 }

 VAR_8->dl_count = 0;




 VAR_8->dl_inode = FUNC_3(VAR_4);
 VAR_8->dl_parent_blkno = VAR_5;
 FUNC_11(VAR_8, VAR_5, VAR_4);

out_attach:
 FUNC_15(&VAR_2);
 VAR_3->d_fsdata = VAR_8;
 VAR_8->dl_count++;
 FUNC_16(&VAR_2);






 VAR_6 = FUNC_10(VAR_3, 0);
 if (!VAR_6)
  FUNC_12(VAR_3, 0);
 else
  FUNC_9(VAR_6);






 if (VAR_6 < 0 && !VAR_7) {
  FUNC_14(&VAR_8->dl_lockres);
  FUNC_0(VAR_8->dl_count != 1);
  FUNC_15(&VAR_2);
  VAR_3->d_fsdata = ((void*)0);
  FUNC_16(&VAR_2);
  FUNC_5(VAR_8);
  FUNC_4(VAR_4);
 }

 FUNC_2(VAR_7);

 return VAR_6;
}
