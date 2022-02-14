
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int z_pflags; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_9__ {scalar_t__ z_replay; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int uint32_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {scalar_t__ v_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int*,scalar_t__,int *) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_4(znode_t *VAR_6, uint32_t VAR_7, uint32_t *VAR_8,
    boolean_t *VAR_9, boolean_t VAR_10, cred_t *VAR_11)
{
 zfsvfs_t *VAR_12 = VAR_6->z_zfsvfs;
 int VAR_13;

 *VAR_8 = VAR_7;
 *VAR_9 = VAR_1;




 if (VAR_7 == 0 || VAR_12->z_replay) {
  *VAR_8 = 0;
  return (0);
 }

 if ((VAR_13 = FUNC_3(VAR_6, VAR_7)) != 0) {
  *VAR_9 = VAR_0;
  return (VAR_13);
 }






 if (VAR_10) {
  *VAR_8 = 0;
  return (0);
 }
 if ((VAR_7 & VAR_4) &&
     (FUNC_1(VAR_6)->v_type != VAR_3) &&
     (VAR_6->z_pflags & VAR_5)) {
  return (FUNC_0(VAR_2));
 }

 return (FUNC_2(VAR_6, VAR_8, VAR_0, VAR_11));
}
