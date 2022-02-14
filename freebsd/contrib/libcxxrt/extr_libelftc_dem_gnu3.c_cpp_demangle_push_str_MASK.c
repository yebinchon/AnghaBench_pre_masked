
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {scalar_t__ push_head; int output; int output_tmp; } ;


 int FUNC_0 (int *,char const*,size_t) ;

__attribute__((used)) static int
FUNC_1(struct cpp_demangle_data *VAR_0, const char *VAR_1,
    size_t VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
  return (0);

 if (VAR_0->push_head > 0)
  return (FUNC_0(&VAR_0->output_tmp, VAR_1, VAR_2));

 return (FUNC_0(&VAR_0->output, VAR_1, VAR_2));
}
