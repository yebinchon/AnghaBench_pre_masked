
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct reserve_info {int dummy; } ;
struct node {int dummy; } ;
struct boot_info {int boot_cpuid_phys; struct node* dt; struct reserve_info* reservelist; } ;


 struct boot_info* FUNC_0 (int) ;

struct boot_info *FUNC_1(struct reserve_info *VAR_0,
      struct node *VAR_1, uint32_t VAR_2)
{
 struct boot_info *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 VAR_3->reservelist = VAR_0;
 VAR_3->dt = VAR_1;
 VAR_3->boot_cpuid_phys = VAR_2;

 return VAR_3;
}
