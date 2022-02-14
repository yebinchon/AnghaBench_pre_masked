
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_dfsbno_t ;
typedef int xfs_dfiloff_t ;
typedef int xfs_dfilblks_t ;
struct xfs_btree_cur {TYPE_1__* bc_ops; } ;
struct TYPE_2__ {int (* trace_enter ) (struct xfs_btree_cur*,char const*,int ,int ,int,int,int,int,int,int,int,int,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_btree_cur*,char const*,int ,int ,int,int,int,int,int,int,int,int,int ,int ,int ,int ) ;

void
FUNC_1(
 const char *VAR_2,
 struct xfs_btree_cur *VAR_3,
 xfs_dfiloff_t VAR_4,
 xfs_dfsbno_t VAR_5,
 xfs_dfilblks_t VAR_6,
 int VAR_7,
 int VAR_8)
{
 VAR_3->bc_ops->trace_enter(VAR_3, VAR_2, VAR_0, VAR_1,
     VAR_8,
     VAR_4 >> 32, (int)VAR_4,
     VAR_5 >> 32, (int)VAR_5,
     VAR_6 >> 32, (int)VAR_6,
     (int)VAR_7, 0, 0, 0, 0);
}
