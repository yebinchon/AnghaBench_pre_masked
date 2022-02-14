
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cc; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_5__ {TYPE_2__ ks_inq; int ks_wsel; scalar_t__ ks_composed_char; scalar_t__ ks_accents; int ks_state; scalar_t__ ks_polling; int ks_flags; } ;
typedef TYPE_1__ vkbd_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(vkbd_state_t *VAR_4)
{
 FUNC_0(VAR_4, VAR_2);

 VAR_4->ks_flags &= ~VAR_0;
 VAR_4->ks_polling = 0;
 VAR_4->ks_state &= VAR_1;
 VAR_4->ks_accents = 0;
 VAR_4->ks_composed_char = 0;



 VAR_4->ks_inq.head = VAR_4->ks_inq.tail = VAR_4->ks_inq.cc = 0;
 FUNC_1(&VAR_4->ks_wsel, VAR_3 + 1);
 FUNC_2(&VAR_4->ks_inq);
}
