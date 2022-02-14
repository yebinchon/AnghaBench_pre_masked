
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t uint32_t ;
struct ctl_lun {int ** pr_keys; } ;


 size_t VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_0(struct ctl_lun *VAR_1, uint32_t VAR_2)
{
 uint64_t *VAR_3;

 VAR_3 = VAR_1->pr_keys[VAR_2/VAR_0];
 if (VAR_3 == ((void*)0))
  return (0);
 return (VAR_3[VAR_2 % VAR_0]);
}
