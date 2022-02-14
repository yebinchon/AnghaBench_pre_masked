
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* z_zfsvfs; } ;
typedef TYPE_2__ znode_t ;
typedef int zilog_t ;
struct TYPE_11__ {TYPE_1__* z_os; int * z_log; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int vsecattr_t ;
typedef int vnode_t ;
typedef int cred_t ;
typedef int caller_context_t ;
typedef int boolean_t ;
struct TYPE_9__ {scalar_t__ os_sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int *) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(vnode_t *VAR_4, vsecattr_t *VAR_5, int VAR_6, cred_t *VAR_7,
    caller_context_t *VAR_8)
{
 znode_t *VAR_9 = FUNC_0(VAR_4);
 zfsvfs_t *VAR_10 = VAR_9->z_zfsvfs;
 int VAR_11;
 boolean_t VAR_12 = (VAR_6 & VAR_0) ? VAR_2 : VAR_1;
 zilog_t *VAR_13 = VAR_10->z_log;

 FUNC_1(VAR_10);
 FUNC_3(VAR_9);

 VAR_11 = FUNC_4(VAR_9, VAR_5, VAR_12, VAR_7);

 if (VAR_10->z_os->os_sync == VAR_3)
  FUNC_5(VAR_13, 0);

 FUNC_2(VAR_10);
 return (VAR_11);
}
