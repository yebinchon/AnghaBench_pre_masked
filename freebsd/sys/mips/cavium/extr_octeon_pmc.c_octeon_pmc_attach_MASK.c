
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_pmc_softc {int * octeon_pmc_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,int*,int,int,int,int ) ;
 int FUNC_1 (int ,int *,int ,int ,int *,struct octeon_pmc_softc*,int *) ;
 struct octeon_pmc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_6)
{
 struct octeon_pmc_softc *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_6);

 VAR_9 = 0;
 VAR_7->octeon_pmc_irq = FUNC_0(VAR_6,
     VAR_4, &VAR_9, VAR_2,
     VAR_2, 1, VAR_3);

 if (VAR_7->octeon_pmc_irq == ((void*)0)) {
  FUNC_3(VAR_6, "could not allocate irq%d\n", VAR_2);
  return (VAR_0);
 }

 VAR_8 = FUNC_1(VAR_6, VAR_7->octeon_pmc_irq,
     VAR_1, VAR_5, ((void*)0), VAR_7, ((void*)0));
 if (VAR_8 != 0) {
  FUNC_3(VAR_6, "bus_setup_intr failed: %d\n", VAR_8);
  return (VAR_8);
 }

 return (0);
}
