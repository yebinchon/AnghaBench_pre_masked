
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {scalar_t__ edns_known_options_num; int * edns_known_options; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct module_env* VAR_0)
{
 FUNC_0(VAR_0->edns_known_options);
 VAR_0->edns_known_options = ((void*)0);
 VAR_0->edns_known_options_num = 0;
}
