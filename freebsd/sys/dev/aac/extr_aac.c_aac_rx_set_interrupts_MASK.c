
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aac_softc*,int ,int ) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (struct aac_softc*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct aac_softc *VAR_5, int VAR_6)
{
 FUNC_1(VAR_5, VAR_4, "%sable interrupts", VAR_6 ? "en" : "dis");

 if (VAR_6) {
  if (VAR_5->flags & VAR_2)
   FUNC_0(VAR_5, VAR_3, ~VAR_1);
  else
   FUNC_0(VAR_5, VAR_3, ~VAR_0);
 } else {
  FUNC_0(VAR_5, VAR_3, ~0);
 }
}
