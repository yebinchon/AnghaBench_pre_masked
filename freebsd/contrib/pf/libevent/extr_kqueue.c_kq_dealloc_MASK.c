
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqop {scalar_t__ kq; struct kqop* events; struct kqop* changes; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct kqop*) ;
 int FUNC_2 (struct kqop*,int ,int) ;

void
FUNC_3(void *VAR_0)
{
 struct kqop *VAR_1 = VAR_0;

 if (VAR_1->changes)
  FUNC_1(VAR_1->changes);
 if (VAR_1->events)
  FUNC_1(VAR_1->events);
 if (VAR_1->kq)
  FUNC_0(VAR_1->kq);
 FUNC_2(VAR_1, 0, sizeof(struct kqop));
 FUNC_1(VAR_1);
}
