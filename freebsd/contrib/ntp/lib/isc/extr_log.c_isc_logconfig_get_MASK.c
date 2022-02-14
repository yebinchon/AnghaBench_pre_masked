
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_logconfig_t ;
struct TYPE_4__ {int * logconfig; } ;
typedef TYPE_1__ isc_log_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

isc_logconfig_t *
FUNC_3(isc_log_t *VAR_0) {
 FUNC_1(FUNC_2(VAR_0));

 FUNC_0(VAR_0->logconfig != ((void*)0));

 return (VAR_0->logconfig);
}
