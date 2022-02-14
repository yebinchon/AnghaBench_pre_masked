
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct pt_config {int cpuid_0x15_eax; int cpuid_0x15_ebx; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(uint64_t *VAR_2, uint64_t VAR_3,
     const struct pt_config *VAR_4)
{
 uint32_t VAR_5, VAR_6;

 if (!VAR_2 || !VAR_4)
  return -VAR_1;

 VAR_5 = VAR_4->cpuid_0x15_eax;
 VAR_6 = VAR_4->cpuid_0x15_ebx;


 if (!VAR_5 || !VAR_6)
  return -VAR_0;

 *VAR_2 = (VAR_3 * VAR_6) / VAR_5;
 return 0;
}
