
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_field {int flags; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct format_field *VAR_1)
{
 if ((VAR_1->flags & VAR_0) &&
     (FUNC_0(VAR_1->type, "char") || FUNC_0(VAR_1->type, "u8") ||
      FUNC_0(VAR_1->type, "s8")))
  return 1;

 return 0;
}
