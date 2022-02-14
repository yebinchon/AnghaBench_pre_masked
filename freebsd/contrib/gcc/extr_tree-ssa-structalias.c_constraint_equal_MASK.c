
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constraint {int rhs; int lhs; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1 (struct constraint VAR_0, struct constraint VAR_1)
{
  return FUNC_0 (VAR_0.lhs, VAR_1.lhs)
    && FUNC_0 (VAR_0.rhs, VAR_1.rhs);
}
