
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sfxge_softc {int dev; } ;
struct sfxge_evq {int exception; int index; struct sfxge_softc* sc; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct sfxge_evq*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (struct sfxge_softc*) ;

__attribute__((used)) static boolean_t
FUNC_4(void *VAR_11, uint32_t VAR_12, uint32_t VAR_13)
{
 struct sfxge_evq *VAR_14;
 struct sfxge_softc *VAR_15;

 VAR_14 = (struct sfxge_evq *)VAR_11;
 FUNC_1(VAR_14);

 VAR_15 = VAR_14->sc;

 FUNC_0(VAR_15->dev, "[%d] %s", VAR_14->index,
     (VAR_12 == VAR_6) ? "RX_RECOVERY" :
     (VAR_12 == VAR_4) ? "RX_DSC_ERROR" :
     (VAR_12 == VAR_7) ? "TX_DSC_ERROR" :
     (VAR_12 == VAR_10) ? "UNKNOWN_SENSOREVT" :
     (VAR_12 == VAR_3) ? "FWALERT_SRAM" :
     (VAR_12 == VAR_9) ? "UNKNOWN_FWALERT" :
     (VAR_12 == VAR_5) ? "RX_ERROR" :
     (VAR_12 == VAR_8) ? "TX_ERROR" :
     (VAR_12 == VAR_2) ? "EV_ERROR" :
     "UNKNOWN");

 VAR_14->exception = VAR_1;

 if (VAR_12 != VAR_10) {
  FUNC_2(VAR_15->dev,
         "hardware exception (code=%u); resetting\n",
         VAR_12);
  FUNC_3(VAR_15);
 }

 return (VAR_0);
}
