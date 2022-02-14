
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {struct aic_softc* sc; } ;
struct aic_softc {int xchan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aic_softc*,int ) ;
 int FUNC_1 (struct aic_softc*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct sc_pcminfo *VAR_4)
{
 struct aic_softc *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->sc;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 VAR_6 &= ~(VAR_2 | VAR_1);
 FUNC_1(VAR_5, VAR_0, VAR_6);

 FUNC_2(VAR_5->xchan, VAR_3);

 return (0);
}
