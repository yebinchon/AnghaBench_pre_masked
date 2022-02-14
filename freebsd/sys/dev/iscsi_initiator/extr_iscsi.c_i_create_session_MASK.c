
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct isc_softc {int isc_mtx; int isc_sess; int unit_sx; int unit; } ;
struct cdev {struct isc_softc* si_drv1; } ;
struct TYPE_9__ {int maxRecvDataSegmentLength; int maxXmitDataSegmentLength; int maxBurstLength; int maxluns; } ;
struct TYPE_10__ {int sid; TYPE_1__ opt; TYPE_4__* dev; struct isc_softc* isc; } ;
typedef TYPE_2__ isc_session_t ;
struct TYPE_12__ {int nsess; } ;
struct TYPE_11__ {TYPE_2__* si_drv2; struct isc_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_6__* VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_4__* FUNC_5 (int *,int,int ,int ,int,char*,int) ;
 TYPE_2__* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_10 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(struct cdev *VAR_11, int *VAR_12)
{
     struct isc_softc *VAR_13 = VAR_11->si_drv1;
     isc_session_t *VAR_14;
     int VAR_15, VAR_16;

     FUNC_2(8);

     VAR_14 = FUNC_6(sizeof(isc_session_t), VAR_4, VAR_5 | VAR_6);
     if(VAR_14 == ((void*)0))
   return VAR_0;

     FUNC_10(&VAR_13->unit_sx);
     if((VAR_16 = FUNC_1(VAR_13->unit)) < 0) {
   FUNC_9(&VAR_13->unit_sx);
   FUNC_3(VAR_14, VAR_4);
   FUNC_11("too many sessions!");
   return VAR_1;
     }
     FUNC_9(&VAR_13->unit_sx);

     FUNC_7(&VAR_13->isc_mtx);
     FUNC_0(&VAR_13->isc_sess, VAR_14, VAR_10);
     VAR_8->nsess++;
     FUNC_8(&VAR_13->isc_mtx);

     VAR_14->dev = FUNC_5(&VAR_9, VAR_16, VAR_7, VAR_2, 0600, "iscsi%d", VAR_16);
     *VAR_12 = VAR_14->sid = VAR_16;
     VAR_14->isc = VAR_13;
     VAR_14->dev->si_drv1 = VAR_13;
     VAR_14->dev->si_drv2 = VAR_14;

     VAR_14->opt.maxRecvDataSegmentLength = 8192;
     VAR_14->opt.maxXmitDataSegmentLength = 8192;
     VAR_14->opt.maxBurstLength = 65536;
     VAR_14->opt.maxluns = VAR_3;

     VAR_15 = FUNC_4(VAR_14);

     return VAR_15;
}
