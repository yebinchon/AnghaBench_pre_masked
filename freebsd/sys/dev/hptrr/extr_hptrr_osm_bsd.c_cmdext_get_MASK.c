
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* cmdext_list; } ;
typedef TYPE_1__* PVBUS_EXT ;
typedef TYPE_2__* POS_CMDEXT ;



__attribute__((used)) static __inline POS_CMDEXT FUNC_0(PVBUS_EXT VAR_0)
{
 POS_CMDEXT VAR_1 = VAR_0->cmdext_list;
 if (VAR_1)
  VAR_0->cmdext_list = VAR_1->next;
 return VAR_1;
}
