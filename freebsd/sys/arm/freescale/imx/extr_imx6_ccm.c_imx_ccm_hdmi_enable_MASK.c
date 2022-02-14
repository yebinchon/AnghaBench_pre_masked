
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ccm_softc*,int ) ;
 int FUNC_1 (struct ccm_softc*,int ,int) ;
 struct ccm_softc* VAR_13 ;

void
FUNC_2(void)
{
 struct ccm_softc *VAR_14;
 uint32_t VAR_15;

 VAR_14 = VAR_13;
 VAR_15 = FUNC_0(VAR_14, VAR_2);
 VAR_15 |= VAR_0 | VAR_1;
 FUNC_1(VAR_14, VAR_2, VAR_15);


 VAR_15 = FUNC_0(VAR_14, VAR_3);
 VAR_15 &= ~(VAR_9 |
     VAR_7 | VAR_5);
 VAR_15 |= (VAR_12 << VAR_8);
 VAR_15 |= (VAR_11 << VAR_10);
 FUNC_1(VAR_14, VAR_3, VAR_15);
 VAR_15 |= (VAR_4 << VAR_6);
 FUNC_1(VAR_14, VAR_3, VAR_15);
}
