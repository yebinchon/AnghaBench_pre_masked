
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ks_flags; scalar_t__ ks_composed_char; } ;
typedef TYPE_1__ vkbd_state_t ;
struct TYPE_9__ {scalar_t__ kb_data; } ;
typedef TYPE_2__ keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(keyboard_t *VAR_3)
{
 vkbd_state_t *VAR_4 = ((void*)0);
 int VAR_5;

 if (!FUNC_0(VAR_3))
  return (VAR_1);

 VAR_4 = (vkbd_state_t *) VAR_3->kb_data;

 FUNC_1(VAR_4);
 if (!(VAR_4->ks_flags & VAR_0) && (VAR_4->ks_composed_char > 0))
  VAR_5 = VAR_2;
 else
  VAR_5 = FUNC_3(VAR_4);
 FUNC_2(VAR_4);

 return (VAR_5);
}
