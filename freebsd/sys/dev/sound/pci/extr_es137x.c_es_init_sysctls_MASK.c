
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es_info {TYPE_1__* ch; } ;
typedef int device_t ;
typedef int dev ;
struct TYPE_2__ {int * channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int ,char*,int,int ,int,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,int) ;
 struct es_info* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,char*,int*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_11(device_t VAR_20)
{
 struct es_info *VAR_21;
 int VAR_22, VAR_23, VAR_24;

 VAR_23 = FUNC_6(VAR_20);
 VAR_24 = FUNC_7(VAR_20);
 VAR_21 = FUNC_9(VAR_20);
 if ((VAR_23 == VAR_9 && VAR_24 == VAR_8) ||
     (VAR_23 == VAR_9 && VAR_24 == VAR_7) ||
     (VAR_23 == VAR_3 && VAR_24 == VAR_0) ||
     (VAR_23 == VAR_3 && VAR_24 == VAR_1) ||
     (VAR_23 == VAR_3 && VAR_24 == VAR_2)) {





  FUNC_0(FUNC_3(VAR_20),
      FUNC_1(FUNC_4(VAR_20)), VAR_13,
      "spdif_enabled", VAR_5 | VAR_4, VAR_20, sizeof(VAR_20),
      VAR_18, "I",
      "Enable S/PDIF output on primary playback channel");
 } else if (VAR_23 == VAR_6) {



  if (VAR_21->ch[VAR_12].channel != ((void*)0) &&
      VAR_21->ch[VAR_10].channel != ((void*)0)) {





   FUNC_0(FUNC_3(VAR_20),
       FUNC_1(FUNC_4(VAR_20)),
       VAR_13, "fixed_rate", VAR_5 | VAR_4,
       VAR_20, sizeof(VAR_20), VAR_15, "I",
       "Enable fixed rate playback/recording");
  }



  if (VAR_21->ch[VAR_11].channel != ((void*)0) &&
      VAR_21->ch[VAR_12].channel != ((void*)0)) {





   FUNC_0(FUNC_3(VAR_20),
       FUNC_1(FUNC_4(VAR_20)),
       VAR_13, "single_pcm_mixer",
       VAR_5 | VAR_4, VAR_20, sizeof(VAR_20),
       VAR_17, "I",
       "Single PCM mixer controller for both DAC1/DAC2");
  }
 }
 if (FUNC_10(FUNC_2(VAR_20), FUNC_5(VAR_20),
     "latency_timer", &VAR_22) == 0 && !(VAR_22 < 0 || VAR_22 > 255))
  FUNC_8(VAR_20, VAR_14, VAR_22, 1);



 FUNC_0(FUNC_3(VAR_20),
     FUNC_1(FUNC_4(VAR_20)), VAR_13,
     "latency_timer", VAR_5 | VAR_4, VAR_20, sizeof(VAR_20),
     VAR_16, "I",
     "PCI Latency Timer configuration");
 FUNC_0(FUNC_3(VAR_20),
     FUNC_1(FUNC_4(VAR_20)), VAR_13,
     "polling", VAR_5 | VAR_4, VAR_20, sizeof(VAR_20),
     VAR_19, "I",
     "Enable polling mode");
}
