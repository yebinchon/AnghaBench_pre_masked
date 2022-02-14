
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kparam_string {int maxlen; int string; } ;
struct kernel_param {struct kparam_string* str; } ;


 int FUNC_0 (char*,int ,int ) ;

int FUNC_1(char *VAR_0, struct kernel_param *VAR_1)
{
 const struct kparam_string *VAR_2 = VAR_1->str;
 return FUNC_0(VAR_0, VAR_2->string, VAR_2->maxlen);
}
