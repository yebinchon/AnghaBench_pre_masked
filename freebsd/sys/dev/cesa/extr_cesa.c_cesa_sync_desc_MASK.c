
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cesa_softc {int sc_requests_cdm; int sc_sdesc_cdm; int sc_tdesc_cdm; } ;
typedef int bus_dmasync_op_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct cesa_softc *VAR_0, bus_dmasync_op_t VAR_1)
{

 FUNC_0(&VAR_0->sc_tdesc_cdm, VAR_1);
 FUNC_0(&VAR_0->sc_sdesc_cdm, VAR_1);
 FUNC_0(&VAR_0->sc_requests_cdm, VAR_1);
}
