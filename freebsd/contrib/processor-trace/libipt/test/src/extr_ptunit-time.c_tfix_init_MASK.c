
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int cpuid_0x15_eax; int cpuid_0x15_ebx; int mtc_freq; } ;
struct time_fixture {int time; int tcal; TYPE_1__ config; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 struct ptunit_result FUNC_4 () ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct time_fixture *VAR_1)
{
 FUNC_0(&VAR_1->config, 0, sizeof(VAR_1->config));
 VAR_1->config.size = sizeof(VAR_1->config);
 VAR_1->config.cpuid_0x15_eax = 2;
 VAR_1->config.cpuid_0x15_ebx = 1;
 VAR_1->config.mtc_freq = 4;

 FUNC_1(&VAR_1->tcal);
 FUNC_2(&VAR_1->tcal, 0x2ull << VAR_0);

 FUNC_3(&VAR_1->time);

 return FUNC_4();
}
