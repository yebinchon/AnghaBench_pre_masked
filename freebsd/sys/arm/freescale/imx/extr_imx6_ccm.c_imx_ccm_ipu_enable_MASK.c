
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ccm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ccm_softc*,int ) ;
 int FUNC_1 (struct ccm_softc*,int ,int) ;
 struct ccm_softc* VAR_5 ;

void
FUNC_2(int VAR_6)
{
 struct ccm_softc *VAR_7;
 uint32_t VAR_8;

 VAR_7 = VAR_5;
 VAR_8 = FUNC_0(VAR_7, VAR_4);
 if (VAR_6 == 1)
  VAR_8 |= VAR_1 | VAR_0;
 else
  VAR_8 |= VAR_3 | VAR_2;
 FUNC_1(VAR_7, VAR_4, VAR_8);
}
