
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {int event_trigger; int flow_trigger; } ;
struct iwm_tlv_calib_data {TYPE_2__ calib; int ucode_type; } ;
struct iwm_softc {TYPE_1__* sc_default_calib; int sc_dev; } ;
struct TYPE_3__ {int event_trigger; int flow_trigger; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_2, const void *VAR_3)
{
 const struct iwm_tlv_calib_data *VAR_4 = VAR_3;
 uint32_t VAR_5 = FUNC_1(VAR_4->ucode_type);

 if (VAR_5 >= VAR_1) {
  FUNC_0(VAR_2->sc_dev,
      "Wrong ucode_type %u for default "
      "calibration.\n", VAR_5);
  return VAR_0;
 }

 VAR_2->sc_default_calib[VAR_5].flow_trigger =
     VAR_4->calib.flow_trigger;
 VAR_2->sc_default_calib[VAR_5].event_trigger =
     VAR_4->calib.event_trigger;

 return 0;
}
