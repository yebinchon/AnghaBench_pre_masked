
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysevent_t ;
typedef int sysevent_attr_list_t ;
struct sysevent {int * se_nvl; } ;


 int FUNC_0 (int ) ;

int
FUNC_1(sysevent_t *VAR_0, sysevent_attr_list_t *VAR_1)
{
 struct sysevent *VAR_2 = (struct sysevent *)VAR_0;

 FUNC_0(VAR_2->se_nvl == ((void*)0));

 VAR_2->se_nvl = VAR_1;

 return (0);
}
