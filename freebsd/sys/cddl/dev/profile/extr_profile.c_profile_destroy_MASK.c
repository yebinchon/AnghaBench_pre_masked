
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prof_cyclic; int * prof_pcpus; } ;
typedef TYPE_1__ profile_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, dtrace_id_t VAR_3, void *VAR_4)
{
 profile_probe_t *VAR_5 = VAR_4;




 FUNC_0(!FUNC_2(&VAR_5->prof_cyclic) && VAR_5->prof_pcpus == ((void*)0));

 FUNC_3(VAR_5, sizeof (profile_probe_t));

 FUNC_0(VAR_1 >= 1);
 FUNC_1(&VAR_1, -1);
}
