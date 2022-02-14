
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_info_def {int pt_vars; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct ptr_info_def *VAR_2 = (const struct ptr_info_def *) VAR_0;
  const struct ptr_info_def *VAR_3 = (const struct ptr_info_def *) VAR_1;
  return FUNC_0 (VAR_2->pt_vars, VAR_3->pt_vars);
}
