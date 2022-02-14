
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_state; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct aac_softc*) ;
 char* VAR_1 ;
 struct aac_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

int
FUNC_3(device_t VAR_2)
{
 struct aac_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_3, VAR_1, "");
 VAR_3->aac_state &= ~VAR_0;
 FUNC_0(VAR_3);
 return(0);
}
