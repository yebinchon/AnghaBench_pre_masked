
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_softc {struct uchcom_softc* sc_parent; } ;
struct uchcom_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct uchcom_softc*) ;
 int FUNC_2 (struct uchcom_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_0)
{
 struct uchcom_softc *VAR_1 = VAR_0->sc_parent;

 FUNC_0("\n");

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
