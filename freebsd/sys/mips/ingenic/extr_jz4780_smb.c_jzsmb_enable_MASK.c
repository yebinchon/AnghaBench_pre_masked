
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jzsmb_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct jzsmb_softc*) ;
 int FUNC_1 (struct jzsmb_softc*,int ) ;
 int FUNC_2 (struct jzsmb_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct jzsmb_softc *VAR_4, int VAR_5)
{
 FUNC_0(VAR_4);

 if (VAR_5) {
  FUNC_2(VAR_4, VAR_0, VAR_3);
  while ((FUNC_1(VAR_4, VAR_1) & VAR_2) == 0)
   ;
 } else {
  FUNC_2(VAR_4, VAR_0, 0);
  while ((FUNC_1(VAR_4, VAR_1) & VAR_2) != 0)
   ;
 }

 return (0);
}
