
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sbni_softc {int irq_handle; int * irq_res; TYPE_1__* ifp; int irq_rid; int dev; } ;
struct sbni_flags {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int if_xname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct sbni_softc*,int *) ;
 struct sbni_softc* FUNC_2 (struct sbni_softc*) ;
 int FUNC_3 (int ) ;
 struct sbni_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct sbni_softc*) ;
 int FUNC_8 (struct sbni_softc*,int,struct sbni_flags) ;
 int FUNC_9 (struct sbni_softc*) ;
 int VAR_6 ;
 int FUNC_10 (struct sbni_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_7)
{
 struct sbni_softc *VAR_8;
 struct sbni_flags VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_7);
 VAR_8->dev = VAR_7;

 VAR_8->irq_res = FUNC_0(
     VAR_7, VAR_5, &VAR_8->irq_rid, VAR_4);



 if (VAR_8->irq_res == ((void*)0)) {
  FUNC_6(VAR_7, "irq conflict!\n");
  FUNC_10(VAR_8);
  return (VAR_0);
 }
 *(u_int32_t*)&VAR_9 = FUNC_3(VAR_7);

 VAR_10 = FUNC_8(VAR_8, FUNC_5(VAR_7) * 2, VAR_9);
 if (VAR_10) {
  FUNC_6(VAR_7, "cannot initialize driver\n");
  FUNC_10(VAR_8);
  return (VAR_10);
 }

 if (VAR_8->irq_res) {
  VAR_10 = FUNC_1(
      VAR_7, VAR_8->irq_res, VAR_3 | VAR_2,
      ((void*)0), VAR_6, VAR_8, &VAR_8->irq_handle);
  if (VAR_10) {
   FUNC_6(VAR_7, "bus_setup_intr\n");
   FUNC_9(VAR_8);
   FUNC_10(VAR_8);
   return (VAR_10);
  }
 }

 return (0);
}
