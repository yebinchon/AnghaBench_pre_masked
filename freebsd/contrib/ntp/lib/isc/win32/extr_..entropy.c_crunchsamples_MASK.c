
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nsamples; int * extra; int * samples; scalar_t__ last_delta2; scalar_t__ last_delta; int last_time; } ;
typedef TYPE_1__ sample_queue_t ;
typedef int isc_entropy_t ;


 int FUNC_0 (int *,int *,int,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static unsigned int
FUNC_2(isc_entropy_t *VAR_0, sample_queue_t *VAR_1) {
 unsigned int VAR_2;
 unsigned int VAR_3;

 if (VAR_1->nsamples < 6)
  return (0);

 VAR_3 = 0;
 VAR_1->last_time = VAR_1->samples[0];
 VAR_1->last_delta = 0;
 VAR_1->last_delta2 = 0;





 for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
  (void)FUNC_1(VAR_1, VAR_1->samples[VAR_2]);

 for (VAR_2 = 4; VAR_2 < VAR_1->nsamples; VAR_2++)
  VAR_3 += FUNC_1(VAR_1, VAR_1->samples[VAR_2]);

 FUNC_0(VAR_0, VAR_1->samples, VAR_1->nsamples * 4, VAR_3);
 FUNC_0(VAR_0, VAR_1->extra, VAR_1->nsamples * 4, 0);





 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  VAR_1->samples[VAR_2] = VAR_1->samples[VAR_1->nsamples - 4 + VAR_2];
  VAR_1->extra[VAR_2] = VAR_1->extra[VAR_1->nsamples - 4 + VAR_2];
 }

 VAR_1->nsamples = 4;

 return (VAR_3);
}
