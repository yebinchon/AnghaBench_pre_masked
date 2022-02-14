
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysevent_t ;
struct sysevent {int * se_nvl; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(sysevent_t *VAR_0)
{
 struct sysevent *VAR_1 = (struct sysevent *)VAR_0;

 FUNC_0(VAR_1->se_nvl != ((void*)0));

 VAR_1->se_nvl = ((void*)0);
}
