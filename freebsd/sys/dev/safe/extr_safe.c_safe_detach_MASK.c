
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safe_softc {int sc_sr; int sc_dstdmat; int sc_srcdmat; int sc_irq; int sc_ih; int sc_ringalloc; int sc_ringmtx; int sc_spalloc; int sc_dpalloc; scalar_t__ sc_rndtest; int sc_cid; int sc_rngto; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct safe_softc*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 struct safe_softc* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct safe_softc*) ;
 int FUNC_11 (struct safe_softc*,int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_4)
{
 struct safe_softc *VAR_5 = FUNC_7(VAR_4);



 FUNC_0(VAR_5, VAR_1, 0);

 FUNC_5(&VAR_5->sc_rngto);

 FUNC_6(VAR_5->sc_cid);






 FUNC_10(VAR_5);
 FUNC_11(VAR_5, &VAR_5->sc_dpalloc);
 FUNC_11(VAR_5, &VAR_5->sc_spalloc);
 FUNC_8(&VAR_5->sc_ringmtx);
 FUNC_11(VAR_5, &VAR_5->sc_ringalloc);

 FUNC_2(VAR_4);
 FUNC_4(VAR_4, VAR_5->sc_irq, VAR_5->sc_ih);
 FUNC_3(VAR_4, VAR_2, 0, VAR_5->sc_irq);

 FUNC_1(VAR_5->sc_srcdmat);
 FUNC_1(VAR_5->sc_dstdmat);
 FUNC_3(VAR_4, VAR_3, VAR_0, VAR_5->sc_sr);

 return (0);
}
