
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prologue_value {scalar_t__ kind; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct prologue_value **VAR_1,
                  struct prologue_value **VAR_2)
{
  if ((*VAR_1)->kind == VAR_0
      && (*VAR_2)->kind != VAR_0)
    {
      struct prologue_value *VAR_3 = *VAR_1;
      *VAR_1 = *VAR_2;
      *VAR_2 = VAR_3;
    }
}
