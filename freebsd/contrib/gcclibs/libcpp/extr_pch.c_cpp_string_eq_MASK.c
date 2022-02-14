
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_string {scalar_t__ len; int text; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct cpp_string *VAR_2 = (const struct cpp_string *) VAR_0;
  const struct cpp_string *VAR_3 = (const struct cpp_string *) VAR_1;
  return (VAR_2->len == VAR_3->len
   && FUNC_0 (VAR_2->text, VAR_3->text, VAR_2->len) == 0);
}
