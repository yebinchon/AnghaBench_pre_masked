
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_state; } ;
typedef int device_t ;


 int FUNC_0 (struct aac_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 struct aac_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

int
FUNC_3(device_t VAR_3)
{
 struct aac_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_4, VAR_2, "");
 VAR_4->aac_state &= ~VAR_1;
 FUNC_0(VAR_4, VAR_0);
 return(0);
}
