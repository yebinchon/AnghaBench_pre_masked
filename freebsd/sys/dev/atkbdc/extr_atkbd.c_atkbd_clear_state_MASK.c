
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_5__ {scalar_t__ ks_prefix; scalar_t__ ks_composed_char; scalar_t__ ks_accents; int ks_state; scalar_t__ ks_polling; scalar_t__ ks_flags; } ;
typedef TYPE_2__ atkbd_state_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(keyboard_t *VAR_1)
{
 atkbd_state_t *VAR_2;

 VAR_2 = (atkbd_state_t *)VAR_1->kb_data;
 VAR_2->ks_flags = 0;
 VAR_2->ks_polling = 0;
 VAR_2->ks_state &= VAR_0;
 VAR_2->ks_accents = 0;
 VAR_2->ks_composed_char = 0;



}
