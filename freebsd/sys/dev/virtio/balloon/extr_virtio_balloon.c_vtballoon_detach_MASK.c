
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtballoon_softc {int * vtballoon_page_frames; int * vtballoon_td; int vtballoon_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtballoon_softc*) ;
 int FUNC_1 (struct vtballoon_softc*) ;
 int FUNC_2 (struct vtballoon_softc*) ;
 int FUNC_3 (struct vtballoon_softc*) ;
 struct vtballoon_softc* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ,char*,int ) ;
 int FUNC_8 (struct vtballoon_softc*) ;
 int FUNC_9 (struct vtballoon_softc*) ;
 int FUNC_10 (struct vtballoon_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_2)
{
 struct vtballoon_softc *VAR_3;

 VAR_3 = FUNC_4(VAR_2);

 if (VAR_3->vtballoon_td != ((void*)0)) {
  FUNC_0(VAR_3);
  VAR_3->vtballoon_flags |= VAR_1;
  FUNC_10(VAR_3);
  FUNC_7(VAR_3->vtballoon_td, FUNC_2(VAR_3), 0, "vtbdth", 0);
  FUNC_3(VAR_3);

  VAR_3->vtballoon_td = ((void*)0);
 }

 if (FUNC_5(VAR_2)) {
  FUNC_8(VAR_3);
  FUNC_9(VAR_3);
 }

 if (VAR_3->vtballoon_page_frames != ((void*)0)) {
  FUNC_6(VAR_3->vtballoon_page_frames, VAR_0);
  VAR_3->vtballoon_page_frames = ((void*)0);
 }

 FUNC_1(VAR_3);

 return (0);
}
