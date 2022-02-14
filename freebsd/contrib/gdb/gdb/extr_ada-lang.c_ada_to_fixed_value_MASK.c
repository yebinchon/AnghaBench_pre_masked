
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int CORE_ADDR ;


 struct type* FUNC_0 (struct type*,char*,int ,int *) ;
 struct value* FUNC_1 (struct type*,char*,int ) ;

struct value *
FUNC_2 (struct type *VAR_0, char *VAR_1, CORE_ADDR VAR_2,
      struct value *VAR_3)
{
  struct type *VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2, ((void*)0));
  if (VAR_4 == VAR_0 && VAR_3 != ((void*)0))
    return VAR_3;
  else
    return FUNC_1 (VAR_4, VAR_1, VAR_2);
}
