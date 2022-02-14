
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum arch_type { ____Placeholder_arch_type } arch_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static enum arch_type
FUNC_1 (const char *VAR_3)
{
  if (FUNC_0 (VAR_3, "i386") == 0 || FUNC_0 (VAR_3, "ia32") == 0)
    return VAR_0;

  if (FUNC_0 (VAR_3, "x86_64") == 0 || FUNC_0 (VAR_3, "x86-64") == 0)
    return VAR_2;

  return VAR_1;
}
