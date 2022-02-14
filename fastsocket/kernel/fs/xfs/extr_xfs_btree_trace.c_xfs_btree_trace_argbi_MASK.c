
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {TYPE_1__* bc_ops; } ;
typedef int __psunsigned_t ;
struct TYPE_2__ {int (* trace_enter ) (struct xfs_btree_cur*,char const*,int ,int ,int,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_btree_cur*,char const*,int ,int ,int,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void
FUNC_1(
 const char *VAR_2,
 struct xfs_btree_cur *VAR_3,
 struct xfs_buf *VAR_4,
 int VAR_5,
 int VAR_6)
{
 VAR_3->bc_ops->trace_enter(VAR_3, VAR_2, VAR_0, VAR_1,
     VAR_6, (__psunsigned_t)VAR_4, VAR_5, 0, 0, 0, 0, 0,
     0, 0, 0, 0);
}
