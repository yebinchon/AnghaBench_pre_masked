
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccr_softc {int detaching; TYPE_1__* adapter; int sg_crp; int sg_ulptx; int sg_dsgl; int iv_aad_buf; int sg_iv_aad; int lock; int cid; } ;
typedef int device_t ;
struct TYPE_2__ {int * ccr_softc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ccr_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct ccr_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_4(&VAR_2->lock);
 VAR_2->detaching = 1;
 FUNC_5(&VAR_2->lock);

 FUNC_0(VAR_2->cid);

 FUNC_3(&VAR_2->lock);
 FUNC_6(VAR_2->sg_iv_aad);
 FUNC_2(VAR_2->iv_aad_buf, VAR_0);
 FUNC_6(VAR_2->sg_dsgl);
 FUNC_6(VAR_2->sg_ulptx);
 FUNC_6(VAR_2->sg_crp);
 VAR_2->adapter->ccr_softc = ((void*)0);
 return (0);
}
