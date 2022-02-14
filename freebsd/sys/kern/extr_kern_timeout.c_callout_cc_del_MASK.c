
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct callout_cpu {int cc_callfree; } ;
struct callout {int c_iflags; int * c_func; } ;
struct TYPE_2__ {int sle; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct callout*,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct callout *VAR_2, struct callout_cpu *VAR_3)
{

 if ((VAR_2->c_iflags & VAR_0) == 0)
  return;
 VAR_2->c_func = ((void*)0);
 FUNC_0(&VAR_3->cc_callfree, VAR_2, VAR_1.sle);
}
