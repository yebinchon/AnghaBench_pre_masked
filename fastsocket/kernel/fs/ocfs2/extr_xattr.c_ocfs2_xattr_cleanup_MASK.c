
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {int (* vb_access ) (int *,int ,int ,int ) ;int vb_bh; } ;
struct ocfs2_xattr_search {scalar_t__ here; TYPE_1__* header; void* base; } ;
struct ocfs2_xattr_info {int name; } ;
struct ocfs2_xattr_entry {int dummy; } ;
struct inode {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int xh_count; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2,
          handle_t *VAR_3,
          struct ocfs2_xattr_info *VAR_4,
          struct ocfs2_xattr_search *VAR_5,
          struct ocfs2_xattr_value_buf *VAR_6,
          size_t VAR_7)
{
 int VAR_8 = 0;
 size_t VAR_9 = FUNC_6(VAR_4->name);
 void *VAR_10 = VAR_5->base + VAR_7;
 size_t VAR_11 = FUNC_1(VAR_9) + VAR_1;

 VAR_8 = VAR_6->vb_access(VAR_3, FUNC_0(VAR_2), VAR_6->vb_bh,
       VAR_0);
 if (VAR_8) {
  FUNC_4(VAR_8);
  goto out;
 }

 FUNC_2(&VAR_5->header->xh_count, -1);

 FUNC_3((void *)VAR_5->here, 0, sizeof(struct ocfs2_xattr_entry));
 FUNC_3(VAR_10, 0, VAR_11);

 VAR_8 = FUNC_5(VAR_3, VAR_6->vb_bh);
 if (VAR_8 < 0)
  FUNC_4(VAR_8);
out:
 return VAR_8;
}
