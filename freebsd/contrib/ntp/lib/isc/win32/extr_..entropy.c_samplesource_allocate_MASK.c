
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nsamples; int * samples; int * extra; } ;
typedef TYPE_1__ sample_queue_t ;
typedef int isc_result_t ;
struct TYPE_6__ {int mctx; } ;
typedef TYPE_2__ isc_entropy_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static isc_result_t
FUNC_2(isc_entropy_t *VAR_3, sample_queue_t *VAR_4) {
 VAR_4->samples = FUNC_0(VAR_3->mctx, VAR_2 * 4);
 if (VAR_4->samples == ((void*)0))
  return (VAR_0);

 VAR_4->extra = FUNC_0(VAR_3->mctx, VAR_2 * 4);
 if (VAR_4->extra == ((void*)0)) {
  FUNC_1(VAR_3->mctx, VAR_4->samples, VAR_2 * 4);
  VAR_4->samples = ((void*)0);
  return (VAR_0);
 }

 VAR_4->nsamples = 0;

 return (VAR_1);
}
