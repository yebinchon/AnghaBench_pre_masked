
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int edid_ext_block_count; } ;
struct dwc_hdmi_softc {int sc_has_audio; int sc_dev; TYPE_1__ sc_edid_info; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (struct dwc_hdmi_softc*,int,int**,int *) ;

__attribute__((used)) static void
FUNC_3(struct dwc_hdmi_softc *VAR_3)
{
 uint8_t *VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_3->sc_has_audio = 0;


 for (VAR_6 = 1; VAR_6 <= VAR_3->sc_edid_info.edid_ext_block_count;
     VAR_6++) {
  if (FUNC_2(VAR_3, VAR_6, &VAR_4, &VAR_5) != 0)
   return;
  if (FUNC_1(VAR_4) != 0) {
   if (VAR_2)
    FUNC_0(VAR_3->sc_dev,
        "enabling audio support\n");
   VAR_3->sc_has_audio =
       (VAR_4[VAR_0] & VAR_1) != 0;
   return;
  }
 }
}
