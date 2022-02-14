
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auditfilter_module {void* am_cookie; } ;



void
FUNC_0(void *VAR_0, void **VAR_1)
{
 struct auditfilter_module *VAR_2;

 VAR_2 = (struct auditfilter_module *)VAR_0;
 *VAR_1 = VAR_2->am_cookie;
}
