
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;



 struct type* FUNC_2 (struct type*,struct value*,int ) ;
 struct type* FUNC_3 (struct type*,char*,int ,int *) ;
 struct type* FUNC_4 (struct type*,char*,int ,struct value*) ;

struct type *
FUNC_5 (struct type *VAR_0, char *VAR_1, CORE_ADDR VAR_2,
     struct value *VAR_3)
{
  FUNC_0 (VAR_0);
  switch (FUNC_1 (VAR_0))
    {
    default:
      return VAR_0;
    case 129:
      return FUNC_3 (VAR_0, VAR_1, VAR_2, ((void*)0));
    case 130:
      return FUNC_2 (VAR_0, VAR_3, 0);
    case 128:
      if (VAR_3 == ((void*)0))
 return VAR_0;
      else
 return FUNC_4 (VAR_0, VAR_1, VAR_2, VAR_3);
    }
}
