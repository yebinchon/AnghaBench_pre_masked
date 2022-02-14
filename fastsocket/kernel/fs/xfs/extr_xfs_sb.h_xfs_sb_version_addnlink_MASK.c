
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sb_versionnum; } ;
typedef TYPE_1__ xfs_sb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(xfs_sb_t *VAR_3)
{
 if (VAR_3->sb_versionnum <= VAR_0)
  VAR_3->sb_versionnum = VAR_1;
 else
  VAR_3->sb_versionnum |= VAR_2;
}
