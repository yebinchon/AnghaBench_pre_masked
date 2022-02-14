
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sb_features2; int sb_versionnum; } ;
typedef TYPE_1__ xfs_sb_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(xfs_sb_t *VAR_2)
{
 VAR_2->sb_versionnum |= VAR_1;
 VAR_2->sb_features2 |= VAR_0;
}
