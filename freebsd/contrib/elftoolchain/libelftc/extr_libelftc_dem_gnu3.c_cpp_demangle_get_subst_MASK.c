
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; int * container; } ;
struct cpp_demangle_data {int cur; TYPE_1__ subst; } ;


 int FUNC_0 (struct cpp_demangle_data*,int ,size_t) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct cpp_demangle_data *VAR_0, size_t VAR_1)
{
 size_t VAR_2;

 if (VAR_0 == ((void*)0) || VAR_0->subst.size <= VAR_1)
  return (0);
 if ((VAR_2 = FUNC_1(VAR_0->subst.container[VAR_1])) == 0)
  return (0);
 if (!FUNC_0(VAR_0, VAR_0->subst.container[VAR_1], VAR_2))
  return (0);


 ++VAR_0->cur;

 return (1);
}
