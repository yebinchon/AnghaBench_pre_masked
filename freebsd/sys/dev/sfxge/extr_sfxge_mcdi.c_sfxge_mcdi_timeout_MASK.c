
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct sfxge_softc*) ;

__attribute__((used)) static void
FUNC_5(struct sfxge_softc *VAR_2)
{
 device_t VAR_3 = VAR_2->dev;

 FUNC_3(VAR_0, "[%s%d] MC_TIMEOUT", FUNC_1(VAR_3),
  FUNC_2(VAR_3));

 FUNC_0(VAR_1);
 FUNC_4(VAR_2);
}
