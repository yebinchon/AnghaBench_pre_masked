
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct reiserfs_dentry_buf {scalar_t__ count; struct dentry** dentries; TYPE_4__* xadir; } ;
struct TYPE_6__ {int name; } ;
struct dentry {TYPE_2__ d_name; int d_sb; int d_inode; } ;
typedef int loff_t ;
struct TYPE_7__ {int name; } ;
struct TYPE_8__ {TYPE_3__ d_name; TYPE_1__* d_inode; } ;
struct TYPE_5__ {int i_mutex; } ;


 scalar_t__ FUNC_0 (struct dentry**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (char const*,TYPE_4__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_8(void *VAR_2, const char *VAR_3, int VAR_4, loff_t VAR_5,
      u64 VAR_6, unsigned int VAR_7)
{
 struct reiserfs_dentry_buf *VAR_8 = VAR_2;
 struct dentry *VAR_9;
 FUNC_3(!FUNC_6(&VAR_8->xadir->d_inode->i_mutex));

 if (VAR_8->count == FUNC_0(VAR_8->dentries))
  return -VAR_1;

 if (VAR_3[0] == '.' && (VAR_3[1] == '\0' ||
          (VAR_3[1] == '.' && VAR_3[2] == '\0')))
  return 0;

 VAR_9 = FUNC_5(VAR_3, VAR_8->xadir, VAR_4);
 if (FUNC_1(VAR_9)) {
  return FUNC_2(VAR_9);
 } else if (!VAR_9->d_inode) {

  FUNC_7(VAR_9->d_sb, "xattr-20003",
          "Corrupted directory: xattr %s listed but "
          "not found for file %s.\n",
          VAR_9->d_name.name, VAR_8->xadir->d_name.name);
  FUNC_4(VAR_9);
  return -VAR_0;
 }

 VAR_8->dentries[VAR_8->count++] = VAR_9;
 return 0;
}
