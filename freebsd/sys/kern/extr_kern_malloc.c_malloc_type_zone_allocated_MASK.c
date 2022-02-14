
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct malloc_type_stats {unsigned long mts_memalloced; int mts_size; int mts_numallocs; } ;
struct malloc_type_internal {scalar_t__* mti_probes; int mti_stats; } ;
struct malloc_type {struct malloc_type_internal* ks_handle; } ;
typedef int dtrace_malloc_probe ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct malloc_type_stats* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct malloc_type *VAR_2, unsigned long VAR_3,
    int VAR_4)
{
 struct malloc_type_internal *VAR_5;
 struct malloc_type_stats *VAR_6;

 FUNC_1();
 VAR_5 = VAR_2->ks_handle;
 VAR_6 = FUNC_3(VAR_5->mti_stats);
 if (VAR_3 > 0) {
  VAR_6->mts_memalloced += VAR_3;
  VAR_6->mts_numallocs++;
 }
 if (VAR_4 != -1)
  VAR_6->mts_size |= 1 << VAR_4;
 FUNC_2();
}
