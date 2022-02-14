
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct isc_softc {int isc_mtx; int nsess; int isc_sess; int unit_sx; int unit; } ;
struct TYPE_10__ {int flags; int clist; int opt; int io_mtx; int snd_mtx; int hld_mtx; int rsv_mtx; int rsp_mtx; int dev; int sid; struct isc_softc* isc; } ;
typedef TYPE_1__ isc_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,char*,...) ;
 int VAR_6 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*,int ,char*,int) ;
 int FUNC_18 (int*) ;
 int FUNC_19 (char*) ;

void
FUNC_20(isc_session_t *VAR_7)
{
     struct isc_softc *VAR_8 = VAR_7->isc;
     int VAR_9;

     FUNC_1(8);
     FUNC_13(2, "terminating");



     FUNC_8(VAR_7);



     VAR_9 = 5;
     VAR_7->flags &= ~VAR_1;
     while(VAR_9-- && (VAR_7->flags & VAR_2)) {
   FUNC_13(2, "n=%d", VAR_9);
   FUNC_18(&VAR_7->flags);
   FUNC_17(VAR_7, VAR_4, "-", 5*VAR_5);
     }
     FUNC_13(2, "final n=%d", VAR_9);
     VAR_7->flags &= ~VAR_0;

     FUNC_9(VAR_7);

     (void)FUNC_6(VAR_7);

     FUNC_7(VAR_7);

     FUNC_14(&VAR_8->unit_sx);
     FUNC_4(VAR_8->unit, VAR_7->sid);
     FUNC_15(&VAR_8->unit_sx);

     FUNC_11(&VAR_8->isc_mtx);
     FUNC_0(&VAR_8->isc_sess, VAR_7, VAR_6);
     VAR_8->nsess--;
     FUNC_12(&VAR_8->isc_mtx);


     FUNC_2(VAR_7->dev);


     FUNC_10(&VAR_7->rsp_mtx);
     FUNC_10(&VAR_7->rsv_mtx);
     FUNC_10(&VAR_7->hld_mtx);
     FUNC_10(&VAR_7->snd_mtx);
     FUNC_10(&VAR_7->io_mtx);

     FUNC_5(&VAR_7->opt);

     if(FUNC_16(&VAR_7->clist))
   FUNC_19("sysctl_ctx_free failed");

     FUNC_3(VAR_7, VAR_3);
}
