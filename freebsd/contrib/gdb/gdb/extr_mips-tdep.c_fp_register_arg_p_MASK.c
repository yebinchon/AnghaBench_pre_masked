
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct type*,int ) ;
 int FUNC_2 (struct type*) ;

__attribute__((used)) static int
FUNC_3 (enum type_code VAR_6, struct type *VAR_7)
{
  return ((VAR_6 == VAR_3
    || (VAR_0
        && (VAR_6 == VAR_4
     || VAR_6 == VAR_5)
        && FUNC_2 (VAR_7) == 1
        && FUNC_0 (FUNC_1 (VAR_7, 0)) == VAR_3))
   && VAR_2 != VAR_1);
}
