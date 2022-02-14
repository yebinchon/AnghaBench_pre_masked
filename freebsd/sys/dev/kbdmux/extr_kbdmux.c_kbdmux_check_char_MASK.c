
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_8__ {int ks_flags; scalar_t__ ks_composed_char; scalar_t__ ks_inq_length; } ;
typedef TYPE_2__ kbdmux_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(keyboard_t *VAR_3)
{
 kbdmux_state_t *VAR_4 = (kbdmux_state_t *) VAR_3->kb_data;
 int VAR_5;

 if (!FUNC_2(VAR_3))
  return (VAR_1);

 FUNC_0(VAR_4);

 if (!(VAR_4->ks_flags & VAR_0) && (VAR_4->ks_composed_char != 0))
  VAR_5 = VAR_2;
 else
  VAR_5 = (VAR_4->ks_inq_length > 0) ? VAR_2 : VAR_1;

 FUNC_1(VAR_4);

 return (VAR_5);
}
