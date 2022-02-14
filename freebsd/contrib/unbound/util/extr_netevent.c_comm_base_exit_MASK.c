
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_base {TYPE_1__* eb; } ;
struct TYPE_2__ {int base; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct comm_base* VAR_0)
{
 if(FUNC_1(VAR_0->eb->base) != 0) {
  FUNC_0("Could not loopexit");
 }
}
