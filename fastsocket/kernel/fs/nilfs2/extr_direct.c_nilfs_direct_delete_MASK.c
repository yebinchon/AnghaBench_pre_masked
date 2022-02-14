
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nilfs_bmap_ptr_req {scalar_t__ bpr_ptr; } ;
struct nilfs_direct {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap*) ;
 int VAR_2 ;
 int FUNC_1 (struct nilfs_bmap*,union nilfs_bmap_ptr_req*,struct inode*) ;
 struct inode* FUNC_2 (struct nilfs_bmap*) ;
 int FUNC_3 (struct nilfs_bmap*,union nilfs_bmap_ptr_req*,struct inode*) ;
 int FUNC_4 (struct nilfs_bmap*,int) ;
 scalar_t__ FUNC_5 (struct nilfs_direct*,int ) ;
 int FUNC_6 (struct nilfs_direct*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct nilfs_bmap *VAR_3, __u64 VAR_4)
{
 struct nilfs_direct *VAR_5 = (struct nilfs_direct *)VAR_3;
 union nilfs_bmap_ptr_req VAR_6;
 struct inode *VAR_7;
 int VAR_8;

 if (VAR_4 > VAR_2 ||
     FUNC_5(VAR_5, VAR_4) == VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3) ? FUNC_2(VAR_3) : ((void*)0);
 VAR_6.bpr_ptr = FUNC_5(VAR_5, VAR_4);

 VAR_8 = FUNC_3(VAR_3, &VAR_6, VAR_7);
 if (!VAR_8) {
  FUNC_1(VAR_3, &VAR_6, VAR_7);
  FUNC_6(VAR_5, VAR_4, VAR_1);
  FUNC_4(VAR_3, 1);
 }
 return VAR_8;
}
