
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufoma_softc {int dummy; } ;
struct ucom_softc {struct ufoma_softc* sc_parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct ufoma_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_1)
{
 struct ufoma_softc *VAR_2 = VAR_1->sc_parent;

 FUNC_0(VAR_2, VAR_0);
}
