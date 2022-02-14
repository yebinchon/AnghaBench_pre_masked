
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset {int dummy; } ;
struct gdbarch {int dummy; } ;


 struct regset const VAR_0 ;
 struct regset const VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static const struct regset *
FUNC_1 (struct gdbarch *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
  if (FUNC_0 (VAR_3, ".reg") == 0)
    return (&VAR_1);
  if (FUNC_0 (VAR_3, ".reg2") == 0)
    return (&VAR_0);
  return (((void*)0));
}
