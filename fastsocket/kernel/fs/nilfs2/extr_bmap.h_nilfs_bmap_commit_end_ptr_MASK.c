
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nilfs_bmap_ptr_req {int bpr_req; } ;
struct nilfs_bmap {scalar_t__ b_ptr_type; } ;
struct inode {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*,int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct nilfs_bmap *VAR_1,
          union nilfs_bmap_ptr_req *VAR_2,
          struct inode *VAR_3)
{
 if (VAR_3)
  FUNC_0(VAR_3, &VAR_2->bpr_req,
         VAR_1->b_ptr_type == VAR_0);
}
