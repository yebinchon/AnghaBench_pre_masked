
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ chan; int flags; } ;
struct wpi_softc {struct wpi_power_group* groups; TYPE_1__ rxon; } ;
struct wpi_power_group {scalar_t__ chan; } ;
struct wpi_cmd_txpower {TYPE_2__* rates; int chan; int band; } ;
struct TYPE_4__ {int dsp_gain; int rf_gain; int plcp; } ;


 int FUNC_0 (struct wpi_softc*,int ,char*,scalar_t__,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wpi_cmd_txpower*,int ,int) ;
 int FUNC_4 (struct wpi_softc*,int ,struct wpi_cmd_txpower*,int,int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_5 (struct wpi_softc*,struct wpi_power_group*,scalar_t__,int,int) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static int
FUNC_6(struct wpi_softc *VAR_11, int VAR_12)
{
 struct wpi_power_group *VAR_13;
 struct wpi_cmd_txpower VAR_14;
 uint8_t VAR_15;
 int VAR_16, VAR_17, VAR_18;


 VAR_15 = VAR_11->rxon.chan;
 VAR_17 = (VAR_11->rxon.flags & FUNC_2(VAR_5)) == 0;


 if (VAR_17) {
  for (VAR_13 = &VAR_11->groups[1]; VAR_13 < &VAR_11->groups[4]; VAR_13++)
   if (VAR_15 <= VAR_13->chan)
    break;
 } else
  VAR_13 = &VAR_11->groups[0];

 FUNC_3(&VAR_14, 0, sizeof VAR_14);
 VAR_14.band = VAR_17 ? VAR_1 : VAR_0;
 VAR_14.chan = FUNC_1(VAR_15);


 for (VAR_18 = 0; VAR_18 <= VAR_4 ; VAR_18++) {

  VAR_16 = FUNC_5(VAR_11, VAR_13, VAR_15, VAR_17, VAR_18);

  VAR_14.rates[VAR_18].plcp = VAR_10[VAR_18];

  if (VAR_17) {
   VAR_14.rates[VAR_18].rf_gain = VAR_9[VAR_16];
   VAR_14.rates[VAR_18].dsp_gain = VAR_7[VAR_16];
  } else {
   VAR_14.rates[VAR_18].rf_gain = VAR_8[VAR_16];
   VAR_14.rates[VAR_18].dsp_gain = VAR_6[VAR_16];
  }
  FUNC_0(VAR_11, VAR_3,
      "chan %d/ridx %d: power index %d\n", VAR_15, VAR_18, VAR_16);
 }

 return FUNC_4(VAR_11, VAR_2, &VAR_14, sizeof VAR_14, VAR_12);
}
