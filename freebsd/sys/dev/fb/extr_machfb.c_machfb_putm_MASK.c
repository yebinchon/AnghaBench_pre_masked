
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct machfb_softc {int sc_flags; int sc_ymargin; int sc_xmargin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct machfb_softc*,int) ;
 int FUNC_1 (struct machfb_softc*) ;
 int FUNC_2 (struct machfb_softc*,int ) ;
 int FUNC_3 (struct machfb_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(video_adapter_t *VAR_5, int VAR_6, int VAR_7, uint8_t *VAR_8,
    uint32_t VAR_9, int VAR_10, int VAR_11)
{
 struct machfb_softc *VAR_12;
 int VAR_13;

 VAR_12 = (struct machfb_softc *)VAR_5;

 if ((!(VAR_12->sc_flags & VAR_4)) &&
     (VAR_13 = FUNC_1(VAR_12)) < 0)
  return (VAR_13);
 else {





  FUNC_0(VAR_12, 0);
 }

 FUNC_3(VAR_12, VAR_1, 0);
 if ((FUNC_2(VAR_12, VAR_3) & VAR_0) != 0)
  VAR_7 <<= 1;
 FUNC_3(VAR_12, VAR_2, ((VAR_7 + VAR_12->sc_ymargin) << 16) |
     (VAR_6 + VAR_12->sc_xmargin));
 FUNC_0(VAR_12, 1);
 VAR_12->sc_flags |= VAR_4;

 return (0);
}
