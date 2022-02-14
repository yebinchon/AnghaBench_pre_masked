
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int sc_shutdown; int sc_descriptors_lock; int sc_controller_lock; int * sc_rres; int sc_rrid; int sc_sec_irid; int sc_sec_ihand; int sc_sec_ires; int sc_pri_irid; int sc_pri_ihand; int sc_pri_ires; int sc_desc_dmem; int sc_lt_dmem; int * sc_desc; int sc_cid; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct sec_softc*,int ) ;
 int FUNC_3 (struct sec_softc*) ;
 int FUNC_4 (struct sec_softc*) ;
 int VAR_3 ;
 int FUNC_5 (struct sec_softc*,int ) ;
 int FUNC_6 (struct sec_softc*,int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 struct sec_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sec_softc*,int,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sec_softc*,int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_6)
{
 struct sec_softc *VAR_7 = FUNC_9(VAR_6);
 int VAR_8, VAR_9, VAR_10 = VAR_3;


 FUNC_2(VAR_7, VAR_5);
 VAR_7->sc_shutdown = 1;
 FUNC_5(VAR_7, VAR_5);


 while (1) {
  FUNC_2(VAR_7, VAR_5);
  VAR_8 = FUNC_4(VAR_7) + FUNC_3(VAR_7);
  FUNC_5(VAR_7, VAR_5);

  if (VAR_8 == 0)
   break;

  if (VAR_10 < 0) {
   FUNC_10(VAR_6, "queue flush timeout!\n");


   for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
    FUNC_12(VAR_7, VAR_8, 1);

   break;
  }

  VAR_10 -= 1000;
  FUNC_0(1000);
 }


 FUNC_6(VAR_7, VAR_2, 0);


 FUNC_8(VAR_7->sc_cid);


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_1(&(VAR_7->sc_desc[VAR_8]));

 FUNC_13(&(VAR_7->sc_lt_dmem));
 FUNC_13(&(VAR_7->sc_desc_dmem));


 FUNC_14(VAR_7, VAR_7->sc_pri_ires, VAR_7->sc_pri_ihand,
     VAR_7->sc_pri_irid, "primary");
 FUNC_14(VAR_7, VAR_7->sc_sec_ires, VAR_7->sc_sec_ihand,
     VAR_7->sc_sec_irid, "secondary");


 if (VAR_7->sc_rres) {
  VAR_9 = FUNC_7(VAR_6, VAR_4, VAR_7->sc_rrid,
      VAR_7->sc_rres);
  if (VAR_9)
   FUNC_10(VAR_6, "bus_release_resource() failed for"
       " I/O memory, error %d\n", VAR_9);

  VAR_7->sc_rres = ((void*)0);
 }

 FUNC_11(&VAR_7->sc_controller_lock);
 FUNC_11(&VAR_7->sc_descriptors_lock);

 return (0);
}
