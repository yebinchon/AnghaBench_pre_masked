
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int z_pflags; scalar_t__ z_size; TYPE_2__* z_zfsvfs; int z_sync_cnt; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_11__ {scalar_t__ z_vscan; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int vnode_t ;
typedef int offset_t ;
typedef int cred_t ;
typedef int caller_context_t ;
struct TYPE_12__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_4__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,int *,int) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_12(vnode_t *VAR_4, int VAR_5, int VAR_6, offset_t VAR_7, cred_t *VAR_8,
    caller_context_t *VAR_9)
{
 znode_t *VAR_10 = FUNC_1(VAR_4);
 zfsvfs_t *VAR_11 = VAR_10->z_zfsvfs;




 FUNC_7(VAR_4, FUNC_9(), 0);
 FUNC_8(VAR_4, FUNC_9());

 FUNC_2(VAR_11);
 FUNC_4(VAR_10);


 if ((VAR_5 & (VAR_1 | VAR_0)) && (VAR_6 == 1))
  FUNC_6(&VAR_10->z_sync_cnt);

 if (!FUNC_11(VAR_10) && VAR_10->z_zfsvfs->z_vscan &&
     FUNC_5(VAR_10)->v_type == VAR_2 &&
     !(VAR_10->z_pflags & VAR_3) && VAR_10->z_size > 0)
  FUNC_0(FUNC_10(VAR_4, VAR_8, 1) == 0);

 FUNC_3(VAR_11);
 return (0);
}
