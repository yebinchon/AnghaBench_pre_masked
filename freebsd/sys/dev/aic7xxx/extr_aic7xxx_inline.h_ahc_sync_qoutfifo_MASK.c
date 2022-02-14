
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int shared_data_dmamap; int shared_data_dmat; } ;


 int FUNC_0 (struct ahc_softc*,int ,int ,int ,int,int) ;

__attribute__((used)) static __inline void
FUNC_1(struct ahc_softc *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, VAR_0->shared_data_dmat, VAR_0->shared_data_dmamap,
             0, 256, VAR_1);
}
