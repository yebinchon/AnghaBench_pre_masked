
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* dtps_provide ) (void*,int *) ;} ;
struct TYPE_11__ {TYPE_2__ dtpv_pops; void* dtpv_arg; struct TYPE_11__* dtpv_next; } ;
typedef TYPE_3__ dtrace_provider_t ;
typedef int dtrace_probedesc_t ;
typedef scalar_t__ dtrace_genid_t ;
struct TYPE_12__ {int dten_ndesc; TYPE_1__** dten_desc; struct TYPE_12__* dten_next; } ;
typedef TYPE_4__ dtrace_enabling_t ;
struct TYPE_9__ {int dted_probe; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_3__*) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*,int *) ;

__attribute__((used)) static void
FUNC_6(dtrace_provider_t *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 dtrace_probedesc_t VAR_8;
 dtrace_genid_t VAR_9;

 FUNC_0(FUNC_1(&VAR_0));
 FUNC_0(FUNC_1(&VAR_2));

 if (VAR_5 == ((void*)0)) {
  VAR_7 = 1;
  VAR_5 = VAR_1;
 }

 do {
  dtrace_enabling_t *VAR_10;
  void *VAR_11 = VAR_5->dtpv_arg;

retry:
  VAR_9 = VAR_4;
  for (VAR_10 = VAR_3; VAR_10 != ((void*)0);
      VAR_10 = VAR_10->dten_next) {
   for (VAR_6 = 0; VAR_6 < VAR_10->dten_ndesc; VAR_6++) {
    VAR_8 = VAR_10->dten_desc[VAR_6]->dted_probe;
    FUNC_4(&VAR_0);
    VAR_5->dtpv_pops.dtps_provide(VAR_11, &VAR_8);
    FUNC_3(&VAR_0);





    if (VAR_9 != VAR_4)
     goto retry;
   }
  }
 } while (VAR_7 && (VAR_5 = VAR_5->dtpv_next) != ((void*)0));

 FUNC_4(&VAR_0);
 FUNC_2(((void*)0), VAR_7 ? ((void*)0) : VAR_5);
 FUNC_3(&VAR_0);
}
