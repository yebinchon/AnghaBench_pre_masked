
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_appctx_t ;
struct TYPE_6__ {int (* ctxshutdown ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

isc_result_t
FUNC_3(isc_appctx_t *VAR_0) {
 FUNC_1(FUNC_0(VAR_0));

 return (VAR_0->methods->ctxshutdown(VAR_0));
}
