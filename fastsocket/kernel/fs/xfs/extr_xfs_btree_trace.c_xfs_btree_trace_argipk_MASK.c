
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union xfs_btree_ptr {int dummy; } xfs_btree_ptr ;
typedef union xfs_btree_key {int dummy; } xfs_btree_key ;
struct xfs_btree_cur {TYPE_1__* bc_ops; } ;
typedef int __uint64_t ;
typedef int __psunsigned_t ;
struct TYPE_2__ {int (* trace_enter ) (struct xfs_btree_cur*,char const*,int ,int ,int,int,int ,int ,int,int,int,int,int ,int ,int ,int ) ;int (* trace_key ) (struct xfs_btree_cur*,union xfs_btree_key*,int*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_btree_cur*,union xfs_btree_key*,int*,int*) ;
 int FUNC_1 (struct xfs_btree_cur*,char const*,int ,int ,int,int,int ,int ,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct xfs_btree_cur*,union xfs_btree_ptr,int *,int *) ;

void
FUNC_3(
 const char *VAR_2,
 struct xfs_btree_cur *VAR_3,
 int VAR_4,
 union xfs_btree_ptr VAR_5,
 union xfs_btree_key *VAR_6,
 int VAR_7)
{
 __psunsigned_t VAR_8, VAR_9;
 __uint64_t VAR_10, VAR_11;

 FUNC_2(VAR_3, VAR_5, &VAR_8, &VAR_9);
 VAR_3->bc_ops->trace_key(VAR_3, VAR_6, &VAR_10, &VAR_11);
 VAR_3->bc_ops->trace_enter(VAR_3, VAR_2, VAR_0, VAR_1,
     VAR_7, VAR_4, VAR_8, VAR_9,
     VAR_10 >> 32, (int)VAR_10,
     VAR_11 >> 32, (int)VAR_11,
     0, 0, 0, 0);
}
