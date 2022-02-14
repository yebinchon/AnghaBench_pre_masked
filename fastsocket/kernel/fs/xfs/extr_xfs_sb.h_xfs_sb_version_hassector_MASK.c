
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sb_versionnum; } ;
typedef TYPE_1__ xfs_sb_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(xfs_sb_t *VAR_2)
{
 return FUNC_0(VAR_2) == VAR_0 &&
  (VAR_2->sb_versionnum & VAR_1);
}
