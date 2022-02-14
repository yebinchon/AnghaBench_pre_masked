
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (struct type*) ;

int
FUNC_3 (struct type *VAR_3)
{
  const char *VAR_4 = FUNC_2 (VAR_3);
  return
    VAR_4 != ((void*)0)
    && (FUNC_1 (VAR_3) == VAR_0
 || FUNC_1 (VAR_3) == VAR_1
 || FUNC_1 (VAR_3) == VAR_2)
    && (FUNC_0 (VAR_4, "character") || FUNC_0 (VAR_4, "wide_character")
 || FUNC_0 (VAR_4, "unsigned char"));
}
