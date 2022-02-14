
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hifn_softc {int sc_flags; int sc_maxses; int sc_ramsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hifn_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct hifn_softc *VAR_4)
{
 u_int32_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_0);

 if (VAR_5 & VAR_2) {
  if (VAR_5 & VAR_3)
   VAR_6 = 128;
  else
   VAR_6 = 512;



  if (VAR_4->sc_flags & VAR_1)
   VAR_4->sc_maxses = 32768 / VAR_6;
  else
   VAR_4->sc_maxses = 1 +
       ((VAR_4->sc_ramsize - 32768) / VAR_6);
 } else
  VAR_4->sc_maxses = VAR_4->sc_ramsize / 16384;

 if (VAR_4->sc_maxses > 2048)
  VAR_4->sc_maxses = 2048;
}
