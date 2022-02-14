
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucycom_softc {int dummy; } ;
struct ucom_softc {struct ucycom_softc* sc_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ucycom_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_2)
{
 struct ucycom_softc *VAR_3 = VAR_2->sc_parent;


 FUNC_0(VAR_3, VAR_1, VAR_0);
}
