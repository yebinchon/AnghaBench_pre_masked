
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nargs; int args; } ;
struct audit_context {TYPE_1__ socketcall; int type; scalar_t__ dummy; } ;
struct TYPE_4__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned long*,int) ;

void FUNC_2(int VAR_2, unsigned long *VAR_3)
{
 struct audit_context *VAR_4 = VAR_1->audit_context;

 if (FUNC_0(!VAR_4 || VAR_4->dummy))
  return;

 VAR_4->type = VAR_0;
 VAR_4->socketcall.nargs = VAR_2;
 FUNC_1(VAR_4->socketcall.args, VAR_3, VAR_2 * sizeof(unsigned long));
}
