
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {scalar_t__ done; int lock; int cv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,char*,int ) ;

void
FUNC_2(struct completion *VAR_1)
{
 FUNC_0(&VAR_1->cv, "VCHI completion cv");
 FUNC_1(&VAR_1->lock, "VCHI completion lock", "condvar", VAR_0);
 VAR_1->done = 0;
}
