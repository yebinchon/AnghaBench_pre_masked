
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_descriptor_rtx {scalar_t__ mode; int constant; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct constant_descriptor_rtx *VAR_2 = VAR_0;
  const struct constant_descriptor_rtx *VAR_3 = VAR_1;

  if (VAR_2->mode != VAR_3->mode)
    return 0;
  return FUNC_0 (VAR_2->constant, VAR_3->constant);
}
