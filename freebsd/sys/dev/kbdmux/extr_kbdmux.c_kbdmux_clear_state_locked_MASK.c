
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ks_inq_length; scalar_t__ ks_composed_char; scalar_t__ ks_accents; int ks_state; scalar_t__ ks_polling; int ks_flags; } ;
typedef TYPE_1__ kbdmux_state_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(kbdmux_state_t *VAR_3)
{
 FUNC_0(VAR_3, VAR_2);

 VAR_3->ks_flags &= ~VAR_0;
 VAR_3->ks_polling = 0;
 VAR_3->ks_state &= VAR_1;
 VAR_3->ks_accents = 0;
 VAR_3->ks_composed_char = 0;

 VAR_3->ks_inq_length = 0;
}
