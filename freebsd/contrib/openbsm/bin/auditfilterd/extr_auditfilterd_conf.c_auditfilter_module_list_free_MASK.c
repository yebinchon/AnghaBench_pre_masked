
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auditfilter_module_list {int dummy; } ;
struct auditfilter_module {int dummy; } ;


 int FUNC_0 (struct auditfilter_module_list*) ;
 struct auditfilter_module* FUNC_1 (struct auditfilter_module_list*) ;
 int FUNC_2 (struct auditfilter_module_list*,struct auditfilter_module*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct auditfilter_module*) ;

__attribute__((used)) static void
FUNC_4(struct auditfilter_module_list *VAR_1)
{
 struct auditfilter_module *VAR_2;

 while (!(FUNC_0(VAR_1))) {
  VAR_2 = FUNC_1(VAR_1);
  FUNC_2(VAR_1, VAR_2, VAR_0);
  FUNC_3(VAR_2);
 }
}
