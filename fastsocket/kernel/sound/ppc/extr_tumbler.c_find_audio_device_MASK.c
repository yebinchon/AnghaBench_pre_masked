
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,char*) ;
 struct device_node* FUNC_1 (struct device_node*,struct device_node*) ;
 char* FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static struct device_node *FUNC_5(const char *VAR_0)
{
 struct device_node *VAR_1;
 struct device_node *VAR_2;

 VAR_1 = FUNC_0(((void*)0), "gpio");
 if (! VAR_1)
  return ((void*)0);

 for (VAR_2 = FUNC_1(VAR_1, ((void*)0)); VAR_2;
   VAR_2 = FUNC_1(VAR_1, VAR_2)) {
  const char *VAR_3 = FUNC_2(VAR_2, "audio-gpio", ((void*)0));
  if (VAR_3 && FUNC_4(VAR_3, VAR_0) == 0)
   break;
 }
 FUNC_3(VAR_1);
 return VAR_2;
}
