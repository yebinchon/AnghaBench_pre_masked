
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct value*) ;
 struct value* FUNC_1 (struct value*,int ,struct type*) ;
 struct type* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct value *
FUNC_4 (struct value *VAR_0)
{
  struct type *VAR_1 = FUNC_2 (FUNC_0 (VAR_0));

  if (VAR_1 == ((void*)0))
    {
      FUNC_3 ("can't unpack array");
      return ((void*)0);
    }
  else
    return FUNC_1 (VAR_0, 0, VAR_1);
}
