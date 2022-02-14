
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct wsp_softc {int sc_usb_device; struct wsp_dev_params* sc_params; } ;
struct wsp_dev_params {scalar_t__ tp_type; size_t um_switch_idx; int um_req_idx; int um_req_val; int iface_index; int um_size; scalar_t__ um_switch_off; scalar_t__ um_switch_on; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__*,int ,int ,int ,int ) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct wsp_softc *VAR_3, uint8_t VAR_4)
{
 const struct wsp_dev_params *VAR_5 = VAR_3->sc_params;
 uint8_t VAR_6[8];
 usb_error_t VAR_7;


 if (VAR_5->tp_type == VAR_0)
  return 0;

 VAR_7 = FUNC_2(VAR_3->sc_usb_device, ((void*)0),
     VAR_6, VAR_5->um_size, VAR_5->iface_index,
     VAR_5->um_req_val, VAR_5->um_req_idx);

 if (VAR_7 != VAR_1) {
  FUNC_0("Failed to read device mode (%d)\n", VAR_7);
  return (VAR_7);
 }







 FUNC_1("WHW", VAR_2 / 4);

 VAR_6[VAR_5->um_switch_idx] =
     VAR_4 ? VAR_5->um_switch_on : VAR_5->um_switch_off;

 return (FUNC_3(VAR_3->sc_usb_device, ((void*)0),
     VAR_6, VAR_5->um_size, VAR_5->iface_index,
     VAR_5->um_req_val, VAR_5->um_req_idx));
}
