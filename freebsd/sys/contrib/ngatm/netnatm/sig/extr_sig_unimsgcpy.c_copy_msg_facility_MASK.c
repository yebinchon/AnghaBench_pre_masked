
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_facility {int unrec; int notify; int calling; int calledsub; int called; int facility; } ;


 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1(struct uni_facility *VAR_0, struct uni_facility *VAR_1)
{
 if(FUNC_0(VAR_0->facility))
  VAR_1->facility = VAR_0->facility;
 if(FUNC_0(VAR_0->called))
  VAR_1->called = VAR_0->called;
 if(FUNC_0(VAR_0->calledsub))
  VAR_1->calledsub = VAR_0->calledsub;
 if(FUNC_0(VAR_0->calling))
  VAR_1->calling = VAR_0->calling;
 if(FUNC_0(VAR_0->notify))
  VAR_1->notify = VAR_0->notify;
 if(FUNC_0(VAR_0->unrec))
  VAR_1->unrec = VAR_0->unrec;
}
