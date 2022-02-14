
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cpsw_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpsw_softc*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct cpsw_softc*) ;
 int FUNC_3 (struct cpsw_softc*,int ) ;
 int FUNC_4 (struct cpsw_softc*) ;
 int FUNC_5 (struct cpsw_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_7)
{
 struct cpsw_softc *VAR_8 = VAR_7;
 uint32_t VAR_9 = FUNC_3(VAR_8, FUNC_1(0));

 if (VAR_9 & VAR_1)
  FUNC_0(VAR_8, ("Time sync event interrupt unimplemented"));
 if (VAR_9 & VAR_5)
  FUNC_4(VAR_8);
 if (VAR_9 & VAR_2)
  FUNC_2(VAR_8);
 if (VAR_9 & VAR_3) {
  FUNC_5(VAR_8, VAR_6,
      FUNC_3(VAR_8, VAR_6));
 }
 if (VAR_9 & VAR_4) {
  FUNC_0(VAR_8,
      ("MDIO operation completed interrupt unimplemented"));
 }
 FUNC_5(VAR_8, VAR_0, 3);
}
