
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_5__ {scalar_t__ kbdc; } ;
typedef TYPE_2__ atkbd_state_t ;


 int VAR_0 ;
 int FUNC_0 (void*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(keyboard_t *VAR_1, void *VAR_2, size_t VAR_3)
{
 if (VAR_3 < sizeof(atkbd_state_t))
  return VAR_0;
 if (((atkbd_state_t *)VAR_1->kb_data)->kbdc
  != ((atkbd_state_t *)VAR_2)->kbdc)
  return VAR_0;
 FUNC_0(VAR_2, VAR_1->kb_data, sizeof(atkbd_state_t));
 return 0;
}
