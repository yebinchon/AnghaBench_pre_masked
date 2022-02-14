
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_softc {int event_irq; int event_rid; int * event_res; int * event_tag; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ) ;
 struct amdvi_softc* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_1)
{

 struct amdvi_softc *VAR_2;

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2->event_tag != ((void*)0)) {
  FUNC_3(VAR_1, VAR_2->event_res, VAR_2->event_tag);
 }
 if (VAR_2->event_res != ((void*)0)) {
  FUNC_2(VAR_1, VAR_0, VAR_2->event_rid,
      VAR_2->event_res);
 }
 FUNC_1(VAR_1, VAR_0, VAR_2->event_rid);
 FUNC_0(FUNC_4(FUNC_4(VAR_1)),
     VAR_1, 1, &VAR_2->event_irq);
}
