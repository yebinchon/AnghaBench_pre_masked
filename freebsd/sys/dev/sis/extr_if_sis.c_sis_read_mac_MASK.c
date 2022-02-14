
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sis_softc {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct sis_softc*,int ) ;
 int FUNC_1 (struct sis_softc*,int ) ;
 int FUNC_2 (struct sis_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(struct sis_softc *VAR_8, device_t VAR_9, caddr_t VAR_10)
{
 uint32_t VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_8, VAR_6);
 VAR_12 = FUNC_1(VAR_8, VAR_0);

 FUNC_2(VAR_8, VAR_0, VAR_1 | VAR_11);
 FUNC_2(VAR_8, VAR_0, 0);

 FUNC_2(VAR_8, VAR_6, VAR_11 & ~VAR_5);

 FUNC_2(VAR_8, VAR_6, VAR_2);
 ((uint16_t *)VAR_10)[0] = FUNC_0(VAR_8, VAR_7);
 FUNC_2(VAR_8, VAR_6,VAR_3);
 ((uint16_t *)VAR_10)[1] = FUNC_0(VAR_8, VAR_7);
 FUNC_2(VAR_8, VAR_6, VAR_4);
 ((uint16_t *)VAR_10)[2] = FUNC_0(VAR_8, VAR_7);

 FUNC_2(VAR_8, VAR_6, VAR_11);
 FUNC_2(VAR_8, VAR_0, VAR_12);
}
