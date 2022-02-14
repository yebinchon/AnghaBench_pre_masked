
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_sb; } ;
struct TYPE_3__ {int name; int len; } ;
struct dentry {int * d_op; TYPE_1__ d_name; struct inode* d_inode; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 struct dentry* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,unsigned long long) ;
 int FUNC_6 (char*,struct dentry*,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (struct inode*,int *,int ) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct inode*,char*,int,int *) ;

__attribute__((used)) static struct dentry *FUNC_13(struct dentry *VAR_2)
{
 int VAR_3;
 u64 VAR_4;
 struct dentry *VAR_5;
 struct inode *VAR_6 = VAR_2->d_inode;

 FUNC_6("(0x%p, '%.*s')\n", VAR_2,
     VAR_2->d_name.len, VAR_2->d_name.name);

 FUNC_5(0, "find parent of directory %llu\n",
      (unsigned long long)FUNC_2(VAR_6)->ip_blkno);

 VAR_3 = FUNC_10(VAR_6, ((void*)0), 0);
 if (VAR_3 < 0) {
  if (VAR_3 != -VAR_0)
   FUNC_7(VAR_3);
  VAR_5 = FUNC_0(VAR_3);
  goto bail;
 }

 VAR_3 = FUNC_12(VAR_6, "..", 2, &VAR_4);
 if (VAR_3 < 0) {
  VAR_5 = FUNC_0(-VAR_0);
  goto bail_unlock;
 }

 VAR_5 = FUNC_4(FUNC_9(FUNC_3(VAR_6->i_sb), VAR_4, 0, 0));
 if (!FUNC_1(VAR_5))
  VAR_5->d_op = &VAR_1;

bail_unlock:
 FUNC_11(VAR_6, 0);

bail:
 FUNC_8(VAR_5);

 return VAR_5;
}
