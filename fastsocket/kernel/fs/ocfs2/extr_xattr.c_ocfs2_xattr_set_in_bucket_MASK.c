
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_xattr_set_ctxt {int handle; } ;
struct ocfs2_xattr_search {scalar_t__ not_found; struct ocfs2_xattr_entry* here; } ;
struct ocfs2_xattr_info {size_t value_len; int * value; int name; } ;
struct ocfs2_xattr_entry {int dummy; } ;
struct inode {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int ,struct ocfs2_xattr_search*) ;
 int FUNC_2 (struct inode*,int ,struct ocfs2_xattr_search*,char*,size_t) ;
 int FUNC_3 (struct inode*,struct ocfs2_xattr_search*,size_t,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_4 (struct ocfs2_xattr_entry*) ;
 int FUNC_5 (struct inode*,int ,int ) ;
 int FUNC_6 (struct inode*,int ,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3,
         struct ocfs2_xattr_info *VAR_4,
         struct ocfs2_xattr_search *VAR_5,
         struct ocfs2_xattr_set_ctxt *VAR_6)
{
 int VAR_7, VAR_8 = 1;
 size_t VAR_9;
 char *VAR_10 = (char *)VAR_4->value;
 struct ocfs2_xattr_entry *VAR_11 = VAR_5->here;
 u32 VAR_12 = FUNC_5(VAR_3, VAR_4->name,
           FUNC_7(VAR_4->name));

 if (!VAR_5->not_found && !FUNC_4(VAR_11)) {
  if (VAR_4->value_len > VAR_0)
   VAR_9 = VAR_4->value_len;
  else
   VAR_9 = 0;

  VAR_7 = FUNC_3(VAR_3, VAR_5,
          VAR_9,
          VAR_6);
  if (VAR_7)
   goto out;

  if (VAR_9)
   goto set_value_outside;
 }

 VAR_9 = VAR_4->value_len;

 if (VAR_9 > VAR_0) {




  VAR_8 = 0;
  VAR_4->value = &VAR_2;
  VAR_4->value_len = VAR_1;
 }

 VAR_7 = FUNC_6(VAR_3, VAR_6->handle, VAR_4, VAR_5,
           VAR_12, VAR_8);
 if (VAR_7) {
  FUNC_0(VAR_7);
  goto out;
 }

 if (VAR_9 <= VAR_0)
  goto out;


 VAR_7 = FUNC_3(VAR_3, VAR_5,
         VAR_9, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_7);

  if (VAR_5->not_found) {





   FUNC_1(VAR_3, VAR_6->handle, VAR_5);
  }
  goto out;
 }

set_value_outside:
 VAR_7 = FUNC_2(VAR_3, VAR_6->handle,
         VAR_5, VAR_10, VAR_9);
out:
 return VAR_7;
}
