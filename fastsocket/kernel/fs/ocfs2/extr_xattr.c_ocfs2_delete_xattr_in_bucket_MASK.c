
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_set_ctxt {int dealloc; int * meta_ac; int handle; int * member_1; int * member_0; } ;
struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; int xh_count; } ;
struct ocfs2_xattr_entry {int dummy; } ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct ocfs2_super {int sb; } ;
struct ocfs2_rm_xattr_bucket_para {int ref_root_bh; int ref_ci; } ;
struct inode {int i_sb; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ocfs2_xattr_header* FUNC_3 (struct ocfs2_xattr_bucket*) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ocfs2_super*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,struct ocfs2_xattr_bucket*,size_t,struct ocfs2_xattr_value_root**,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inode*,struct ocfs2_xattr_value_root*,int ,int ,int **,int*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct ocfs2_super*,int *) ;
 int FUNC_14 (struct ocfs2_super*,int) ;
 int FUNC_15 (struct ocfs2_super*,int) ;
 int FUNC_16 (struct inode*,struct ocfs2_xattr_bucket*,size_t,int ,struct ocfs2_xattr_set_ctxt*) ;
 scalar_t__ FUNC_17 (struct ocfs2_xattr_entry*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_0,
     struct ocfs2_xattr_bucket *VAR_1,
     void *VAR_2)
{
 int VAR_3 = 0, VAR_4;
 struct ocfs2_xattr_header *VAR_5 = FUNC_3(VAR_1);
 u16 VAR_6;
 struct ocfs2_xattr_entry *VAR_7;
 struct ocfs2_super *VAR_8 = FUNC_1(VAR_0->i_sb);
 struct ocfs2_xattr_set_ctxt VAR_9 = {((void*)0), ((void*)0),};
 int VAR_10 = FUNC_12(VAR_8->sb) +
  FUNC_6(VAR_0->i_sb);
 struct ocfs2_xattr_value_root *VAR_11;
 struct ocfs2_rm_xattr_bucket_para *VAR_12 =
   (struct ocfs2_rm_xattr_bucket_para *)VAR_2;

 FUNC_10(&VAR_9.dealloc);

 for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_5->xh_count); VAR_6++) {
  VAR_7 = &VAR_5->xh_entries[VAR_6];
  if (FUNC_17(VAR_7))
   continue;

  VAR_3 = FUNC_9(VAR_0->i_sb, VAR_1,
            VAR_6, &VAR_11, ((void*)0));

  VAR_3 = FUNC_11(VAR_0, VAR_11,
        VAR_12->ref_ci,
        VAR_12->ref_root_bh,
        &VAR_9.meta_ac,
        &VAR_4);

  VAR_9.handle = FUNC_15(VAR_8, VAR_10 + VAR_4);
  if (FUNC_0(VAR_9.handle)) {
   VAR_3 = FUNC_2(VAR_9.handle);
   FUNC_5(VAR_3);
   break;
  }

  VAR_3 = FUNC_16(VAR_0, VAR_1,
       VAR_6, 0, &VAR_9);

  FUNC_7(VAR_8, VAR_9.handle);
  if (VAR_9.meta_ac) {
   FUNC_8(VAR_9.meta_ac);
   VAR_9.meta_ac = ((void*)0);
  }
  if (VAR_3) {
   FUNC_5(VAR_3);
   break;
  }
 }

 if (VAR_9.meta_ac)
  FUNC_8(VAR_9.meta_ac);
 FUNC_14(VAR_8, 1);
 FUNC_13(VAR_8, &VAR_9.dealloc);
 return VAR_3;
}
