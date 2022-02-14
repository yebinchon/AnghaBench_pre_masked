
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ start_called; int arg; int (* stopfunc ) (TYPE_2__*,int ) ;} ;
struct TYPE_11__ {TYPE_4__ callback; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_1__ sources; } ;
typedef TYPE_2__ isc_entropysource_t ;
struct TYPE_13__ {int lock; int sources; } ;
typedef TYPE_3__ isc_entropy_t ;
typedef TYPE_4__ isc_cbsource_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*,int ) ;

void
FUNC_7(isc_entropy_t *VAR_3) {
 isc_entropysource_t *VAR_4;
 isc_cbsource_t *VAR_5;

 FUNC_3(FUNC_5(VAR_3));

 FUNC_2(&VAR_3->lock);

 VAR_4 = FUNC_0(VAR_3->sources);
 while (VAR_4 != ((void*)0)) {
  if (VAR_4->type == VAR_0) {
   VAR_5 = &VAR_4->sources.callback;
   if (VAR_5->start_called && VAR_5->stopfunc != ((void*)0)) {
    VAR_5->stopfunc(VAR_4, VAR_5->arg);
    VAR_5->start_called = VAR_1;
   }
  }

  VAR_4 = FUNC_1(VAR_4, VAR_2);
 }

 FUNC_4(&VAR_3->lock);
}
