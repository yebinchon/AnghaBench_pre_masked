
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct pt_cpu {int family; int model; int stepping; int vendor; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;

int FUNC_2(struct pt_cpu *VAR_1)
{
 uint32_t VAR_2;
 uint16_t VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_1->vendor = FUNC_1();

 VAR_2 = FUNC_0();

 VAR_1->family = VAR_3 = (VAR_2>>8) & 0xf;
 if (VAR_3 == 0xf)
  VAR_1->family += (VAR_2>>20) & 0xf;

 VAR_1->model = (VAR_2>>4) & 0xf;
 if (VAR_3 == 0x6 || VAR_3 == 0xf)
  VAR_1->model += (VAR_2>>12) & 0xf0;

 VAR_1->stepping = (VAR_2>>0) & 0xf;

 return 0;
}
