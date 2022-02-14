
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int samplequeue; int start_called; int arg; int (* stopfunc ) (TYPE_3__*,int ) ;} ;
struct TYPE_12__ {int samplequeue; } ;
struct TYPE_13__ {TYPE_5__ callback; TYPE_1__ sample; int usocket; int file; } ;
struct TYPE_14__ {int type; TYPE_2__ sources; int bad; TYPE_4__* ent; } ;
typedef TYPE_3__ isc_entropysource_t ;
struct TYPE_15__ {scalar_t__ nsources; int mctx; int * nextsource; int sources; } ;
typedef TYPE_4__ isc_entropy_t ;
typedef TYPE_5__ isc_cbsource_t ;






 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_3__*,int) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_8(isc_entropysource_t **VAR_2) {
 isc_entropysource_t *VAR_3;
 isc_entropy_t *VAR_4;
 isc_cbsource_t *VAR_5;

 VAR_3 = *VAR_2;
 *VAR_2 = ((void*)0);
 VAR_4 = VAR_3->ent;

 FUNC_0(VAR_4->sources, VAR_3, VAR_1);
 VAR_4->nextsource = ((void*)0);
 FUNC_1(VAR_4->nsources > 0);
 VAR_4->nsources--;

 switch (VAR_3->type) {
 case 130:
  if (! VAR_3->bad)
   FUNC_2(&VAR_3->sources.file);
  break;
 case 128:
  if (! VAR_3->bad)
   FUNC_3(&VAR_3->sources.usocket);
  break;
 case 129:
  FUNC_6(VAR_4, &VAR_3->sources.sample.samplequeue);
  break;
 case 131:
  VAR_5 = &VAR_3->sources.callback;
  if (VAR_5->start_called && VAR_5->stopfunc != ((void*)0)) {
   VAR_5->stopfunc(VAR_3, VAR_5->arg);
   VAR_5->start_called = VAR_0;
  }
  FUNC_6(VAR_4, &VAR_5->samplequeue);
  break;
 }

 FUNC_5(VAR_3, 0, sizeof(isc_entropysource_t));

 FUNC_4(VAR_4->mctx, VAR_3, sizeof(isc_entropysource_t));
}
