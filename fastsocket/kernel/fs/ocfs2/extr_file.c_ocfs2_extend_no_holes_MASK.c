
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_inode_info {scalar_t__ ip_clusters; } ;
struct inode {int i_sb; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct inode*,int ) ;

int FUNC_5(struct inode *VAR_0, u64 VAR_1, u64 VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 struct ocfs2_inode_info *VAR_5 = FUNC_0(VAR_0);

 VAR_4 = FUNC_3(VAR_0->i_sb, VAR_1);
 if (VAR_4 < VAR_5->ip_clusters)
  VAR_4 = 0;
 else
  VAR_4 -= VAR_5->ip_clusters;

 if (VAR_4) {
  VAR_3 = FUNC_1(VAR_0, VAR_5->ip_clusters,
      VAR_4, 0);
  if (VAR_3) {
   FUNC_2(VAR_3);
   goto out;
  }
 }






 VAR_3 = FUNC_4(VAR_0, VAR_2);
 if (VAR_3 < 0)
  FUNC_2(VAR_3);

out:
 return VAR_3;
}
