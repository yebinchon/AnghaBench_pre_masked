
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audit_context {int* fds; } ;
struct TYPE_2__ {struct audit_context* audit_context; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(int VAR_1, int VAR_2)
{
 struct audit_context *VAR_3 = VAR_0->audit_context;
 VAR_3->fds[0] = VAR_1;
 VAR_3->fds[1] = VAR_2;
}
