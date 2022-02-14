
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int dummy; } ;
struct esp_pci_softc {size_t sc_dmasize; void** sc_dmaaddr; size_t* sc_dmalen; int sc_datain; int sc_xferdmam; int sc_xferdmat; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct esp_pci_softc*,int ,size_t) ;
 int FUNC_1 (int ,int ,void*,size_t,int ,struct ncr53c9x_softc*,int ) ;
 int VAR_6 ;
 size_t FUNC_2 (size_t,int ) ;

__attribute__((used)) static int
FUNC_3(struct ncr53c9x_softc *VAR_7, void **VAR_8, size_t *VAR_9,
    int VAR_10, size_t *VAR_11)
{
 struct esp_pci_softc *VAR_12 = (struct esp_pci_softc *)VAR_7;
 int VAR_13;

 FUNC_0(VAR_12, VAR_3, VAR_2 | (VAR_10 != 0 ? VAR_1 :
     0));

 *VAR_11 = VAR_12->sc_dmasize = FUNC_2(*VAR_11, VAR_5);
 VAR_12->sc_dmaaddr = VAR_8;
 VAR_12->sc_dmalen = VAR_9;
 VAR_12->sc_datain = VAR_10;




 if (*VAR_11 == 0)
  return (0);


 FUNC_0(VAR_12, VAR_4, *VAR_11);






 VAR_13 = FUNC_1(VAR_12->sc_xferdmat, VAR_12->sc_xferdmam,
     *VAR_12->sc_dmaaddr, *VAR_11, VAR_6, VAR_7, VAR_0);

 return (VAR_13);
}
