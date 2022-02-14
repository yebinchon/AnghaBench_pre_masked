
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_attr_list_context {int resynch; char* alist; size_t bufsize; size_t firstu; scalar_t__ count; int put_listent; struct attrlist_cursor_kern* cursor; int dp; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct attrlist_cursor_kern {int member_0; } ;
typedef int ssize_t ;
typedef int context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,scalar_t__,char*,size_t,scalar_t__*) ;
 int FUNC_2 (struct xfs_attr_list_context*,int ,int) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct xfs_attr_list_context*) ;
 int VAR_3 ;
 int VAR_4 ;

ssize_t
FUNC_7(struct dentry *VAR_5, char *VAR_6, size_t VAR_7)
{
 struct xfs_attr_list_context VAR_8;
 struct attrlist_cursor_kern VAR_9 = { 0 };
 struct inode *VAR_10 = VAR_5->d_inode;
 int VAR_11;




 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.dp = FUNC_0(VAR_10);
 VAR_8.cursor = &VAR_9;
 VAR_8.resynch = 1;
 VAR_8.alist = VAR_6;
 VAR_8.bufsize = VAR_7;
 VAR_8.firstu = VAR_8.bufsize;

 if (VAR_7)
  VAR_8.put_listent = VAR_3;
 else
  VAR_8.put_listent = VAR_4;

 FUNC_6(&VAR_8);
 if (VAR_8.count < 0)
  return -VAR_0;




 if (FUNC_3(VAR_10)) {
  VAR_11 = FUNC_1(VAR_1,
    FUNC_5(VAR_1) + 1,
    VAR_6, VAR_7, &VAR_8.count);
  if (VAR_11)
   return VAR_11;
 }

 if (FUNC_4(VAR_10)) {
  VAR_11 = FUNC_1(VAR_2,
    FUNC_5(VAR_2) + 1,
    VAR_6, VAR_7, &VAR_8.count);
  if (VAR_11)
   return VAR_11;
 }

 return VAR_8.count;
}
