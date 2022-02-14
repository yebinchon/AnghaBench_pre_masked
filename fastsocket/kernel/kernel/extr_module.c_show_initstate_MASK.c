
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_attribute {int dummy; } ;
struct module {int state; } ;
typedef int ssize_t ;





 int FUNC_0 (char*,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_1(struct module_attribute *VAR_0,
      struct module *VAR_1, char *VAR_2)
{
 const char *VAR_3 = "unknown";

 switch (VAR_1->state) {
 case 128:
  VAR_3 = "live";
  break;
 case 130:
  VAR_3 = "coming";
  break;
 case 129:
  VAR_3 = "going";
  break;
 }
 return FUNC_0(VAR_2, "%s\n", VAR_3);
}
