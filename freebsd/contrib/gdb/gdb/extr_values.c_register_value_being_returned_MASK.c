
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct regcache {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*,struct regcache*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 (struct value*) ;
 struct value* FUNC_4 (struct type*) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct type*,struct regcache*,int *,int *) ;
 int FUNC_7 (int ) ;

struct value *
FUNC_8 (struct type *VAR_3, struct regcache *VAR_4)
{
  struct value *VAR_5 = FUNC_4 (VAR_3);



  if (FUNC_2 (VAR_3) == VAR_1)
    return VAR_5;

  if (!FUNC_7 (VAR_2))
    {




      FUNC_0 (VAR_3);
      FUNC_1 (VAR_3, VAR_4, FUNC_3 (VAR_5));
      return VAR_5;
    }


  FUNC_5 (FUNC_6 (VAR_2, VAR_3,
        ((void*)0), ((void*)0), ((void*)0))
       == VAR_0);
  FUNC_6 (VAR_2, VAR_3, VAR_4,
   FUNC_3 (VAR_5) , ((void*)0) );
  return VAR_5;
}
