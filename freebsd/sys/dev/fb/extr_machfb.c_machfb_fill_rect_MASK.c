
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
struct machfb_softc {scalar_t__ sc_draw_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct machfb_softc*,int) ;
 int FUNC_1 (struct machfb_softc*,int ,int) ;
 int FUNC_2 (struct machfb_softc*,int) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_20, int VAR_21, int VAR_22, int VAR_23, int VAR_24, int VAR_25)
{
 struct machfb_softc *VAR_26;

 VAR_26 = (struct machfb_softc *)VAR_20;

 if (VAR_26->sc_draw_cache != VAR_13) {
  FUNC_2(VAR_26, 7);
  FUNC_1(VAR_26, VAR_4, 0xff);
  FUNC_1(VAR_26, VAR_2, VAR_5 | VAR_15 | VAR_12);
  FUNC_1(VAR_26, VAR_3, VAR_11);
  FUNC_1(VAR_26, VAR_1, VAR_14 << 16);
  FUNC_1(VAR_26, VAR_0, 0);
  FUNC_1(VAR_26, VAR_16, VAR_17);
  FUNC_1(VAR_26, VAR_6, VAR_8 | VAR_9);
  VAR_26->sc_draw_cache = VAR_13;
 }
 FUNC_0(VAR_26, VAR_21);
 FUNC_2(VAR_26, 4);
 FUNC_1(VAR_26, VAR_19, (VAR_22 << 16) | VAR_23);
 FUNC_1(VAR_26, VAR_18, VAR_24);
 FUNC_1(VAR_26, VAR_10, (VAR_22 << 16) | VAR_23);
 FUNC_1(VAR_26, VAR_7, (VAR_24 << 16) | VAR_25);

 return (0);
}
