
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prof_kind; int prof_cyclic; } ;
typedef TYPE_1__ profile_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2, dtrace_id_t VAR_3, void *VAR_4)
{
 profile_probe_t *VAR_5 = VAR_4;

 if (VAR_5->prof_kind == VAR_1) {
  FUNC_0(FUNC_1(&VAR_5->prof_cyclic));
  FUNC_3(&VAR_5->prof_cyclic);
  FUNC_2(&VAR_5->prof_cyclic);
 } else {
  FUNC_0(VAR_5->prof_kind == VAR_0);
  FUNC_4(VAR_5);
 }
}
