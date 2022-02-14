
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct sbni_softc {struct sbni_softc* slave_sc; int irq_handle; int * irq_res; int irq_rid; int dev; } ;
struct sbni_flags {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct sbni_softc*,int *) ;
 struct sbni_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct sbni_softc*,int ) ;
 int FUNC_6 (struct sbni_softc*,int,struct sbni_flags) ;
 int FUNC_7 (struct sbni_softc*) ;
 int VAR_6 ;
 int FUNC_8 (struct sbni_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_7)
{
 struct sbni_softc *VAR_8;
 struct sbni_flags VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_7);
 VAR_8->dev = VAR_7;

 VAR_8->irq_res = FUNC_0(VAR_7, VAR_5, &VAR_8->irq_rid,
          VAR_4);

 if (VAR_8->irq_res == ((void*)0)) {
  FUNC_4(VAR_7, "cannot claim irq!\n");
  VAR_10 = VAR_0;
  goto attach_failed;
 }

 *(u_int32_t*)&VAR_9 = 0;

 VAR_10 = FUNC_6(VAR_8, FUNC_3(VAR_7) * 2, VAR_9);
 if (VAR_10) {
  FUNC_4(VAR_7, "cannot initialize driver\n");
  goto attach_failed;
 }
 if (VAR_8->slave_sc) {
  VAR_10 = FUNC_6(VAR_8->slave_sc, FUNC_3(VAR_7) * 2 + 1,
      VAR_9);
  if (VAR_10) {
   FUNC_4(VAR_7, "cannot initialize slave\n");
   FUNC_7(VAR_8);
   goto attach_failed;
  }
 }

 if (VAR_8->irq_res) {
  VAR_10 = FUNC_1(VAR_7, VAR_8->irq_res, VAR_2 |
      VAR_1, ((void*)0), VAR_6, VAR_8, &VAR_8->irq_handle);
  if (VAR_10) {
   FUNC_4(VAR_7, "bus_setup_intr\n");
   FUNC_7(VAR_8);
   if (VAR_8->slave_sc)
    FUNC_7(VAR_8);
   goto attach_failed;
  }
 }
 return (0);

attach_failed:
 FUNC_8(VAR_8);
 if (VAR_8->slave_sc)
  FUNC_5(VAR_8->slave_sc, VAR_3);
 return (VAR_10);
}
