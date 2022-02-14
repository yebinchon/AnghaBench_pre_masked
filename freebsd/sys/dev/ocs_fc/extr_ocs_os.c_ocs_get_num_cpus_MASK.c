
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ num_cpus; } ;
typedef TYPE_1__ ocs_cpuinfo_t ;


 int FUNC_0 (TYPE_1__*) ;

uint32_t
FUNC_1(void)
{
 static ocs_cpuinfo_t VAR_0;

 if (VAR_0.num_cpus == 0) {
  FUNC_0(&VAR_0);
 }
 return VAR_0.num_cpus;
}
