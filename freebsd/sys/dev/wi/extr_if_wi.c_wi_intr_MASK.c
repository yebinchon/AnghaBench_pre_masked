
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct wi_softc {int sc_flags; int sc_snd; int sc_enabled; scalar_t__ wi_gone; } ;


 int FUNC_0 (struct wi_softc*,int ) ;
 int FUNC_1 (struct wi_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct wi_softc*) ;
 int FUNC_3 (struct wi_softc*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (struct wi_softc*) ;
 int FUNC_6 (struct wi_softc*) ;
 int FUNC_7 (struct wi_softc*) ;
 int FUNC_8 (struct wi_softc*) ;
 int FUNC_9 (struct wi_softc*) ;

void
FUNC_10(void *VAR_9)
{
 struct wi_softc *VAR_10 = VAR_9;
 u_int16_t VAR_11;

 FUNC_2(VAR_10);

 if (VAR_10->wi_gone || !VAR_10->sc_enabled ||
     (VAR_10->sc_flags & VAR_6) == 0) {
  FUNC_1(VAR_10, VAR_8, 0);
  FUNC_1(VAR_10, VAR_0, 0xFFFF);
  FUNC_3(VAR_10);
  return;
 }


 FUNC_1(VAR_10, VAR_8, 0);

 VAR_11 = FUNC_0(VAR_10, VAR_1);
 if (VAR_11 & VAR_4)
  FUNC_6(VAR_10);
 if (VAR_11 & VAR_2)
  FUNC_9(VAR_10);
 if (VAR_11 & VAR_5)
  FUNC_8(VAR_10);
 if (VAR_11 & VAR_3)
  FUNC_5(VAR_10);
 if (FUNC_4(&VAR_10->sc_snd) != ((void*)0))
  FUNC_7(VAR_10);


 FUNC_1(VAR_10, VAR_8, VAR_7);

 FUNC_3(VAR_10);

 return;
}
