
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ucom_softc {struct uchcom_softc* sc_parent; } ;
struct uchcom_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uchcom_softc*,int ,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_1 (struct uchcom_softc*,int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_4, uint8_t VAR_5)
{
 struct uchcom_softc *VAR_6 = VAR_4->sc_parent;
 uint8_t VAR_7;
 uint8_t VAR_8;

 FUNC_0(VAR_6, VAR_2, &VAR_7, VAR_3, &VAR_8);
 if (VAR_5) {

  VAR_7 &= ~VAR_0;
  VAR_8 &= ~VAR_1;
 } else {

  VAR_7 |= VAR_0;
  VAR_8 |= VAR_1;
 }
 FUNC_1(VAR_6, VAR_2, VAR_7, VAR_3, VAR_8);
}
