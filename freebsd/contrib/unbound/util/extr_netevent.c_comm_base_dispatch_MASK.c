
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_base {TYPE_1__* eb; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct comm_base* VAR_1)
{
 int VAR_2;
 VAR_2 = FUNC_2(VAR_1->eb->base);
 if(VAR_2 < 0) {
  FUNC_0("event_dispatch returned error %d, "
   "errno is %s", VAR_2, FUNC_1(VAR_0));
 }
}
