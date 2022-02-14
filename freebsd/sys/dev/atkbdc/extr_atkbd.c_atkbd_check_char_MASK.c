
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_6__ {int ks_flags; scalar_t__ ks_composed_char; int kbdc; } ;
typedef TYPE_2__ atkbd_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_3)
{
 atkbd_state_t *VAR_4;

 if (!FUNC_0(VAR_3))
  return VAR_1;
 VAR_4 = (atkbd_state_t *)VAR_3->kb_data;
 if (!(VAR_4->ks_flags & VAR_0) && (VAR_4->ks_composed_char > 0))
  return VAR_2;
 return FUNC_1(VAR_4->kbdc);
}
