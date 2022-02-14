
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_lsn_t ;
struct xfs_ail {int xa_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(
 struct xfs_ail *VAR_0,
 xfs_lsn_t *VAR_1,
 xfs_lsn_t *VAR_2)
{
 FUNC_0(sizeof(xfs_lsn_t) == 8);
 FUNC_1(&VAR_0->xa_lock);
 *VAR_1 = *VAR_2;
 FUNC_2(&VAR_0->xa_lock);
}
