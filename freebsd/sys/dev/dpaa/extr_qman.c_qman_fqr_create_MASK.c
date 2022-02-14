
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_10__ {void* fqTailDropThreshold; scalar_t__ overheadAccountingLength; int * h_QmCg; } ;
struct TYPE_8__ {void* align; } ;
struct TYPE_7__ {void* fqid; } ;
struct TYPE_9__ {TYPE_2__ nonFrcQs; TYPE_1__ frcQ; } ;
struct TYPE_11__ {int initParked; int holdActive; int preferInCache; int useForce; int congestionAvoidanceEnable; TYPE_4__ congestionAvoidanceParams; TYPE_3__ qs; void* numOfFqids; void* shadowMode; int wq; int channel; scalar_t__ p_ContextB; scalar_t__ p_ContextA; void* useContextAForStash; int * h_QmPortal; int h_Qm; } ;
typedef TYPE_5__ t_QmFqrParams ;
typedef int * t_Handle ;
struct qman_softc {void** sc_fqr_cpu; int sc_dev; int sc_qh; } ;
typedef scalar_t__ int8_t ;
typedef int e_QmFQChannel ;


 void* VAR_0 ;
 void* FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_5__*) ;
 size_t FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (struct qman_softc*) ;
 struct qman_softc* VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

t_Handle
FUNC_7(uint32_t VAR_3, e_QmFQChannel VAR_4, uint8_t VAR_5,
    bool VAR_6, uint32_t VAR_7, bool VAR_8,
    bool VAR_9, bool VAR_10, bool VAR_11,
    t_Handle VAR_12, int8_t VAR_13,
    uint32_t VAR_14)
{
 struct qman_softc *VAR_15;
 t_QmFqrParams VAR_16;
 unsigned int VAR_17;
 t_Handle VAR_18, VAR_19;

 VAR_15 = VAR_2;

 FUNC_5();
 VAR_17 = FUNC_0(VAR_1);


 VAR_19 = FUNC_4(VAR_15);
 if (VAR_19 == ((void*)0)) {
  FUNC_3(VAR_15->sc_dev, "could not setup QMan portal\n");
  goto err;
 }

 VAR_16.h_Qm = VAR_15->sc_qh;
 VAR_16.h_QmPortal = VAR_19;
 VAR_16.initParked = VAR_8;
 VAR_16.holdActive = VAR_9;
 VAR_16.preferInCache = VAR_10;


 VAR_16.useContextAForStash = VAR_0;
 VAR_16.p_ContextA = 0;
 VAR_16.p_ContextB = 0;

 VAR_16.channel = VAR_4;
 VAR_16.wq = VAR_5;
 VAR_16.shadowMode = VAR_0;
 VAR_16.numOfFqids = VAR_3;


 VAR_16.useForce = VAR_6;
 if (VAR_6) {
  VAR_16.qs.frcQ.fqid = VAR_7;
 } else {
  VAR_16.qs.nonFrcQs.align = VAR_7;
 }


 VAR_16.congestionAvoidanceEnable = VAR_11;
 if (VAR_11) {
  VAR_16.congestionAvoidanceParams.h_QmCg = VAR_12;
  VAR_16.congestionAvoidanceParams.overheadAccountingLength =
      VAR_13;
  VAR_16.congestionAvoidanceParams.fqTailDropThreshold =
      VAR_14;
 } else {
  VAR_16.congestionAvoidanceParams.h_QmCg = 0;
  VAR_16.congestionAvoidanceParams.overheadAccountingLength = 0;
  VAR_16.congestionAvoidanceParams.fqTailDropThreshold = 0;
 }

 VAR_18 = FUNC_1(&VAR_16);
 if (VAR_18 == ((void*)0)) {
  FUNC_3(VAR_15->sc_dev, "could not create Frame Queue Range"
      "\n");
  goto err;
 }

 VAR_15->sc_fqr_cpu[FUNC_2(VAR_18)] = FUNC_0(VAR_1);

 FUNC_6();

 return (VAR_18);

err:
 FUNC_6();

 return (((void*)0));
}
