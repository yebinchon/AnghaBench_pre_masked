
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int kw_dma; int sc_dmat; } ;


 int FUNC_0 (int ,int *,int,int) ;

__attribute__((used)) static int
FUNC_1(struct iwm_softc *VAR_0)
{
 return FUNC_0(VAR_0->sc_dmat, &VAR_0->kw_dma, 4096, 4096);
}
