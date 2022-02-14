
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cesa_softc {scalar_t__ sc_soc_id; int sc_sc_lock; int sc_tdesc_lock; int sc_sdesc_lock; int sc_requests_lock; int sc_sessions_lock; int sc_sram_size; int sc_sram_base_va; int * sc_res; int sc_icookie; int sc_data_dtag; int sc_tdesc_cdm; int sc_sdesc_cdm; int sc_requests_cdm; TYPE_1__* sc_requests; int sc_cid; } ;
typedef int device_t ;
struct TYPE_2__ {int cr_dmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct cesa_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cesa_softc*,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 struct cesa_softc* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_8)
{
 struct cesa_softc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_8(VAR_8);




 FUNC_0(VAR_9, VAR_0, 0);
 FUNC_1(VAR_9, VAR_2, 0);


 FUNC_7(VAR_9->sc_cid);


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  FUNC_3(VAR_9->sc_data_dtag,
      VAR_9->sc_requests[VAR_10].cr_dmap);


 FUNC_6(&VAR_9->sc_requests_cdm);
 FUNC_6(&VAR_9->sc_sdesc_cdm);
 FUNC_6(&VAR_9->sc_tdesc_cdm);


 FUNC_2(VAR_9->sc_data_dtag);


 FUNC_5(VAR_8, VAR_9->sc_res[VAR_6], VAR_9->sc_icookie);


 FUNC_4(VAR_8, VAR_7, VAR_9->sc_res);


 if (VAR_9->sc_soc_id == VAR_5 ||
     VAR_9->sc_soc_id == VAR_4 ||
     VAR_9->sc_soc_id == VAR_3)
  FUNC_10(VAR_9->sc_sram_base_va, VAR_9->sc_sram_size);


 FUNC_9(&VAR_9->sc_sessions_lock);
 FUNC_9(&VAR_9->sc_requests_lock);
 FUNC_9(&VAR_9->sc_sdesc_lock);
 FUNC_9(&VAR_9->sc_tdesc_lock);
 FUNC_9(&VAR_9->sc_sc_lock);

 return (0);
}
