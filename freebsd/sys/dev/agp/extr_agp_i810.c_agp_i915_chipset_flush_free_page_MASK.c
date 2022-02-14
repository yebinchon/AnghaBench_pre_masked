
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_i810_softc {int * sc_flush_page_res; int sc_flush_page_rid; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct agp_i810_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1)
{
 struct agp_i810_softc *VAR_2;
 device_t VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_2->sc_flush_page_res == ((void*)0))
  return;
 FUNC_0(FUNC_2(VAR_3), VAR_1, VAR_0,
     VAR_2->sc_flush_page_rid, VAR_2->sc_flush_page_res);
 FUNC_1(FUNC_2(VAR_3), VAR_1, VAR_0,
     VAR_2->sc_flush_page_rid, VAR_2->sc_flush_page_res);
}
