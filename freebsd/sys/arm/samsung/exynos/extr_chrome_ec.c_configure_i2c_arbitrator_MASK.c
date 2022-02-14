
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_softc {int have_arbitrator; int ec_gpio; int our_gpio; } ;
typedef int phandle_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int *,int) ;
 scalar_t__ FUNC_2 (int,char*) ;

__attribute__((used)) static void
FUNC_3(struct ec_softc *VAR_0)
{
 phandle_t VAR_1;


 VAR_1 = FUNC_0("/i2c-arbitrator");
 if (VAR_1 != -1 &&
     FUNC_2(VAR_1, "freebsd,our-gpio") &&
     FUNC_2(VAR_1, "freebsd,ec-gpio")) {
  VAR_0->have_arbitrator = 1;
  FUNC_1(VAR_1, "freebsd,our-gpio",
      &VAR_0->our_gpio, sizeof(VAR_0->our_gpio));
  FUNC_1(VAR_1, "freebsd,ec-gpio",
      &VAR_0->ec_gpio, sizeof(VAR_0->ec_gpio));
 } else {
  VAR_0->have_arbitrator = 0;
  VAR_0->our_gpio = 0;
  VAR_0->ec_gpio = 0;
 }
}
