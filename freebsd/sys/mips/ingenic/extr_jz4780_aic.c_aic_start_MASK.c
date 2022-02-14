
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {struct aic_softc* sc; } ;
struct aic_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aic_softc*,int ) ;
 int FUNC_1 (struct aic_softc*,int ,int) ;
 int FUNC_2 (struct sc_pcminfo*) ;

__attribute__((used)) static int
FUNC_3(struct sc_pcminfo *VAR_8)
{
 struct aic_softc *VAR_9;
 int VAR_10;

 VAR_9 = VAR_8->sc;


 VAR_10 = FUNC_0(VAR_9, VAR_6);
 VAR_10 |= (VAR_7);
 FUNC_1(VAR_9, VAR_6, VAR_10);

 FUNC_2(VAR_8);

 VAR_10 = (VAR_4 | VAR_3);
 VAR_10 |= (VAR_1);
 VAR_10 |= (VAR_5);
 VAR_10 |= (VAR_2);
 FUNC_1(VAR_9, VAR_0, VAR_10);

 return (0);
}
