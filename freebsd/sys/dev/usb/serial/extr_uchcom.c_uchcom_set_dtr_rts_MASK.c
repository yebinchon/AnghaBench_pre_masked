
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uchcom_softc {scalar_t__ sc_version; scalar_t__ sc_rts; scalar_t__ sc_dtr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct uchcom_softc*,int ) ;
 int FUNC_1 (struct uchcom_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct uchcom_softc *VAR_3)
{
 uint8_t VAR_4 = 0;

 if (VAR_3->sc_dtr)
  VAR_4 |= VAR_0;
 if (VAR_3->sc_rts)
  VAR_4 |= VAR_1;

 if (VAR_3->sc_version < VAR_2)
  FUNC_0(VAR_3, ~VAR_4);
 else
  FUNC_1(VAR_3, ~VAR_4);
}
