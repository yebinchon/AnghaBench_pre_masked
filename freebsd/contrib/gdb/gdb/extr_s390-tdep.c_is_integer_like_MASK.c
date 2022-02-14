
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1 (struct type *VAR_5)
{
  enum type_code VAR_6 = FUNC_0 (VAR_5);

  return (VAR_6 == VAR_3
          || VAR_6 == VAR_2
          || VAR_6 == VAR_4
          || VAR_6 == VAR_1
          || VAR_6 == VAR_0);
}
