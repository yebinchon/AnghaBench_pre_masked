
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int osm_log_t ;
struct TYPE_11__ {int balance_limit; scalar_t__ vl_min; TYPE_1__* p_osm; } ;
typedef TYPE_2__ lash_t ;
struct TYPE_10__ {int log; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(void *VAR_0)
{
 lash_t *VAR_1 = VAR_0;
 osm_log_t *VAR_2 = &VAR_1->p_osm->log;
 int VAR_3 = 0;

 FUNC_0(VAR_2);

 VAR_1->balance_limit = 6;


 FUNC_5(VAR_1);

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  goto Exit;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  goto Exit;

 FUNC_8(VAR_1);

 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  goto Exit;

 FUNC_7(VAR_1);

Exit:
 if (VAR_1->vl_min)
  FUNC_3(VAR_1);
 FUNC_1(VAR_2);

 return VAR_3;
}
