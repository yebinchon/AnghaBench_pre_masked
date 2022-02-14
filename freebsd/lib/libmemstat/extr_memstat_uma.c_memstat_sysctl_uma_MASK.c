
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uma_type_header {int uth_allocs; int uth_frees; int uth_size; int uth_limit; int uth_zone_flags; scalar_t__ uth_keg_free; scalar_t__ uth_zone_free; int uth_rsize; int uth_xdomain; int uth_sleeps; int uth_fails; int uth_name; } ;
struct uma_stream_header {scalar_t__ ush_version; int ush_maxcpus; int ush_count; } ;
struct uma_percpu_stat {scalar_t__ ups_frees; scalar_t__ ups_allocs; scalar_t__ ups_cache_free; } ;
struct memory_type_list {void* mtl_error; int mtl_list; } ;
struct memory_type {int mt_numallocs; int mt_numfrees; int mt_size; int mt_memalloced; int mt_memfreed; int mt_bytes; int mt_countlimit; int mt_byteslimit; int mt_count; scalar_t__ mt_zonefree; int mt_free; scalar_t__ mt_kegfree; int mt_rsize; TYPE_1__* mt_percpu_cache; int mt_xdomain; int mt_sleeps; int mt_failures; } ;
typedef int maxid ;
typedef int count ;
struct TYPE_2__ {scalar_t__ mtp_free; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct memory_type* FUNC_1 (struct memory_type_list*,int ,int ,int) ;
 int FUNC_2 (struct memory_type*,int) ;
 int FUNC_3 (struct memory_type_list*) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 struct memory_type* FUNC_6 (struct memory_type_list*,int ,int ) ;
 scalar_t__ FUNC_7 (char*,...) ;

int
FUNC_8(struct memory_type_list *VAR_11, int VAR_12)
{
 struct uma_stream_header *VAR_13;
 struct uma_type_header *VAR_14;
 struct uma_percpu_stat *VAR_15;
 struct memory_type *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 char *VAR_23, *VAR_24;
 size_t VAR_25;

 VAR_18 = FUNC_0(&VAR_11->mtl_list);
retry:
 VAR_25 = sizeof(VAR_22);
 if (FUNC_7("kern.smp.maxid", &VAR_22, &VAR_25, ((void*)0), 0) < 0) {
  if (VAR_10 == VAR_1 || VAR_10 == VAR_3)
   VAR_11->mtl_error = VAR_6;
  else
   VAR_11->mtl_error = VAR_4;
  return (-1);
 }
 if (VAR_25 != sizeof(VAR_22)) {
  VAR_11->mtl_error = VAR_4;
  return (-1);
 }

 VAR_25 = sizeof(VAR_17);
 if (FUNC_7("vm.zone_count", &VAR_17, &VAR_25, ((void*)0), 0) < 0) {
  if (VAR_10 == VAR_1 || VAR_10 == VAR_3)
   VAR_11->mtl_error = VAR_6;
  else
   VAR_11->mtl_error = VAR_7;
  return (-1);
 }
 if (VAR_25 != sizeof(VAR_17)) {
  VAR_11->mtl_error = VAR_4;
  return (-1);
 }

 VAR_25 = sizeof(*VAR_14) + VAR_17 * (sizeof(*VAR_14) + sizeof(*VAR_15) *
     (VAR_22 + 1));

 VAR_23 = FUNC_5(VAR_25);
 if (VAR_23 == ((void*)0)) {
  VAR_11->mtl_error = VAR_5;
  return (-1);
 }

 if (FUNC_7("vm.zone_stats", VAR_23, &VAR_25, ((void*)0), 0) < 0) {




  if (VAR_10 == VAR_2) {
   FUNC_4(VAR_23);
   goto retry;
  }
  if (VAR_10 == VAR_1 || VAR_10 == VAR_3)
   VAR_11->mtl_error = VAR_6;
  else
   VAR_11->mtl_error = VAR_7;
  FUNC_4(VAR_23);
  return (-1);
 }

 if (VAR_25 == 0) {
  FUNC_4(VAR_23);
  return (0);
 }

 if (VAR_25 < sizeof(*VAR_13)) {
  VAR_11->mtl_error = VAR_7;
  FUNC_4(VAR_23);
  return (-1);
 }
 VAR_24 = VAR_23;
 VAR_13 = (struct uma_stream_header *)VAR_24;
 VAR_24 += sizeof(*VAR_13);

 if (VAR_13->ush_version != VAR_8) {
  VAR_11->mtl_error = VAR_7;
  FUNC_4(VAR_23);
  return (-1);
 }






 VAR_21 = VAR_13->ush_maxcpus;
 VAR_17 = VAR_13->ush_count;
 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  VAR_14 = (struct uma_type_header *)VAR_24;
  VAR_24 += sizeof(*VAR_14);

  if (VAR_18 == 0) {
   VAR_16 = FUNC_6(VAR_11, VAR_0,
       VAR_14->uth_name);
  } else
   VAR_16 = ((void*)0);
  if (VAR_16 == ((void*)0))
   VAR_16 = FUNC_1(VAR_11, VAR_0,
       VAR_14->uth_name, VAR_22 + 1);
  if (VAR_16 == ((void*)0)) {
   FUNC_3(VAR_11);
   FUNC_4(VAR_23);
   VAR_11->mtl_error = VAR_5;
   return (-1);
  }




  FUNC_2(VAR_16, VAR_22 + 1);

  VAR_16->mt_numallocs = VAR_14->uth_allocs;
  VAR_16->mt_numfrees = VAR_14->uth_frees;
  VAR_16->mt_failures = VAR_14->uth_fails;
  VAR_16->mt_sleeps = VAR_14->uth_sleeps;
  VAR_16->mt_xdomain = VAR_14->uth_xdomain;

  for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
   VAR_15 = (struct uma_percpu_stat *)VAR_24;
   VAR_24 += sizeof(*VAR_15);

   VAR_16->mt_percpu_cache[VAR_20].mtp_free =
       VAR_15->ups_cache_free;
   VAR_16->mt_free += VAR_15->ups_cache_free;
   VAR_16->mt_numallocs += VAR_15->ups_allocs;
   VAR_16->mt_numfrees += VAR_15->ups_frees;
  }







  if (VAR_16->mt_numallocs < VAR_16->mt_numfrees)
   VAR_16->mt_numallocs = VAR_16->mt_numfrees;

  VAR_16->mt_size = VAR_14->uth_size;
  VAR_16->mt_rsize = VAR_14->uth_rsize;
  VAR_16->mt_memalloced = VAR_16->mt_numallocs * VAR_14->uth_size;
  VAR_16->mt_memfreed = VAR_16->mt_numfrees * VAR_14->uth_size;
  VAR_16->mt_bytes = VAR_16->mt_memalloced - VAR_16->mt_memfreed;
  VAR_16->mt_countlimit = VAR_14->uth_limit;
  VAR_16->mt_byteslimit = VAR_14->uth_limit * VAR_14->uth_size;

  VAR_16->mt_count = VAR_16->mt_numallocs - VAR_16->mt_numfrees;
  VAR_16->mt_zonefree = VAR_14->uth_zone_free;






  if (!(VAR_14->uth_zone_flags & VAR_9)) {
   VAR_16->mt_kegfree = VAR_14->uth_keg_free;
   VAR_16->mt_free += VAR_16->mt_kegfree;
  }
  VAR_16->mt_free += VAR_16->mt_zonefree;
 }

 FUNC_4(VAR_23);

 return (0);
}
