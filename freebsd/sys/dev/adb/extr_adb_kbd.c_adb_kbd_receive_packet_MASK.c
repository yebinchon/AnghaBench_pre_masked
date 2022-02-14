
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef scalar_t__ u_char ;
struct TYPE_5__ {int kc_arg; int (* kc_func ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_6__ {TYPE_1__ kb_callback; int kb_delay1; } ;
struct adb_kbd_softc {int buffers; int* buffer; int last_press; TYPE_2__ sc_kbd; int sc_cv; int sc_mutex; int sc_repeater; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,struct adb_kbd_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char*,int *) ;
 struct adb_kbd_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static u_int
FUNC_11(device_t VAR_3, u_char VAR_4,
    u_char VAR_5, u_char VAR_6, int VAR_7, u_char *VAR_8)
{
 struct adb_kbd_softc *VAR_9;

 VAR_9 = FUNC_6(VAR_3);

 if (VAR_5 != VAR_0)
  return 0;

 if (VAR_6 != 0 || VAR_7 != 2)
  return (0);

 FUNC_8(&VAR_9->sc_mutex);

  if (VAR_8[0] == 0x7f) {
   FUNC_5("PMU", "Button", "pressed", ((void*)0));
   FUNC_9(&VAR_9->sc_mutex);
   return (0);
  } else if (VAR_8[0] == 0xff) {
   FUNC_9(&VAR_9->sc_mutex);
   return (0);
  }
  if ((VAR_8[0] & 0x7f) == 57 && VAR_9->buffers < 7) {

   VAR_9->buffer[VAR_9->buffers++] = VAR_8[0] & 0x7f;
   VAR_9->buffer[VAR_9->buffers++] = (VAR_8[0] & 0x7f) | (1 << 7);
  } else {
   VAR_9->buffer[VAR_9->buffers++] = VAR_8[0];
  }
  if (VAR_9->buffer[VAR_9->buffers-1] < 0xff)
   VAR_9->last_press = VAR_9->buffer[VAR_9->buffers-1];

  if ((VAR_8[1] & 0x7f) == 57 && VAR_9->buffers < 7) {

   VAR_9->buffer[VAR_9->buffers++] = VAR_8[1] & 0x7f;
   VAR_9->buffer[VAR_9->buffers++] = (VAR_8[1] & 0x7f) | (1 << 7);
  } else {
   VAR_9->buffer[VAR_9->buffers++] = VAR_8[1];
  }

  if (VAR_9->buffer[VAR_9->buffers-1] < 0xff)
   VAR_9->last_press = VAR_9->buffer[VAR_9->buffers-1];


  FUNC_3(&VAR_9->sc_repeater);


  if (!(VAR_9->last_press & (1 << 7))) {
   FUNC_2(&VAR_9->sc_repeater,
       FUNC_7(VAR_9->sc_kbd.kb_delay1), VAR_2, VAR_9);
  }
 FUNC_9(&VAR_9->sc_mutex);

 FUNC_4(&VAR_9->sc_cv);

 if (FUNC_0(&VAR_9->sc_kbd) && FUNC_1(&VAR_9->sc_kbd)) {
  VAR_9->sc_kbd.kb_callback.kc_func(&VAR_9->sc_kbd,
    VAR_1, VAR_9->sc_kbd.kb_callback.kc_arg);
 }

 return (0);
}
