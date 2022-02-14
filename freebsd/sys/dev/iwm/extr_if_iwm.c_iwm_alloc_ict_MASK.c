
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int ict_dma; int sc_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct iwm_softc *VAR_2)
{
 return FUNC_0(VAR_2->sc_dmat, &VAR_2->ict_dma,
     VAR_1, 1<<VAR_0);
}
