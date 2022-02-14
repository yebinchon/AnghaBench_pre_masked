
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct bcm_gpio_sysctl {int pin; struct bcm_gpio_softc* sc; } ;
struct bcm_gpio_softc {int sc_gpio_npins; TYPE_1__* sc_gpio_pins; struct bcm_gpio_sysctl* sc_sysctl; int sc_dev; } ;
typedef int pinbuf ;
struct TYPE_2__ {int gp_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct bcm_gpio_sysctl*,int,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int VAR_4 ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_6(struct bcm_gpio_softc *VAR_5)
{
 char VAR_6[3];
 struct bcm_gpio_sysctl *VAR_7;
 struct sysctl_ctx_list *VAR_8;
 struct sysctl_oid *VAR_9, *VAR_10, *VAR_11;
 struct sysctl_oid_list *VAR_12, *VAR_13, *VAR_14;
 int VAR_15;




 VAR_8 = FUNC_3(VAR_5->sc_dev);
  VAR_9 = FUNC_4(VAR_5->sc_dev);
  VAR_12 = FUNC_2(VAR_9);
 VAR_10 = FUNC_0(VAR_8, VAR_12, VAR_3, "pin",
     VAR_0, ((void*)0), "GPIO Pins");
 VAR_13 = FUNC_2(VAR_10);

 for (VAR_15 = 0; VAR_15 < VAR_5->sc_gpio_npins; VAR_15++) {

  FUNC_5(VAR_6, sizeof(VAR_6), "%d", VAR_15);
  VAR_11 = FUNC_0(VAR_8, VAR_13, VAR_3, VAR_6,
      VAR_0, ((void*)0), "GPIO Pin");
  VAR_14 = FUNC_2(VAR_11);

  VAR_5->sc_sysctl[VAR_15].sc = VAR_5;
  VAR_7 = &VAR_5->sc_sysctl[VAR_15];
  VAR_7->sc = VAR_5;
  VAR_7->pin = VAR_5->sc_gpio_pins[VAR_15].gp_pin;
  FUNC_1(VAR_8, VAR_14, VAR_3, "function",
      VAR_1 | VAR_2, VAR_7,
      sizeof(struct bcm_gpio_sysctl), VAR_4,
      "A", "Pin Function");
 }
}
