
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ xdrproc_t ;
struct TYPE_9__ {int drok_attributes; int drok_fhandle; } ;
struct TYPE_10__ {TYPE_1__ dr_drok_u; } ;
struct TYPE_13__ {int dr_status; TYPE_2__ dr_u; } ;
typedef TYPE_5__ nfsdiropres ;
struct TYPE_14__ {TYPE_4__* am_al; int * am_transp; int am_fattr; } ;
typedef TYPE_6__ am_node ;
typedef int XDRPROC_T_TYPE ;
struct TYPE_12__ {TYPE_3__* al_mnt; } ;
struct TYPE_11__ {int mf_mount; } ;
typedef int SVC_IN_ARG_TYPE ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

void
FUNC_6(am_node *VAR_2, int VAR_3)
{
  SVCXPRT *VAR_4 = VAR_2->am_transp;
  nfsdiropres VAR_5;
  xdrproc_t VAR_6 = (xdrproc_t) VAR_1;





  if (VAR_4) {
    if (VAR_3 == 0) {




      FUNC_2(VAR_2, &VAR_5.dr_u.dr_drok_u.drok_fhandle);
      VAR_5.dr_u.dr_drok_u.drok_attributes = VAR_2->am_fattr;
      VAR_5.dr_status = VAR_0;
    } else



      VAR_5.dr_status = FUNC_3(VAR_3);




    if (!FUNC_4(VAR_4, (XDRPROC_T_TYPE) VAR_6, (SVC_IN_ARG_TYPE) & VAR_5))
      FUNC_5(VAR_4);




    FUNC_0(VAR_2->am_transp);
    FUNC_1("Quick reply sent for %s", VAR_2->am_al->al_mnt->mf_mount);
  }
}
