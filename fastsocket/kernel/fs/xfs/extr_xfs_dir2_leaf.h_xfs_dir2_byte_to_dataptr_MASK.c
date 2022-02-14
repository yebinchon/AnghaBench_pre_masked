
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dir2_off_t ;
typedef int xfs_dir2_dataptr_t ;
struct xfs_mount {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline xfs_dir2_dataptr_t
FUNC_0(struct xfs_mount *VAR_1, xfs_dir2_off_t VAR_2)
{
 return (xfs_dir2_dataptr_t)((VAR_2) >> VAR_0);
}
