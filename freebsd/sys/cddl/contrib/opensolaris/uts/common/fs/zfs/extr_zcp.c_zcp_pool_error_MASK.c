
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zri_result; int zri_outnvl; int zri_state; } ;
typedef TYPE_1__ zcp_run_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_4(zcp_run_info_t *VAR_2, const char *VAR_3)
{
 VAR_2->zri_result = FUNC_0(VAR_0);
 FUNC_2(VAR_2->zri_state, 0);
 (void) FUNC_1(VAR_2->zri_state, "Could not open pool: %s",
     VAR_3);
 FUNC_3(VAR_2->zri_state, VAR_2->zri_outnvl,
     VAR_1, &VAR_2->zri_result);

}
