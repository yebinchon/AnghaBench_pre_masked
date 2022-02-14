
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_btree_cur {int* bc_ptrs; scalar_t__* bc_bufs; TYPE_1__* bc_ops; } ;
typedef int __uint64_t ;
typedef int __uint32_t ;
typedef int __psunsigned_t ;
struct TYPE_2__ {int (* trace_enter ) (struct xfs_btree_cur*,char const*,char*,int ,int,int ,int,int,int,int,int ,int ,int ,int ,int,int) ;int (* trace_cursor ) (struct xfs_btree_cur*,int *,int*,int*) ;} ;






 int VAR_0 ;
 int FUNC_0 (struct xfs_btree_cur*,int *,int*,int*) ;
 int FUNC_1 (struct xfs_btree_cur*,char const*,char*,int ,int,int ,int,int,int,int,int ,int ,int ,int ,int,int) ;

void
FUNC_2(
 const char *VAR_1,
 struct xfs_btree_cur *VAR_2,
 int VAR_3,
 int VAR_4)
{
 __uint32_t VAR_5;
 __uint64_t VAR_6, VAR_7;
 char *VAR_8;

 switch (VAR_3) {
 case 131:
  VAR_8 = "args";
  break;
 case 130:
  VAR_8 = "entry";
  break;
 case 129:
  VAR_8 = "error";
  break;
 case 128:
  VAR_8 = "exit";
  break;
 default:
  VAR_8 = "unknown";
  break;
 }

 VAR_2->bc_ops->trace_cursor(VAR_2, &VAR_5, &VAR_6, &VAR_7);
 VAR_2->bc_ops->trace_enter(VAR_2, VAR_1, VAR_8, VAR_0, VAR_4,
     VAR_5,
     VAR_6 >> 32, (int)VAR_6,
     VAR_7 >> 32, (int)VAR_7,
     (__psunsigned_t)VAR_2->bc_bufs[0],
     (__psunsigned_t)VAR_2->bc_bufs[1],
     (__psunsigned_t)VAR_2->bc_bufs[2],
     (__psunsigned_t)VAR_2->bc_bufs[3],
     (VAR_2->bc_ptrs[0] << 16) | VAR_2->bc_ptrs[1],
     (VAR_2->bc_ptrs[2] << 16) | VAR_2->bc_ptrs[3]);
}
