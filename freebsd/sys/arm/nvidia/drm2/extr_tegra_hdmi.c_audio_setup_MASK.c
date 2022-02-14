
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct hdmi_softc {int audio_src_type; int dev; int audio_freq; int clk_hdmi; int hdmi_mode; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct hdmi_softc*,int ) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct hdmi_softc*,int ,int) ;
 int FUNC_7 (struct hdmi_softc*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ,int *,int *,int *) ;
 int FUNC_11 (int ,int ,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_12(struct hdmi_softc *VAR_15)
{
 uint32_t VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;
 uint64_t VAR_20;
 bus_size_t VAR_21;
 int VAR_22;

 if (!VAR_15->hdmi_mode)
  return (VAR_3);
 VAR_22 = FUNC_10(VAR_15->audio_freq, ((void*)0), ((void*)0), &VAR_21);
 if (VAR_22 != 0) {
  FUNC_9(VAR_15->dev, "Unsupported audio frequency.\n");
  return (VAR_22);
 }

 VAR_22 = FUNC_8(VAR_15->clk_hdmi, &VAR_20);
 if (VAR_22 != 0) {
  FUNC_9(VAR_15->dev, "Cannot get hdmi frequency: %d\n", VAR_22);
  return (VAR_22);
 }

 VAR_22 = FUNC_11(VAR_15->audio_freq, VAR_20, &VAR_18, &VAR_17,
     &VAR_19);
 if (VAR_22 != 0) {
  FUNC_9(VAR_15->dev, "Cannot compute audio coefs: %d\n", VAR_22);
  return (VAR_22);
 }


 FUNC_7(VAR_15);

 FUNC_6(VAR_15, VAR_9,
     FUNC_4(VAR_15->audio_src_type) |
     VAR_11);

 VAR_16 = FUNC_3(VAR_15, VAR_10);
 VAR_16 |= VAR_12;
 FUNC_6(VAR_15, VAR_10, VAR_16);

 FUNC_6(VAR_15, VAR_7, 0);

 FUNC_6(VAR_15, VAR_4,
     VAR_2 |
     VAR_1 |
     FUNC_2(VAR_17 - 1));

 FUNC_6(VAR_15, VAR_5,
     FUNC_1(VAR_17) | VAR_0);

 FUNC_6(VAR_15, VAR_6,
     FUNC_0(VAR_18));

 FUNC_6(VAR_15, VAR_8,
     VAR_14 | VAR_13 | FUNC_5(1));

 VAR_16 = FUNC_3(VAR_15, VAR_4);
 VAR_16 &= ~VAR_2;
 FUNC_6(VAR_15, VAR_4, VAR_16);

 FUNC_6(VAR_15, VAR_21, VAR_19);

 return (0);
}
