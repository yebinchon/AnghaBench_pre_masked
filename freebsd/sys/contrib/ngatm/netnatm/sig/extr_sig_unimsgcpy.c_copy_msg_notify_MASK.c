
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_notify {int unrec; int epref; int notify; } ;


 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1(struct uni_notify *VAR_0, struct uni_notify *VAR_1)
{
 if(FUNC_0(VAR_0->notify))
  VAR_1->notify = VAR_0->notify;
 if(FUNC_0(VAR_0->epref))
  VAR_1->epref = VAR_0->epref;
 if(FUNC_0(VAR_0->unrec))
  VAR_1->unrec = VAR_0->unrec;
}
