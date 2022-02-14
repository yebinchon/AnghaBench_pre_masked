
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_xattr_value_buf {TYPE_1__* vb_xv; } ;
struct ocfs2_xattr_set_ctxt {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int xr_list; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct ocfs2_xattr_value_buf*,scalar_t__,scalar_t__,scalar_t__,unsigned int,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,int *,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0,
       u32 VAR_1,
       u32 VAR_2,
       struct ocfs2_xattr_value_buf *VAR_3,
       struct ocfs2_xattr_set_ctxt *VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u64 VAR_11;

 if (VAR_1 <= VAR_2)
  return 0;

 VAR_8 = VAR_2;
 VAR_7 = VAR_1 - VAR_2;
 while (VAR_7) {
  VAR_5 = FUNC_5(VAR_0, VAR_8, &VAR_9,
            &VAR_10,
            &VAR_3->vb_xv->xr_list, &VAR_6);
  if (VAR_5) {
   FUNC_2(VAR_5);
   goto out;
  }

  if (VAR_10 > VAR_7)
   VAR_10 = VAR_7;

  VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_8,
       VAR_9, VAR_10,
       VAR_6, VAR_4);
  if (VAR_5) {
   FUNC_2(VAR_5);
   goto out;
  }

  VAR_11 = FUNC_3(VAR_0->i_sb, VAR_9);
  FUNC_4(FUNC_0(VAR_0),
             VAR_11, VAR_10);
  VAR_8 += VAR_10;
  VAR_7 -= VAR_10;
 }

out:
 return VAR_5;
}
