
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_5__ {int data; scalar_t__ level_type; int level; } ;
typedef TYPE_1__ cpuctl_cpuid_count_args_t ;
struct TYPE_6__ {int data; int level; } ;
typedef TYPE_2__ cpuctl_cpuid_args_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,TYPE_1__*,struct thread*) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, cpuctl_cpuid_args_t *VAR_1, struct thread *VAR_2)
{
 cpuctl_cpuid_count_args_t VAR_3;
 int VAR_4;

 VAR_3.level = VAR_1->level;

 VAR_3.level_type = 0;
 VAR_4 = FUNC_1(VAR_0, &VAR_3, VAR_2);
 FUNC_0(VAR_3.data, VAR_1->data, sizeof(VAR_1->data));
 return (VAR_4);
}
