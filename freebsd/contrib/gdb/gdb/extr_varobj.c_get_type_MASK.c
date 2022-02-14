
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {struct type* type; } ;
struct type {int dummy; } ;


 struct type* FUNC_0 (struct type*) ;

__attribute__((used)) static struct type *
FUNC_1 (struct varobj *VAR_0)
{
  struct type *VAR_1;
  VAR_1 = VAR_0->type;

  if (VAR_1 != ((void*)0))
    VAR_1 = FUNC_0 (VAR_1);

  return VAR_1;
}
