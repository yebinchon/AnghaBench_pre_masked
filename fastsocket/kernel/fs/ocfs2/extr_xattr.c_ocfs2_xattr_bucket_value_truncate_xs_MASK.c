
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_set_ctxt {int dummy; } ;
struct ocfs2_xattr_search {TYPE_1__* bucket; scalar_t__ base; struct ocfs2_xattr_entry* here; } ;
struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; } ;
struct ocfs2_xattr_entry {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int * bu_bhs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,TYPE_1__*,int,int,struct ocfs2_xattr_set_ctxt*) ;
 scalar_t__ FUNC_3 (struct ocfs2_xattr_entry*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0,
     struct ocfs2_xattr_search *VAR_1,
     int VAR_2,
     struct ocfs2_xattr_set_ctxt *VAR_3)
{
 int VAR_4, VAR_5;
 struct ocfs2_xattr_entry *VAR_6 = VAR_1->here;
 struct ocfs2_xattr_header *VAR_7 = (struct ocfs2_xattr_header *)VAR_1->base;

 FUNC_0(!VAR_1->bucket->bu_bhs[0] || !VAR_6 || FUNC_3(VAR_6));

 VAR_5 = VAR_6 - VAR_7->xh_entries;
 VAR_4 = FUNC_2(VAR_0, VAR_1->bucket,
      VAR_5, VAR_2, VAR_3);
 if (VAR_4)
  FUNC_1(VAR_4);

 return VAR_4;
}
