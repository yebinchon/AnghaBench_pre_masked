
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umoscom_softc {int dummy; } ;
struct ucom_softc {struct umoscom_softc* sc_parent; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct umoscom_softc*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_8)
{
 struct umoscom_softc *VAR_9 = VAR_8->sc_parent;

 FUNC_0("\n");


 FUNC_1(VAR_9, VAR_0, 0x00 | VAR_7);


 FUNC_1(VAR_9, VAR_0, VAR_2 |
     VAR_3 | VAR_5 |
     VAR_1 | VAR_4 |
     VAR_7);


 FUNC_1(VAR_9, VAR_6, 0x0C | VAR_7);


 FUNC_1(VAR_9, 0x01, 0x08);


 FUNC_1(VAR_9, 0x00, 0x02);
}
