
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
typedef enum noside { ____Placeholder_noside } noside ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*) ;
 char* FUNC_2 (struct type const*) ;
 int VAR_2 ;
 struct value* FUNC_3 (int ) ;
 struct symbol* FUNC_4 (char const*,char*,int *,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 struct value* FUNC_6 (struct symbol*,int ) ;

__attribute__((used)) static struct value *
FUNC_7 (const struct type *VAR_3,
      char *VAR_4,
      enum noside VAR_5)
{
  const char *VAR_6 = FUNC_2 (VAR_3);
  struct symbol *VAR_7;

  VAR_7 = FUNC_4 (VAR_6, VAR_4, ((void*)0),
        FUNC_5 (0), VAR_2,
        ((void*)0));

  if (VAR_7 == ((void*)0))
    return ((void*)0);
  else if ((VAR_5 == VAR_0)
    && (FUNC_0 (VAR_7) == VAR_1))
    return FUNC_3 (FUNC_1 (VAR_7));
  else
    return FUNC_6 (VAR_7, FUNC_5 (0));
}
