
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union xfs_btree_key {int dummy; } xfs_btree_key ;
struct xfs_btree_cur {TYPE_1__* bc_ops; } ;
typedef int __uint64_t ;
struct TYPE_2__ {int (* trace_enter ) (struct xfs_btree_cur*,char const*,int ,int ,int,int,int,int,int,int,int ,int ,int ,int ,int ,int ) ;int (* trace_key ) (struct xfs_btree_cur*,union xfs_btree_key*,int*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_btree_cur*,union xfs_btree_key*,int*,int*) ;
 int FUNC_1 (struct xfs_btree_cur*,char const*,int ,int ,int,int,int,int,int,int,int ,int ,int ,int ,int ,int ) ;

void
FUNC_2(
 const char *VAR_2,
 struct xfs_btree_cur *VAR_3,
 int VAR_4,
 union xfs_btree_key *VAR_5,
 int VAR_6)
{
 __uint64_t VAR_7, VAR_8;

 VAR_3->bc_ops->trace_key(VAR_3, VAR_5, &VAR_7, &VAR_8);
 VAR_3->bc_ops->trace_enter(VAR_3, VAR_2, VAR_0, VAR_1,
     VAR_6, VAR_4,
     VAR_7 >> 32, (int)VAR_7,
     VAR_8 >> 32, (int)VAR_8,
     0, 0, 0, 0, 0, 0);
}
