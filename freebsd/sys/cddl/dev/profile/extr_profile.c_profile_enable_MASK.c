
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ prof_kind; scalar_t__ prof_expected; int prof_cyclic; scalar_t__ prof_interval; } ;
typedef TYPE_1__ profile_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__,int ,int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void *VAR_5, dtrace_id_t VAR_6, void *VAR_7)
{
 profile_probe_t *VAR_8 = VAR_7;

 if (VAR_8->prof_kind == VAR_3) {
  VAR_8->prof_expected = FUNC_3() + VAR_8->prof_interval;
  FUNC_1(&VAR_8->prof_cyclic,
      VAR_8->prof_expected, 0, VAR_4, VAR_8,
      VAR_1 | VAR_0);
 } else {
  FUNC_0(VAR_8->prof_kind == VAR_2);
  FUNC_2(VAR_8);
 }
}
