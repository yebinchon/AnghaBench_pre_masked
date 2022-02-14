
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct creator_softc {int sc_flags; int sc_ymargin; int sc_xmargin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct creator_softc*,int ,int ,int) ;
 int FUNC_1 (struct creator_softc*,int) ;
 int FUNC_2 (struct creator_softc*) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_5, int VAR_6, int VAR_7, u_int8_t *VAR_8,
    u_int32_t VAR_9, int VAR_10, int VAR_11)
{
 struct creator_softc *VAR_12;

 VAR_12 = (struct creator_softc *)VAR_5;
 if (!(VAR_12->sc_flags & VAR_0)) {
  FUNC_2(VAR_12);
  FUNC_1(VAR_12, 1);
  VAR_12->sc_flags |= VAR_0;
 }
 FUNC_0(VAR_12, VAR_1, VAR_3, VAR_2);
 FUNC_0(VAR_12, VAR_1, VAR_4,
     ((VAR_7 + VAR_12->sc_ymargin) << 16) | (VAR_6 + VAR_12->sc_xmargin));
 return (0);
}
