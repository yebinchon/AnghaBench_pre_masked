
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct intr_config_hook {int * ich_func; } ;
struct TYPE_4__ {int enc_flags; scalar_t__ pending_actions; int periph; int * enc_daemon; int status_updater; struct intr_config_hook enc_boot_hold_ch; int current_action; } ;
typedef TYPE_1__ enc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct intr_config_hook*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5)
{
 enc_softc_t *VAR_6;

 VAR_6 = VAR_5;

 FUNC_1(VAR_6->periph);
 while ((VAR_6->enc_flags & VAR_0) == 0) {
  if (VAR_6->pending_actions == 0) {
   struct intr_config_hook *VAR_7;






   VAR_6->current_action = VAR_1;





   VAR_7 = &VAR_6->enc_boot_hold_ch;
   if (VAR_7->ich_func != ((void*)0)) {
    FUNC_5(VAR_7);
    VAR_7->ich_func = ((void*)0);
   }

   FUNC_0(&VAR_6->status_updater, 60*VAR_4,
          VAR_3, VAR_6);

   FUNC_3(VAR_6->periph, VAR_6->enc_daemon,
      VAR_2, "idle", 0);
  } else {
   FUNC_6(VAR_6);
  }
 }
 VAR_6->enc_daemon = ((void*)0);
 FUNC_4(VAR_6->periph);
 FUNC_2(VAR_6->periph);
 FUNC_7(0);
}
