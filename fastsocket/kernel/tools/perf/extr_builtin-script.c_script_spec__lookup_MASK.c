
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scripting_ops {int dummy; } ;
struct script_spec {struct scripting_ops* ops; } ;


 struct script_spec* FUNC_0 (char const*) ;

__attribute__((used)) static struct scripting_ops *FUNC_1(const char *VAR_0)
{
 struct script_spec *VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return VAR_1->ops;
}
