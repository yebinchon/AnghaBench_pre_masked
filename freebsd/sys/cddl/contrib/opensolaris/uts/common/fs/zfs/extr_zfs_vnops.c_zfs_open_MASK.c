
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int z_pflags; scalar_t__ z_size; int z_sync_cnt; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_11__ {scalar_t__ z_vscan; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int vnode_t ;
typedef int cred_t ;
typedef int caller_context_t ;
struct TYPE_12__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_4__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(vnode_t **VAR_9, int VAR_10, cred_t *VAR_11, caller_context_t *VAR_12)
{
 znode_t *VAR_13 = FUNC_1(*VAR_9);
 zfsvfs_t *VAR_14 = VAR_13->z_zfsvfs;

 FUNC_2(VAR_14);
 FUNC_4(VAR_13);

 if ((VAR_10 & VAR_5) && (VAR_13->z_pflags & VAR_7) &&
     ((VAR_10 & VAR_2) == 0)) {
  FUNC_3(VAR_14);
  return (FUNC_0(VAR_1));
 }

 if (!FUNC_8(VAR_13) && VAR_13->z_zfsvfs->z_vscan &&
     FUNC_5(VAR_13)->v_type == VAR_6 &&
     !(VAR_13->z_pflags & VAR_8) && VAR_13->z_size > 0) {
  if (FUNC_7(*VAR_9, VAR_11, 0) != 0) {
   FUNC_3(VAR_14);
   return (FUNC_0(VAR_0));
  }
 }


 if (VAR_10 & (VAR_4 | VAR_3))
  FUNC_6(&VAR_13->z_sync_cnt);

 FUNC_3(VAR_14);
 return (0);
}
