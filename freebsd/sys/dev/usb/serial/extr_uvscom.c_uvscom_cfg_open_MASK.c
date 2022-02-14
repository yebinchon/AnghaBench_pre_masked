
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvscom_softc {int dummy; } ;
struct ucom_softc {struct uvscom_softc* sc_parent; } ;


 int FUNC_0 (char*,struct uvscom_softc*) ;
 int FUNC_1 (struct uvscom_softc*) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_0)
{
 struct uvscom_softc *VAR_1 = VAR_0->sc_parent;

 FUNC_0("sc = %p\n", VAR_1);

 FUNC_1(VAR_1);
}
