
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum noside { ____Placeholder_noside } noside ;


 char* FUNC_0 (struct type const*) ;
 int FUNC_1 (char*,char*,char*) ;
 struct value* FUNC_2 (struct type const*,char*,int) ;

__attribute__((used)) static struct value *
FUNC_3 (const struct type *VAR_0,
       char *VAR_1,
       enum noside VAR_2)
{
  struct value *VAR_3 = FUNC_2 (VAR_0, VAR_1,
          VAR_2);

  if (VAR_3 == ((void*)0))
    FUNC_1 ("No symbol \"%s\" in namespace \"%s\".", VAR_1,
    FUNC_0 (VAR_0));

  return VAR_3;
}
