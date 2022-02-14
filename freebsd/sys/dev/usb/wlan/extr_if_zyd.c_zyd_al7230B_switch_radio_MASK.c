
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zyd_softc {int dummy; } ;
struct zyd_rf {struct zyd_softc* rf_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zyd_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct zyd_rf *VAR_2, int VAR_3)
{
 int VAR_4;
 struct zyd_softc *VAR_5 = VAR_2->rf_sc;

 FUNC_0(VAR_5, VAR_0, VAR_3 ? 0x00 : 0x04);
 FUNC_0(VAR_5, VAR_1, VAR_3 ? 0x3f : 0x2f);
fail:
 return (VAR_4);
}
