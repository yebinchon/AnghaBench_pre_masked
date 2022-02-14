
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ bIfaceIndex; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct g_audio_softc {int sc_noise_rem; int** sc_data_len; int sc_mtx; int * sc_xfer; int sc_mode; int sc_watchdog; int sc_callout; } ;
typedef int device_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 struct g_audio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct g_audio_softc*) ;
 int FUNC_7 (struct g_audio_softc*) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,scalar_t__,int) ;
 int FUNC_14 (int ,scalar_t__,scalar_t__) ;
 int FUNC_15 (int ,scalar_t__*,int *,int ,int ,struct g_audio_softc*,int *) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_11)
{
 struct g_audio_softc *VAR_12 = FUNC_3(VAR_11);
 struct usb_attach_arg *VAR_13 = FUNC_2(VAR_11);
 int VAR_14;
 int VAR_15;
 uint8_t VAR_16[3];

 FUNC_1(11, "\n");

 FUNC_4(VAR_11);

 FUNC_8(&VAR_12->sc_mtx, "g_audio", ((void*)0), VAR_9);

 FUNC_11(&VAR_12->sc_callout, &VAR_12->sc_mtx, 0);
 FUNC_11(&VAR_12->sc_watchdog, &VAR_12->sc_mtx, 0);

 VAR_12->sc_mode = VAR_7;

 VAR_12->sc_noise_rem = 1;

 for (VAR_15 = 0; VAR_15 != VAR_2; VAR_15++) {
  VAR_12->sc_data_len[0][VAR_15] = VAR_1 / VAR_2;
  VAR_12->sc_data_len[1][VAR_15] = VAR_1 / VAR_2;
 }

 VAR_16[0] = VAR_13->info.bIfaceIndex;
 VAR_16[1] = VAR_13->info.bIfaceIndex + 1;
 VAR_16[2] = VAR_13->info.bIfaceIndex + 2;

 VAR_14 = FUNC_13(VAR_13->device, VAR_16[1], 1);
 if (VAR_14) {
  FUNC_0("alt iface setting error=%s\n", FUNC_12(VAR_14));
  goto detach;
 }
 VAR_14 = FUNC_13(VAR_13->device, VAR_16[2], 1);
 if (VAR_14) {
  FUNC_0("alt iface setting error=%s\n", FUNC_12(VAR_14));
  goto detach;
 }
 VAR_14 = FUNC_15(VAR_13->device,
     VAR_16, VAR_12->sc_xfer, VAR_10,
     VAR_8, VAR_12, &VAR_12->sc_mtx);

 if (VAR_14) {
  FUNC_0("error=%s\n", FUNC_12(VAR_14));
  goto detach;
 }
 FUNC_14(VAR_13->device, VAR_16[1], VAR_16[0]);
 FUNC_14(VAR_13->device, VAR_16[2], VAR_16[0]);

 FUNC_9(&VAR_12->sc_mtx);

 FUNC_16(VAR_12->sc_xfer[VAR_3]);
 FUNC_16(VAR_12->sc_xfer[VAR_5]);

 FUNC_16(VAR_12->sc_xfer[VAR_4]);
 FUNC_16(VAR_12->sc_xfer[VAR_6]);

 FUNC_6(VAR_12);

 FUNC_7(VAR_12);

 FUNC_10(&VAR_12->sc_mtx);

 return (0);

detach:
 FUNC_5(VAR_11);

 return (VAR_0);
}
