
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 int FUNC_2 (struct value*) ;
 struct type* FUNC_3 (struct value*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static LONGEST
FUNC_6 (struct value *VAR_0)
{
  struct type *VAR_1 = FUNC_3 (VAR_0);




  if (FUNC_1 (VAR_1))
    return FUNC_5 (FUNC_2 (VAR_0),
                                     FUNC_0 (VAR_1));
  else
    return FUNC_4 (FUNC_2 (VAR_0),
                                   FUNC_0 (VAR_1));
}
