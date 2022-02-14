
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct exec_domain {int module; } ;
struct TYPE_4__ {unsigned int personality; } ;
struct TYPE_3__ {struct exec_domain* exec_domain; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 struct exec_domain* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;

int
FUNC_3(unsigned int VAR_1)
{
 struct exec_domain *VAR_2, *VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == FUNC_0()->exec_domain) {
  VAR_0->personality = VAR_1;
  FUNC_2(VAR_2->module);
  return 0;
 }

 VAR_0->personality = VAR_1;
 VAR_3 = FUNC_0()->exec_domain;
 FUNC_0()->exec_domain = VAR_2;

 FUNC_2(VAR_3->module);
 return 0;
}
