
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_status {int unrec; int epstate; int epref; int cause; int callstate; } ;


 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1(struct uni_status *VAR_0, struct uni_status *VAR_1)
{
 if(FUNC_0(VAR_0->callstate))
  VAR_1->callstate = VAR_0->callstate;
 if(FUNC_0(VAR_0->cause))
  VAR_1->cause = VAR_0->cause;
 if(FUNC_0(VAR_0->epref))
  VAR_1->epref = VAR_0->epref;
 if(FUNC_0(VAR_0->epstate))
  VAR_1->epstate = VAR_0->epstate;
 if(FUNC_0(VAR_0->unrec))
  VAR_1->unrec = VAR_0->unrec;
}
