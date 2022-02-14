
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp_softc {int sc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct esp_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct esp_softc*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct esp_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);
 FUNC_0(VAR_1, VAR_0, FUNC_3(VAR_2->sc_res),
     VAR_2->sc_res);

 return (0);
}
