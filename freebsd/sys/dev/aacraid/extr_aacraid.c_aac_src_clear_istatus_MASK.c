
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {scalar_t__ msi_enabled; } ;


 int FUNC_0 (struct aac_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aac_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct aac_softc *VAR_5, int VAR_6)
{
 FUNC_2(VAR_5, VAR_4, "");

 if (VAR_5->msi_enabled) {
  if (VAR_6 == VAR_1)
   FUNC_0(VAR_5, VAR_0);
 } else {
  FUNC_1(VAR_5, VAR_2, VAR_6 << VAR_3);
 }
}
