
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct reserve_info {int dummy; } ;
struct node {int dummy; } ;
struct dt_info {unsigned int dtsflags; int boot_cpuid_phys; struct node* dt; struct reserve_info* reservelist; } ;


 struct dt_info* FUNC_0 (int) ;

struct dt_info *FUNC_1(unsigned int VAR_0,
         struct reserve_info *VAR_1,
         struct node *VAR_2, uint32_t VAR_3)
{
 struct dt_info *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4));
 VAR_4->dtsflags = VAR_0;
 VAR_4->reservelist = VAR_1;
 VAR_4->dt = VAR_2;
 VAR_4->boot_cpuid_phys = VAR_3;

 return VAR_4;
}
