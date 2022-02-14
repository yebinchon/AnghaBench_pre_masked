
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kc_arg; int (* kc_func ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_6__ {int kb_delay2; TYPE_1__ kb_callback; } ;
struct adb_kbd_softc {int buffers; int* buffer; int last_press; TYPE_2__ sc_kbd; int sc_repeater; int sc_mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct adb_kbd_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1) {
 struct adb_kbd_softc *VAR_2 = VAR_1;
 int VAR_3 = 0;



 FUNC_4(&VAR_2->sc_mutex);
  if (VAR_2->buffers < 7) {
   VAR_2->buffer[VAR_2->buffers++] = VAR_2->last_press | (1 << 7);
   VAR_2->buffer[VAR_2->buffers++] = VAR_2->last_press;

   VAR_3 = 1;
  }
 FUNC_5(&VAR_2->sc_mutex);

 if (VAR_3 && FUNC_0(&VAR_2->sc_kbd)
     && FUNC_1(&VAR_2->sc_kbd)) {
  VAR_2->sc_kbd.kb_callback.kc_func(&VAR_2->sc_kbd,
      VAR_0, VAR_2->sc_kbd.kb_callback.kc_arg);
 }


 FUNC_2(&VAR_2->sc_repeater, FUNC_3(VAR_2->sc_kbd.kb_delay2),
     FUNC_7, VAR_2);
}
