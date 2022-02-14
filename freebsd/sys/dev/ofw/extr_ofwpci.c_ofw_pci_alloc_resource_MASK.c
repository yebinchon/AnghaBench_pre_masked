
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct ofw_pci_softc {int sc_pci_domain; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int,struct resource*) ;
 struct resource* FUNC_1 (int ,int ,int,int*,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 struct ofw_pci_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 struct rman* FUNC_5 (struct ofw_pci_softc*,int,int) ;
 struct resource* FUNC_6 (int ,int ,int*,int ,int ,int ,int) ;
 int FUNC_7 (struct resource*) ;
 struct resource* FUNC_8 (struct rman*,int ,int ,int ,int,int ) ;
 int FUNC_9 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_10(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct ofw_pci_softc *VAR_10;
 struct resource *VAR_11;
 struct rman *VAR_12;
 int VAR_13;


 VAR_13 = VAR_9 & VAR_1;
 VAR_9 &= ~VAR_1;

 VAR_10 = FUNC_3(VAR_2);
 VAR_12 = FUNC_5(VAR_10, VAR_4, VAR_9);
 if (VAR_12 == ((void*)0)) {
  return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_9 | VAR_13));
 }

 VAR_11 = FUNC_8(VAR_12, VAR_6, VAR_7, VAR_8, VAR_9, VAR_3);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_2, "failed to reserve resource for %s\n",
      FUNC_2(VAR_3));
  return (((void*)0));
 }

 FUNC_9(VAR_11, *VAR_5);

 if (VAR_13) {
  if (FUNC_0(VAR_3, VAR_4, *VAR_5, VAR_11) != 0) {
   FUNC_4(VAR_2,
       "failed to activate resource for %s\n",
       FUNC_2(VAR_3));
   FUNC_7(VAR_11);
   return (((void*)0));
  }
 }

 return (VAR_11);
}
