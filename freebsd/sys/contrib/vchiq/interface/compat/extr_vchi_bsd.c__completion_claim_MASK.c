
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int done; int lock; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct completion *VAR_0)
{

 FUNC_0(FUNC_1(&VAR_0->lock),
     ("_completion_claim should be called with acquired lock"));
 FUNC_0(VAR_0->done != 0, ("_completion_claim on non-waited completion"));
 if (VAR_0->done > 0)
  VAR_0->done--;
 else
  FUNC_0(VAR_0->done == -1, ("Invalid value of c->done: %d", VAR_0->done));
}
