
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1 (struct type *VAR_2)
{
  enum type_code VAR_3 = FUNC_0 (VAR_2);

  return (VAR_3 == VAR_0
          || VAR_3 == VAR_1);
}
