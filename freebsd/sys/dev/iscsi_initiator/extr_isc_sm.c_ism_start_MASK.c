
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sid; int stp; int flags; int io_mtx; int hld_mtx; int snd_mtx; int rsp_mtx; int rsv_mtx; int hld; int wsnd; int isnd; int csnd; int rsv; int rsp; } ;
typedef TYPE_1__ isc_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,TYPE_1__*,int *,int ,int ,char*,int ) ;
 int FUNC_5 (int ,TYPE_1__*,int *,int ,int ,char*,int ) ;
 int FUNC_6 (int *,char*,int *,int ) ;

int
FUNC_7(isc_session_t *VAR_3)
{
     FUNC_2(8);



     FUNC_0(&VAR_3->rsp);
     FUNC_0(&VAR_3->rsv);
     FUNC_0(&VAR_3->csnd);
     FUNC_0(&VAR_3->isnd);
     FUNC_0(&VAR_3->wsnd);
     FUNC_0(&VAR_3->hld);

     FUNC_6(&VAR_3->rsv_mtx, "iscsi-rsv", ((void*)0), VAR_1);
     FUNC_6(&VAR_3->rsp_mtx, "iscsi-rsp", ((void*)0), VAR_1);
     FUNC_6(&VAR_3->snd_mtx, "iscsi-snd", ((void*)0), VAR_1);
     FUNC_6(&VAR_3->hld_mtx, "iscsi-hld", ((void*)0), VAR_1);
     FUNC_6(&VAR_3->io_mtx, "iscsi-io", ((void*)0), VAR_1);

     FUNC_3(VAR_3);

     VAR_3->flags |= VAR_0;

     FUNC_1(4, "starting ism_proc: sp->sid=%d", VAR_3->sid);




     return FUNC_5(VAR_2, VAR_3, &VAR_3->stp, 0, 0, "isc_out %d", VAR_3->sid);

}
