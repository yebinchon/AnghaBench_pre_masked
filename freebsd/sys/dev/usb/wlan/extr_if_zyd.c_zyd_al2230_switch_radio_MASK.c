
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zyd_softc {scalar_t__ sc_macrev; } ;
struct zyd_rf {struct zyd_softc* rf_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct zyd_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct zyd_rf *VAR_3, int VAR_4)
{
 struct zyd_softc *VAR_5 = VAR_3->rf_sc;
 int VAR_6, VAR_7 = (VAR_5->sc_macrev == VAR_2) ? 0x3f : 0x7f;

 FUNC_0(VAR_5, VAR_0, VAR_4 ? 0x00 : 0x04);
 FUNC_0(VAR_5, VAR_1, VAR_4 ? VAR_7 : 0x2f);
fail:
 return (VAR_6);
}
