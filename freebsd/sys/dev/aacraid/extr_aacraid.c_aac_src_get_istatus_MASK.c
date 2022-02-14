
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {scalar_t__ msi_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct aac_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static int
FUNC_2(struct aac_softc *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_6, VAR_5, "");

 if (VAR_6->msi_enabled) {
  VAR_7 = FUNC_0(VAR_6, VAR_2);
  if (VAR_7 & VAR_1)
   VAR_7 = VAR_0;
  else
   VAR_7 = 0;
 } else {
  VAR_7 = FUNC_0(VAR_6, VAR_3) >> VAR_4;
 }
 return(VAR_7);
}
