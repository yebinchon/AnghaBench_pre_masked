
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audit_watch {TYPE_1__* parent; int wlist; } ;
struct TYPE_2__ {int wdata; } ;


 int FUNC_0 (struct audit_watch*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct audit_watch *VAR_0)
{
 FUNC_1(&VAR_0->wlist);
 FUNC_2(&VAR_0->parent->wdata);
 VAR_0->parent = ((void*)0);
 FUNC_0(VAR_0);
}
