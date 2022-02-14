
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hifn_softc {int sc_flags; int sc_ramsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hifn_softc*,int ) ;

__attribute__((used)) static int
FUNC_1(struct hifn_softc *VAR_3)
{
 u_int32_t VAR_4;

 if (VAR_3->sc_flags & VAR_1) {



  VAR_3->sc_ramsize = 32768;
 } else {
  VAR_4 = FUNC_0(VAR_3, VAR_0) &
      VAR_2;
  VAR_3->sc_ramsize = 1 << ((VAR_4 >> 13) + 18);
 }
 return (0);
}
