
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct malloc_type_stats {unsigned long mts_memfreed; int mts_numfrees; } ;
struct malloc_type_internal {scalar_t__* mti_probes; int mti_stats; } ;
struct malloc_type {struct malloc_type_internal* ks_handle; } ;
typedef int dtrace_malloc_probe ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct malloc_type_stats* FUNC_3 (int ) ;

void
FUNC_4(struct malloc_type *VAR_2, unsigned long VAR_3)
{
 struct malloc_type_internal *VAR_4;
 struct malloc_type_stats *VAR_5;

 FUNC_1();
 VAR_4 = VAR_2->ks_handle;
 VAR_5 = FUNC_3(VAR_4->mti_stats);
 VAR_5->mts_memfreed += VAR_3;
 VAR_5->mts_numfrees++;
 FUNC_2();
}
