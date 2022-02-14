
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int kc_arg; int (* kc_func ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_14__ {int kb_delay1; int kb_delay2; TYPE_1__ kb_callback; int kb_config; int kb_type; scalar_t__ kb_data; } ;
typedef TYPE_2__ keyboard_t ;
typedef int caddr_t ;
struct TYPE_15__ {scalar_t__ ks_polling; int ks_state; int kbdc; } ;
typedef TYPE_3__ atkbd_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(keyboard_t *VAR_5, void *VAR_6)
{
 atkbd_state_t *VAR_7 = (atkbd_state_t *)VAR_5->kb_data;
 int VAR_8[2];
 int VAR_9;

 if (!FUNC_1(VAR_5)) {




  FUNC_6(VAR_7->kbdc, &VAR_5->kb_type, VAR_5->kb_config);
  FUNC_0(VAR_5);
  FUNC_4(VAR_5, VAR_2, (caddr_t)&VAR_7->ks_state);
  FUNC_7(VAR_5);
  VAR_8[0] = VAR_5->kb_delay1;
  VAR_8[1] = VAR_5->kb_delay2;
  FUNC_4(VAR_5, VAR_3, (caddr_t)VAR_8);
 }

 if (VAR_7->ks_polling)
  return 0;

 if (FUNC_2(VAR_5) && FUNC_3(VAR_5)) {

  (*VAR_5->kb_callback.kc_func)(VAR_5, VAR_1,
         VAR_5->kb_callback.kc_arg);
 } else {

  do {
   VAR_9 = FUNC_5(VAR_5, VAR_0);
  } while (VAR_9 != VAR_4);
 }
 return 0;
}
