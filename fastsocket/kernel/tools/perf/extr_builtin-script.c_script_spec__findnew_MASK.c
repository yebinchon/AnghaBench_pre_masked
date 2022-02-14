
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scripting_ops {int dummy; } ;
struct script_spec {int dummy; } ;


 int FUNC_0 (struct script_spec*) ;
 struct script_spec* FUNC_1 (char const*) ;
 struct script_spec* FUNC_2 (char const*,struct scripting_ops*) ;

__attribute__((used)) static struct script_spec *FUNC_3(const char *VAR_0,
      struct scripting_ops *VAR_1)
{
 struct script_spec *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2);

 return VAR_2;
}
