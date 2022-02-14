
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_9__ {TYPE_2__* lctx; } ;
typedef TYPE_1__ isc_logconfig_t ;
struct TYPE_10__ {int lock; TYPE_1__* logconfig; } ;
typedef TYPE_2__ isc_log_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__**) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

isc_result_t
FUNC_7(isc_log_t *VAR_1, isc_logconfig_t *VAR_2) {
 isc_logconfig_t *VAR_3;
 isc_result_t VAR_4;

 FUNC_1(FUNC_4(VAR_1));
 FUNC_1(FUNC_3(VAR_2));
 FUNC_1(VAR_2->lctx == VAR_1);






 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 != VAR_0)
  return (VAR_4);

 FUNC_0(&VAR_1->lock);

 VAR_3 = VAR_1->logconfig;
 VAR_1->logconfig = VAR_2;

 FUNC_2(&VAR_1->lock);

 FUNC_5(&VAR_3);

 return (VAR_0);
}
