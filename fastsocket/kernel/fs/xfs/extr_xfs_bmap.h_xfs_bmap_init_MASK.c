
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
struct TYPE_3__ {scalar_t__ xbf_low; scalar_t__ xbf_count; int * xbf_first; } ;
typedef TYPE_1__ xfs_bmap_free_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(xfs_bmap_free_t *VAR_1, xfs_fsblock_t *VAR_2)
{
 ((VAR_1)->xbf_first = ((void*)0), (VAR_1)->xbf_count = 0, (VAR_1)->xbf_low = 0, *(VAR_2) = VAR_0);

}
