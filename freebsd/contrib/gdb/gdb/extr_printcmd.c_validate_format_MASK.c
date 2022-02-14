
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_data {scalar_t__ size; int count; char format; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1 (struct format_data VAR_0, char *VAR_1)
{
  if (VAR_0.size != 0)
    FUNC_0 ("Size letters are meaningless in \"%s\" command.", VAR_1);
  if (VAR_0.count != 1)
    FUNC_0 ("Item count other than 1 is meaningless in \"%s\" command.",
    VAR_1);
  if (VAR_0.format == 'i' || VAR_0.format == 's')
    FUNC_0 ("Format letter \"%c\" is meaningless in \"%s\" command.",
    VAR_0.format, VAR_1);
}
