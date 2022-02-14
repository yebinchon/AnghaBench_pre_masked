
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct octopci_softc {scalar_t__ sc_io_base; scalar_t__ sc_mem1_base; struct rman sc_io; struct rman sc_mem1; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;



 int FUNC_0 (int ,int,int,struct resource*) ;
 struct resource* FUNC_1 (int ,int ,int,int*,int ,int ,int ,int) ;
 struct octopci_softc* FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct resource*) ;
 scalar_t__ FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 struct resource* FUNC_6 (struct rman*,int ,int ,int ,int,int ) ;
 int FUNC_7 (struct resource*,scalar_t__) ;
 int FUNC_8 (struct resource*,int ) ;
 int FUNC_9 (struct resource*,int) ;
 int FUNC_10 (struct resource*,void*) ;

__attribute__((used)) static struct resource *
FUNC_11(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct octopci_softc *VAR_10;
 struct resource *VAR_11;
 struct rman *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_2(VAR_2);

 switch (VAR_4) {
 case 129:
  VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9);
  if (VAR_11 != ((void*)0))
   return (VAR_11);
  return (((void*)0));
 case 128:
  VAR_12 = &VAR_10->sc_mem1;
  break;
 case 130:
  VAR_12 = &VAR_10->sc_io;
  break;
 default:
  return (((void*)0));
 }

 VAR_11 = FUNC_6(VAR_12, VAR_6, VAR_7, VAR_8, VAR_9, VAR_3);
 if (VAR_11 == ((void*)0))
  return (((void*)0));

 FUNC_9(VAR_11, *VAR_5);
 FUNC_8(VAR_11, VAR_1);

 switch (VAR_4) {
 case 128:
  FUNC_7(VAR_11, VAR_10->sc_mem1_base + FUNC_4(VAR_11));
  break;
 case 130:
  FUNC_7(VAR_11, VAR_10->sc_io_base + FUNC_4(VAR_11));







  FUNC_10(VAR_11, ((void*)0));

  break;
 }

 if ((VAR_9 & VAR_0) != 0) {
  VAR_13 = FUNC_0(VAR_3, VAR_4, *VAR_5, VAR_11);
  if (VAR_13 != 0) {
   FUNC_5(VAR_11);
   return (((void*)0));
  }
 }

 return (VAR_11);
}
