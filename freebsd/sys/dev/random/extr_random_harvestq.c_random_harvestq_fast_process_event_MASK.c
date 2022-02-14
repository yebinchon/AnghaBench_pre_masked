
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct harvest_event {int dummy; } ;
struct TYPE_2__ {int (* ra_event_processor ) (struct harvest_event*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct harvest_event*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (struct harvest_event*) ;

__attribute__((used)) static __inline void
FUNC_4(struct harvest_event *VAR_1)
{




 VAR_0->ra_event_processor(VAR_1);



 FUNC_2(VAR_1, sizeof(*VAR_1));
}
