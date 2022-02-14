
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {struct r92c_softc* sc_priv; } ;
struct r92c_softc {int * rf_read_delay; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct rtwn_softc*,int ) ;
 int FUNC_7 (struct rtwn_softc*,int ,int) ;
 int FUNC_8 (struct rtwn_softc*,int ) ;

uint32_t
FUNC_9(struct rtwn_softc *VAR_5, int VAR_6, uint8_t VAR_7)
{
 struct r92c_softc *VAR_8 = VAR_5->sc_priv;
 uint32_t VAR_9[VAR_4], VAR_10;

 VAR_9[0] = FUNC_6(VAR_5, FUNC_3(0));
 if (VAR_6 != 0)
  VAR_9[VAR_6] = FUNC_6(VAR_5, FUNC_3(VAR_6));

 FUNC_7(VAR_5, FUNC_3(0),
     VAR_9[0] & ~VAR_2);
 FUNC_8(VAR_5, VAR_8->rf_read_delay[0]);

 FUNC_7(VAR_5, FUNC_3(VAR_6),
     FUNC_5(VAR_9[VAR_6], VAR_1, VAR_7) |
     VAR_2);
 FUNC_8(VAR_5, VAR_8->rf_read_delay[1]);

 FUNC_7(VAR_5, FUNC_3(0),
     VAR_9[0] | VAR_2);
 FUNC_8(VAR_5, VAR_8->rf_read_delay[2]);

 if (FUNC_6(VAR_5, FUNC_2(VAR_6)) & VAR_0)
  VAR_10 = FUNC_6(VAR_5, FUNC_1(VAR_6));
 else
  VAR_10 = FUNC_6(VAR_5, FUNC_4(VAR_6));
 return (FUNC_0(VAR_10, VAR_3));
}
