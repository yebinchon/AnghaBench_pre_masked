
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_event_base {scalar_t__ magic; TYPE_1__* vmt; } ;
struct TYPE_2__ {int (* loopexit ) (struct ub_event_base*,int *) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ub_event_base*,int *) ;
 int FUNC_2 (struct ub_event_base*,int *) ;

int
FUNC_3(struct ub_event_base* VAR_2)
{
 if (VAR_2->magic == VAR_0) {
  FUNC_0(VAR_2->vmt != &VAR_1 ||
   VAR_2->vmt->loopexit == FUNC_1);
  return (*VAR_2->vmt->loopexit)(VAR_2, ((void*)0));
 }
 return -1;
}
