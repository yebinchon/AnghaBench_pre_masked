
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_softc {int sc_gone; int sc_fb_copy; int sc_fb_size; int sc_fb_addr; int sc_cv; int sc_mtx; int sc_callout; int sc_xfer; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct udl_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct udl_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct udl_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_2)
{
 struct udl_softc *VAR_3 = FUNC_6(VAR_2);


 FUNC_5(VAR_2);

 FUNC_0(VAR_3);
 VAR_3->sc_gone = 1;
 FUNC_3(&VAR_3->sc_callout);
 FUNC_1(VAR_3);

 FUNC_10(VAR_3->sc_xfer, VAR_1);

 FUNC_2(&VAR_3->sc_callout);

 FUNC_8(&VAR_3->sc_mtx);
 FUNC_4(&VAR_3->sc_cv);


 FUNC_9(VAR_3->sc_fb_addr, VAR_3->sc_fb_size);


 FUNC_7(VAR_3->sc_fb_copy, VAR_0);

 return (0);
}
