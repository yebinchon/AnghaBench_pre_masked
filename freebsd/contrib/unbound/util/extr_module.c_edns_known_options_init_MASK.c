
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {struct edns_known_option* edns_known_options; scalar_t__ edns_known_options_num; } ;
struct edns_known_option {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

int
FUNC_1(struct module_env* VAR_1)
{
 VAR_1->edns_known_options_num = 0;
 VAR_1->edns_known_options = (struct edns_known_option*)FUNC_0(
  VAR_0, sizeof(struct edns_known_option));
 if(!VAR_1->edns_known_options) return 0;
 return 1;
}
