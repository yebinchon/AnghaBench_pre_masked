
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct type* FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct varobj*) ;

__attribute__((used)) static struct type *
FUNC_3 (struct varobj *VAR_2)
{
  struct type *VAR_3;

  VAR_3 = FUNC_2 (VAR_2);

  if (VAR_3 != ((void*)0) && (FUNC_0 (VAR_3) == VAR_0
         || FUNC_0 (VAR_3) == VAR_1))
    VAR_3 = FUNC_1 (VAR_3);

  return VAR_3;
}
