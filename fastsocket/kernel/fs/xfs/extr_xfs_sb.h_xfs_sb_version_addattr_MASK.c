
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sb_versionnum; } ;
typedef TYPE_1__ xfs_sb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(xfs_sb_t *VAR_4)
{
 if (VAR_4->sb_versionnum == VAR_0)
  VAR_4->sb_versionnum = VAR_1;
 else if (FUNC_0(VAR_4) == VAR_2)
  VAR_4->sb_versionnum |= VAR_3;
 else
  VAR_4->sb_versionnum = VAR_2 | VAR_3;
}
