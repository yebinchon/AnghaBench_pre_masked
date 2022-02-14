
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {size_t size; int * container; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static size_t
FUNC_2(const struct vector_str *VAR_0)
{
 size_t VAR_1, VAR_2 = 0;

 if (VAR_0 == ((void*)0))
  return (0);

 FUNC_0(VAR_0->size > 0);

 for (VAR_1 = 0; VAR_1 < VAR_0->size; ++VAR_1)
  VAR_2 += FUNC_1(VAR_0->container[VAR_1]);

 return (VAR_2);
}
