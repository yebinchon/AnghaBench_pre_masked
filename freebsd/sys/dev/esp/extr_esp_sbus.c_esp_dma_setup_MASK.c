
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int dummy; } ;
struct esp_softc {int sc_dma; } ;


 int FUNC_0 (int ,void**,size_t*,int,size_t*) ;

__attribute__((used)) static int
FUNC_1(struct ncr53c9x_softc *VAR_0, void **VAR_1, size_t *VAR_2,
    int VAR_3, size_t *VAR_4)
{
 struct esp_softc *VAR_5 = (struct esp_softc *)VAR_0;

 return (FUNC_0(VAR_5->sc_dma, VAR_1, VAR_2, VAR_3, VAR_4));
}
