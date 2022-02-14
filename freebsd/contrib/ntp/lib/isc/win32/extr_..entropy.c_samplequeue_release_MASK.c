
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * extra; int * samples; } ;
typedef TYPE_1__ sample_queue_t ;
struct TYPE_6__ {int mctx; } ;
typedef TYPE_2__ isc_entropy_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_2(isc_entropy_t *VAR_1, sample_queue_t *VAR_2) {
 FUNC_0(VAR_2->samples != ((void*)0));
 FUNC_0(VAR_2->extra != ((void*)0));

 FUNC_1(VAR_1->mctx, VAR_2->samples, VAR_0 * 4);
 FUNC_1(VAR_1->mctx, VAR_2->extra, VAR_0 * 4);
 VAR_2->samples = ((void*)0);
 VAR_2->extra = ((void*)0);
}
