
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cesa_softc {int sc_data_dtag; int sc_free_sdesc; int sc_free_tdesc; } ;
struct cesa_request {scalar_t__ cr_dmap_loaded; int cr_dmap; int cr_sdesc; int cr_tdesc; } ;


 int FUNC_0 (struct cesa_softc*,struct cesa_request*,int ) ;
 int FUNC_1 (struct cesa_softc*,int ) ;
 int FUNC_2 (struct cesa_softc*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct cesa_softc *VAR_3, struct cesa_request *VAR_4)
{


 FUNC_1(VAR_3, VAR_2);
 FUNC_3(&VAR_3->sc_free_tdesc, &VAR_4->cr_tdesc);
 FUNC_2(VAR_3, VAR_2);


 FUNC_1(VAR_3, VAR_1);
 FUNC_3(&VAR_3->sc_free_sdesc, &VAR_4->cr_sdesc);
 FUNC_2(VAR_3, VAR_1);


 if (VAR_4->cr_dmap_loaded) {
  FUNC_4(VAR_3->sc_data_dtag, VAR_4->cr_dmap);
  VAR_4->cr_dmap_loaded = 0;
 }

 FUNC_0(VAR_3, VAR_4, VAR_0);
}
