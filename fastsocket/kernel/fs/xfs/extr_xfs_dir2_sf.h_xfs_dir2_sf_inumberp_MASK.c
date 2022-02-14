
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t namelen; int * name; } ;
typedef TYPE_1__ xfs_dir2_sf_entry_t ;
typedef int xfs_dir2_inou_t ;



__attribute__((used)) static inline xfs_dir2_inou_t *FUNC_0(xfs_dir2_sf_entry_t *VAR_0)
{
 return (xfs_dir2_inou_t *)&(VAR_0)->name[(VAR_0)->namelen];
}
