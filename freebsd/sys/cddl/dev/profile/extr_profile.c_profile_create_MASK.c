
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int prof_kind; int prof_id; int prof_cyclic; scalar_t__ prof_interval; int prof_name; } ;
typedef TYPE_1__ profile_probe_t ;
typedef scalar_t__ hrtime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *,int *,char*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int *,int *,char*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7(hrtime_t VAR_7, char *VAR_8, int VAR_9)
{
 profile_probe_t *VAR_10;

 if (VAR_7 < VAR_4)
  return;

 if (FUNC_3(VAR_3, ((void*)0), ((void*)0), VAR_8) != 0)
  return;

 FUNC_0(&VAR_6, 1);
 if (VAR_6 > VAR_5) {
  FUNC_0(&VAR_6, -1);
  return;
 }

 VAR_10 = FUNC_4(sizeof (profile_probe_t), VAR_1);
 (void) FUNC_6(VAR_10->prof_name, VAR_8);




 VAR_10->prof_interval = FUNC_5(VAR_7);
 FUNC_1(&VAR_10->prof_cyclic, 1);

 VAR_10->prof_kind = VAR_9;
 VAR_10->prof_id = FUNC_2(VAR_3,
     ((void*)0), ((void*)0), VAR_8,
     VAR_2, VAR_10);
}
