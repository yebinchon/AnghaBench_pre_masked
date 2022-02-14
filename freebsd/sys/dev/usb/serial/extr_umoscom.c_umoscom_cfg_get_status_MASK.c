
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct umoscom_softc {int dummy; } ;
struct ucom_softc {struct umoscom_softc* sc_parent; } ;


 int FUNC_0 (int,char*) ;
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
 int FUNC_1 (struct umoscom_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_10, uint8_t *VAR_11, uint8_t *VAR_12)
{
 struct umoscom_softc *VAR_13 = VAR_10->sc_parent;
 uint8_t VAR_14;

 FUNC_0(5, "\n");






 *VAR_11 = FUNC_1(VAR_13, VAR_4);
 VAR_14 = FUNC_1(VAR_13, VAR_5);



 if (VAR_14 & VAR_7)
  *VAR_12 |= VAR_0;

 if (VAR_14 & VAR_6)
  *VAR_12 |= VAR_1;

 if (VAR_14 & VAR_8)
  *VAR_12 |= VAR_3;

 if (VAR_14 & VAR_9)
  *VAR_12 |= VAR_2;
}
