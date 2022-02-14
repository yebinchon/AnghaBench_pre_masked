
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ccm_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ccm_softc*,int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct ccm_softc*,int ,int) ;
 struct ccm_softc* VAR_16 ;

void
FUNC_2(device_t VAR_17)
{
 struct ccm_softc *VAR_18;
 uint32_t VAR_19;

 VAR_18 = VAR_16;






 VAR_19 = FUNC_0(VAR_18, VAR_2);
 VAR_19 &= ~(VAR_14 << VAR_5);
 VAR_19 |= (VAR_15 << VAR_5);
 VAR_19 &= ~(VAR_14 << VAR_8);
 VAR_19 |= (VAR_15 << VAR_8);
 VAR_19 &= ~(VAR_14 << VAR_11);
 VAR_19 |= (VAR_15 << VAR_11);
 FUNC_1(VAR_18, VAR_2, VAR_19);







 VAR_19 = FUNC_0(VAR_18, VAR_0);

 VAR_19 &= ~(VAR_12 << VAR_3);
 VAR_19 &= ~(VAR_12 << VAR_9);
 VAR_19 |= (0x1 << VAR_3);
 VAR_19 |= (0x1 << VAR_9);

 VAR_19 &= ~(VAR_13 << VAR_4);
 VAR_19 &= ~(VAR_13 << VAR_10);
 VAR_19 |= (0x3 << VAR_4);
 VAR_19 |= (0x3 << VAR_10);
 FUNC_1(VAR_18, VAR_0, VAR_19);


 VAR_19 = FUNC_0(VAR_18, VAR_1);

 VAR_19 &= ~(VAR_12 << VAR_6);
 VAR_19 |= (0x1 << VAR_6);

 VAR_19 &= ~(VAR_13 << VAR_7);
 VAR_19 |= (0x3 << VAR_7);
 FUNC_1(VAR_18, VAR_1, VAR_19);
}
