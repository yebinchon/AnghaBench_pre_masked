
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qstr {char const* name; scalar_t__ hash; int len; } ;
struct path {int dentry; int mnt; } ;
struct inode {scalar_t__ i_nlink; int i_size; } ;
typedef void file ;
struct dentry {int d_sb; } ;
typedef int loff_t ;
struct TYPE_4__ {struct dentry* mnt_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (struct path*,int,int *) ;
 int FUNC_3 (struct dentry*,struct qstr*) ;
 int FUNC_4 (int ,struct inode*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct path*) ;
 int FUNC_7 (struct inode*,int ) ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_8 (unsigned long,int ) ;
 int VAR_10 ;
 struct inode* FUNC_9 (int ,int,int ,unsigned long) ;
 int FUNC_10 (unsigned long,int ) ;
 int FUNC_11 (char const*) ;

struct file *FUNC_12(const char *VAR_11, loff_t VAR_12, unsigned long VAR_13)
{
 int VAR_14;
 struct file *VAR_15;
 struct inode *VAR_16;
 struct path VAR_17;
 struct dentry *VAR_18;
 struct qstr VAR_19;

 if (FUNC_1(VAR_9))
  return (void *)VAR_9;

 if (VAR_12 < 0 || VAR_12 > VAR_6)
  return FUNC_0(-VAR_0);

 if (FUNC_8(VAR_13, VAR_12))
  return FUNC_0(-VAR_2);

 VAR_14 = -VAR_2;
 VAR_19.name = VAR_11;
 VAR_19.len = FUNC_11(VAR_11);
 VAR_19.hash = 0;
 VAR_18 = VAR_9->mnt_root;
 VAR_17.dentry = FUNC_3(VAR_18, &VAR_19);
 if (!VAR_17.dentry)
  goto put_memory;
 VAR_17.mnt = FUNC_5(VAR_9);

 VAR_14 = -VAR_3;
 VAR_16 = FUNC_9(VAR_18->d_sb, VAR_7 | VAR_8, 0, VAR_13);
 if (!VAR_16)
  goto put_dentry;

 FUNC_4(VAR_17.dentry, VAR_16);
 VAR_16->i_size = VAR_12;
 VAR_16->i_nlink = 0;

 VAR_14 = FUNC_7(VAR_16, VAR_12);
 if (VAR_14)
  goto put_dentry;


 VAR_14 = -VAR_1;
 VAR_15 = FUNC_2(&VAR_17, VAR_5 | VAR_4,
    &VAR_10);
 if (!VAR_15)
  goto put_dentry;

 return VAR_15;

put_dentry:
 FUNC_6(&VAR_17);
put_memory:
 FUNC_10(VAR_13, VAR_12);
 return FUNC_0(VAR_14);
}
