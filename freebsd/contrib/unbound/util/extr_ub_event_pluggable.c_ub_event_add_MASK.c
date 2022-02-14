
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_event {scalar_t__ magic; TYPE_1__* vmt; } ;
struct timeval {int dummy; } ;
struct TYPE_2__ {int (* add ) (struct ub_event*,struct timeval*) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ub_event*,struct timeval*) ;
 int FUNC_2 (struct ub_event*,struct timeval*) ;

int
FUNC_3(struct ub_event* VAR_2, struct timeval* VAR_3)
{
 if (VAR_2->magic == VAR_0) {
  FUNC_0(VAR_2->vmt != &VAR_1 ||
   VAR_2->vmt->add == FUNC_1);
  return (*VAR_2->vmt->add)(VAR_2, VAR_3);
 }
       return -1;
}
