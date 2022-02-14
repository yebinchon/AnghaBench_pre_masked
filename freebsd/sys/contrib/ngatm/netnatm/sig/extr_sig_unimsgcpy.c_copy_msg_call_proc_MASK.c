
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_call_proc {int unrec; int notify; int epref; int connid; } ;


 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1(struct uni_call_proc *VAR_0, struct uni_call_proc *VAR_1)
{
 if(FUNC_0(VAR_0->connid))
  VAR_1->connid = VAR_0->connid;
 if(FUNC_0(VAR_0->epref))
  VAR_1->epref = VAR_0->epref;
 if(FUNC_0(VAR_0->notify))
  VAR_1->notify = VAR_0->notify;
 if(FUNC_0(VAR_0->unrec))
  VAR_1->unrec = VAR_0->unrec;
}
