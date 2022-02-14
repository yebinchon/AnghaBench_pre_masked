
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct ocfs2_write_ctxt {TYPE_1__* w_di_bh; } ;
struct ocfs2_inode_info {int ip_dyn_features; scalar_t__ ip_clusters; scalar_t__ ip_blkno; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_sb; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;
struct TYPE_3__ {scalar_t__ b_data; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,char*,unsigned long long,unsigned int,unsigned long long,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,TYPE_1__*) ;
 unsigned int FUNC_5 (int ,struct ocfs2_dinode*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,unsigned int) ;
 int FUNC_7 (struct address_space*,struct inode*,struct ocfs2_write_ctxt*) ;

__attribute__((used)) static int FUNC_8(struct address_space *VAR_1,
       struct inode *VAR_2, loff_t VAR_3,
       unsigned VAR_4, struct page *VAR_5,
       struct ocfs2_write_ctxt *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 loff_t VAR_9 = VAR_3 + VAR_4;
 struct ocfs2_inode_info *VAR_10 = FUNC_0(VAR_2);
 struct ocfs2_dinode *VAR_11 = ((void*)0);

 FUNC_2(0, "Inode %llu, write of %u bytes at off %llu. features: 0x%x\n",
      (unsigned long long)VAR_10->ip_blkno, VAR_4, (unsigned long long)VAR_3,
      VAR_10->ip_dyn_features);




 if (VAR_10->ip_dyn_features & VAR_0) {
  if (VAR_5 == ((void*)0) &&
      FUNC_6(VAR_6->w_di_bh, VAR_9))
   goto do_inline_write;





  VAR_7 = FUNC_4(VAR_2, VAR_6->w_di_bh);
  if (VAR_7)
   FUNC_3(VAR_7);
  goto out;
 }




 if (VAR_10->ip_clusters != 0 || FUNC_1(VAR_2) != 0)
  return 0;




 VAR_11 = (struct ocfs2_dinode *)VAR_6->w_di_bh->b_data;
 if (VAR_5 ||
     VAR_9 > FUNC_5(VAR_2->i_sb, VAR_11))
  return 0;

do_inline_write:
 VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_7);
  goto out;
 }





 VAR_8 = 1;
out:
 return VAR_8 ? VAR_8 : VAR_7;
}
