
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct versatile_pci_softc {struct rman mem_rman; struct rman io_rman; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct resource* FUNC_0 (int ,int ,int,int*,int ,int ,int ,int) ;
 int VAR_0 ;



 scalar_t__ FUNC_1 (int ,int,int,struct resource*) ;
 int FUNC_2 (int ) ;
 struct versatile_pci_softc* FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int ,int ,int ) ;
 int FUNC_5 (struct resource*) ;
 struct resource* FUNC_6 (struct rman*,int ,int ,int ,int,int ) ;
 int FUNC_7 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_8(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{

 struct versatile_pci_softc *VAR_9 = FUNC_3(VAR_1);
 struct resource *VAR_10;
 struct rman *VAR_11;

 FUNC_4("Alloc resources %d, %08lx..%08lx, %ld\n", VAR_3, VAR_5, VAR_6, VAR_7);

 switch (VAR_3) {
 case 130:
  VAR_11 = &VAR_9->io_rman;
  break;
 case 129:
  VAR_11 = ((void*)0);
  break;
 case 128:
  VAR_11 = &VAR_9->mem_rman;
  break;
 default:
  return (((void*)0));
 }

 if (VAR_11 == ((void*)0))
  return (FUNC_0(FUNC_2(VAR_1),
      VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));

 VAR_10 = FUNC_6(VAR_11, VAR_5, VAR_6, VAR_7, VAR_8, VAR_2);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 FUNC_7(VAR_10, *VAR_4);

 if (VAR_8 & VAR_0) {
  if (FUNC_1(VAR_2, VAR_3, *VAR_4, VAR_10)) {
   FUNC_5(VAR_10);
   return (((void*)0));
  }
 }
 return (VAR_10);
}
