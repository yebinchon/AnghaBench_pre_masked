
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_btree_cur {int bc_flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static inline size_t FUNC_0(struct xfs_btree_cur *VAR_3)
{
 return (VAR_3->bc_flags & VAR_1) ?
  VAR_0 :
  VAR_2;
}
