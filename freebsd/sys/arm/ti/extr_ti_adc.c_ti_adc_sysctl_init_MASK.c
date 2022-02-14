
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_adc_softc {int sc_adc_nchannels; int* sc_adc_channels; int value; int sc_dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int pinbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct ti_adc_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ti_adc_softc* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_7(struct ti_adc_softc *VAR_9)
{
 char VAR_10[3];
 struct sysctl_ctx_list *VAR_11;
 struct sysctl_oid *VAR_12, *VAR_13, *VAR_14;
 struct sysctl_oid_list *VAR_15, *VAR_16, *VAR_17;
 int VAR_18, VAR_19;




 VAR_11 = FUNC_4(VAR_9->sc_dev);
 VAR_12 = FUNC_5(VAR_9->sc_dev);
 VAR_15 = FUNC_3(VAR_12);
 FUNC_2(VAR_11, VAR_15, VAR_3, "clockdiv",
     VAR_1 | VAR_2, VAR_9, 0,
     VAR_4, "IU", "ADC clock prescaler");
 VAR_13 = FUNC_1(VAR_11, VAR_15, VAR_3, "ain",
     VAR_0, ((void*)0), "ADC inputs");
 VAR_16 = FUNC_3(VAR_13);

 for (VAR_19 = 0; VAR_19 < VAR_9->sc_adc_nchannels; VAR_19++) {
  VAR_18 = VAR_9->sc_adc_channels[VAR_19];

  FUNC_6(VAR_10, sizeof(VAR_10), "%d", VAR_18);
  VAR_14 = FUNC_1(VAR_11, VAR_16, VAR_3, VAR_10,
      VAR_0, ((void*)0), "ADC input");
  VAR_17 = FUNC_3(VAR_14);

  FUNC_2(VAR_11, VAR_17, VAR_3, "enable",
      VAR_1 | VAR_2, &VAR_6[VAR_18], 0,
      VAR_5, "IU", "Enable ADC input");
  FUNC_2(VAR_11, VAR_17, VAR_3, "open_delay",
      VAR_1 | VAR_2, &VAR_6[VAR_18], 0,
      VAR_7, "IU", "ADC open delay");
  FUNC_2(VAR_11, VAR_17, VAR_3, "samples_avg",
      VAR_1 | VAR_2, &VAR_6[VAR_18], 0,
      VAR_8, "IU", "ADC samples average");
  FUNC_0(VAR_11, VAR_17, VAR_3, "input",
      VAR_0, &VAR_6[VAR_18].value, 0,
      "Converted raw value for the ADC input");
 }
}
