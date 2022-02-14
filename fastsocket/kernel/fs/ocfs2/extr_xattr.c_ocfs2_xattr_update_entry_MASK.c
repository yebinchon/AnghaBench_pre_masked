
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {int (* vb_access ) (int *,int ,int ,int ) ;int vb_bh; } ;
struct ocfs2_xattr_search {TYPE_1__* here; int header; } ;
struct ocfs2_xattr_info {scalar_t__ value_len; } ;
struct inode {int dummy; } ;
typedef int handle_t ;
struct TYPE_3__ {int xe_value_size; int xe_name_offset; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct inode*,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2,
        handle_t *VAR_3,
        struct ocfs2_xattr_info *VAR_4,
        struct ocfs2_xattr_search *VAR_5,
        struct ocfs2_xattr_value_buf *VAR_6,
        size_t VAR_7)
{
 int VAR_8;

 VAR_8 = VAR_6->vb_access(VAR_3, FUNC_0(VAR_2), VAR_6->vb_bh,
       VAR_0);
 if (VAR_8) {
  FUNC_3(VAR_8);
  goto out;
 }

 VAR_5->here->xe_name_offset = FUNC_1(VAR_7);
 VAR_5->here->xe_value_size = FUNC_2(VAR_4->value_len);
 if (VAR_4->value_len <= VAR_1)
  FUNC_6(VAR_5->here, 1);
 else
  FUNC_6(VAR_5->here, 0);
 FUNC_5(VAR_2, VAR_5->header, VAR_5->here);

 VAR_8 = FUNC_4(VAR_3, VAR_6->vb_bh);
 if (VAR_8 < 0)
  FUNC_3(VAR_8);
out:
 return VAR_8;
}
