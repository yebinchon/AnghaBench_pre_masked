
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef struct dtsec_softc* t_Handle ;
typedef int t_DpaaSGTE ;
typedef int t_DpaaFD ;
struct dtsec_softc {scalar_t__ sc_tx_fqr_full; int sc_tx_conf_fqr; int sc_dev; } ;
struct dtsec_rm_frame_info {int fi_mbuf; } ;
typedef int e_RxStoreResponse ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct dtsec_rm_frame_info* FUNC_2 (int *) ;
 int FUNC_3 (struct dtsec_softc*) ;
 int FUNC_4 (struct dtsec_softc*) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (struct dtsec_softc*,struct dtsec_rm_frame_info*) ;
 int FUNC_7 (struct dtsec_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static e_RxStoreResponse
FUNC_10(t_Handle VAR_2, t_Handle VAR_3, t_Handle VAR_4,
    uint32_t VAR_5, t_DpaaFD *VAR_6)
{
 struct dtsec_rm_frame_info *VAR_7;
 struct dtsec_softc *VAR_8;
 unsigned int VAR_9;
 t_DpaaSGTE *VAR_10;

 VAR_8 = VAR_2;

 if (FUNC_1(VAR_6) != 0)
  FUNC_5(VAR_8->sc_dev, "TX error: 0x%08X\n",
      FUNC_1(VAR_6));





 VAR_10 = FUNC_0(VAR_6);
 VAR_7 = FUNC_2(VAR_10);


 FUNC_8(VAR_7->fi_mbuf);
 FUNC_6(VAR_8, VAR_7);

 VAR_9 = FUNC_9(VAR_8->sc_tx_conf_fqr, 0,
     VAR_0);

 if (VAR_9 == 0) {
  FUNC_3(VAR_8);

  if (VAR_8->sc_tx_fqr_full) {
   VAR_8->sc_tx_fqr_full = 0;
   FUNC_7(VAR_8);
  }

  FUNC_4(VAR_8);
 }

 return (VAR_1);
}
