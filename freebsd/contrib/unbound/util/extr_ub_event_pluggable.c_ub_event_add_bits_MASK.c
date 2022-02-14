
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_event {scalar_t__ magic; TYPE_1__* vmt; } ;
struct TYPE_2__ {int (* add_bits ) (struct ub_event*,short) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ub_event*,short) ;
 int FUNC_2 (struct ub_event*,short) ;

void
FUNC_3(struct ub_event* VAR_2, short VAR_3)
{
 if (VAR_2->magic == VAR_0) {
  FUNC_0(VAR_2->vmt != &VAR_1 ||
   VAR_2->vmt->add_bits == FUNC_1);
  (*VAR_2->vmt->add_bits)(VAR_2, VAR_3);
 }
}
