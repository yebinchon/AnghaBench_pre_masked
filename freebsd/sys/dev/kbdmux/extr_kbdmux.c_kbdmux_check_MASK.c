
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_8__ {scalar_t__ ks_inq_length; } ;
typedef TYPE_2__ kbdmux_state_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(keyboard_t *VAR_2)
{
 kbdmux_state_t *VAR_3 = (kbdmux_state_t *) VAR_2->kb_data;
 int VAR_4;

 if (!FUNC_2(VAR_2))
  return (VAR_0);

 FUNC_0(VAR_3);
 VAR_4 = (VAR_3->ks_inq_length > 0) ? VAR_1 : VAR_0;
 FUNC_1(VAR_3);

 return (VAR_4);
}
