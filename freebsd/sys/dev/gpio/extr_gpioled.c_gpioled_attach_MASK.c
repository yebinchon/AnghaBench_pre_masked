
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioled_softc {int sc_invert; int sc_leddev; int sc_busdev; int sc_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct gpioled_softc*) ;
 int FUNC_1 (int ) ;
 char const* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct gpioled_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int ,struct gpioled_softc*,char const*,int) ;
 int FUNC_7 (int ,int ,char*,int*) ;
 scalar_t__ FUNC_8 (int ,int ,char*,char const**) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1)
{
 struct gpioled_softc *VAR_2;
 int VAR_3;
 const char *VAR_4;

 VAR_2 = FUNC_4(VAR_1);
 VAR_2->sc_dev = VAR_1;
 VAR_2->sc_busdev = FUNC_3(VAR_1);
 FUNC_0(VAR_2);

 VAR_3 = 0;

 if (FUNC_8(FUNC_1(VAR_1),
     FUNC_5(VAR_1), "name", &VAR_4))
  VAR_4 = ((void*)0);
 FUNC_7(FUNC_1(VAR_1),
     FUNC_5(VAR_1), "invert", &VAR_2->sc_invert);
 FUNC_7(FUNC_1(VAR_1),
     FUNC_5(VAR_1), "state", &VAR_3);

 VAR_2->sc_leddev = FUNC_6(VAR_0, VAR_2, VAR_4 ? VAR_4 :
     FUNC_2(VAR_1), VAR_3);

 return (0);
}
