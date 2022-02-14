
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nsamples; void** extra; void** samples; } ;
typedef TYPE_1__ sample_queue_t ;
typedef void* isc_uint32_t ;
typedef int isc_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static isc_result_t
FUNC_0(sample_queue_t *VAR_4, isc_uint32_t VAR_5, isc_uint32_t VAR_6) {
 if (VAR_4->nsamples >= VAR_3)
  return (VAR_0);

 VAR_4->samples[VAR_4->nsamples] = VAR_5;
 VAR_4->extra[VAR_4->nsamples] = VAR_6;
 VAR_4->nsamples++;

 if (VAR_4->nsamples >= VAR_3)
  return (VAR_1);

 return (VAR_2);
}
