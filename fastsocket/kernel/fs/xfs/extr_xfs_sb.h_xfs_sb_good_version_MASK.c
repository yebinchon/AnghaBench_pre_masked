
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sb_versionnum; int sb_features2; scalar_t__ sb_shared_vn; } ;
typedef TYPE_1__ xfs_sb_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline int FUNC_1(xfs_sb_t *VAR_8)
{

 if (VAR_8->sb_versionnum >= VAR_2 &&
     VAR_8->sb_versionnum <= VAR_3)
  return 1;


 if (FUNC_0(VAR_8) == VAR_4) {
  if ((VAR_8->sb_versionnum & ~VAR_6) ||
      ((VAR_8->sb_versionnum & VAR_5) &&
       (VAR_8->sb_features2 & ~VAR_1)))
   return 0;





  if ((VAR_8->sb_versionnum & VAR_7) &&
      VAR_8->sb_shared_vn > VAR_0)
   return 0;


  return 1;
 }

 return 0;
}
