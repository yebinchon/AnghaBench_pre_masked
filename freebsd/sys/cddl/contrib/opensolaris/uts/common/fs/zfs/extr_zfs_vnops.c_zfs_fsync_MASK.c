
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int z_id; TYPE_3__* z_zfsvfs; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_10__ {int z_log; TYPE_1__* z_os; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int vnode_t ;
typedef int cred_t ;
typedef int caller_context_t ;
struct TYPE_8__ {scalar_t__ os_sync; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(vnode_t *VAR_3, int VAR_4, cred_t *VAR_5, caller_context_t *VAR_6)
{
 znode_t *VAR_7 = FUNC_0(VAR_3);
 zfsvfs_t *VAR_8 = VAR_7->z_zfsvfs;

 (void) FUNC_4(VAR_2, (void *)VAR_1);

 if (VAR_8->z_os->os_sync != VAR_0) {
  FUNC_1(VAR_8);
  FUNC_3(VAR_7);
  FUNC_5(VAR_8->z_log, VAR_7->z_id);
  FUNC_2(VAR_8);
 }
 return (0);
}
