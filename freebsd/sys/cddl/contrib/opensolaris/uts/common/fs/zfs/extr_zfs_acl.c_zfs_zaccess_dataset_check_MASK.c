
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int z_pflags; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_3__ znode_t ;
typedef int uint32_t ;
struct TYPE_7__ {TYPE_1__* z_vfs; } ;
struct TYPE_6__ {int vfs_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_3(znode_t *VAR_14, uint32_t VAR_15)
{
 if ((VAR_15 & VAR_8) &&
     (VAR_14->z_zfsvfs->z_vfs->vfs_flag & VAR_7) &&
     (!FUNC_0(FUNC_2(VAR_14)) ||
     (FUNC_0(FUNC_2(VAR_14)) && (VAR_15 & VAR_9)))) {
  return (FUNC_1(VAR_6));
 }





 if ((VAR_15 & VAR_10) &&
     (VAR_14->z_pflags & VAR_12)) {
  return (FUNC_1(VAR_5));
 }
 if ((VAR_15 & VAR_0) &&
     (VAR_14->z_pflags & VAR_13)) {
  return (VAR_5);
 }


 if (((VAR_15 & (VAR_3|VAR_2)) &&
     (VAR_14->z_pflags & VAR_11))) {
  return (FUNC_1(VAR_4));
 }

 return (0);
}
