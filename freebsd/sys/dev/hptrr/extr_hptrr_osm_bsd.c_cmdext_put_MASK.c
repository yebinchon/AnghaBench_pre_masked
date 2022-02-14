
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* vbus_ext; struct TYPE_5__* next; } ;
struct TYPE_4__ {TYPE_2__* cmdext_list; } ;
typedef TYPE_2__* POS_CMDEXT ;



__attribute__((used)) static __inline void FUNC_0(POS_CMDEXT VAR_0)
{
 VAR_0->next = VAR_0->vbus_ext->cmdext_list;
 VAR_0->vbus_ext->cmdext_list = VAR_0;
}
