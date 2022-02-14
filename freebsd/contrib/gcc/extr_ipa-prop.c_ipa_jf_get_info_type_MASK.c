
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union parameter_info {int dummy; } parameter_info ;
struct ipa_jump_func {union parameter_info info_type; } ;



union parameter_info *
FUNC_0 (struct ipa_jump_func *VAR_0)
{
  return &(VAR_0->info_type);
}
