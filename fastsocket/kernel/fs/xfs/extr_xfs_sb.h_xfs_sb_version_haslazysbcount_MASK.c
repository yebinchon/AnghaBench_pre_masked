
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sb_features2; } ;
typedef TYPE_1__ xfs_sb_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_1(xfs_sb_t *VAR_1)
{
 return FUNC_0(VAR_1) &&
  (VAR_1->sb_features2 & VAR_0);
}
