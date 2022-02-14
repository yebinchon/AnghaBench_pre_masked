
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct memory_type_list {void* mtl_error; int mtl_list; } ;
struct memory_type {scalar_t__ mt_numfrees; scalar_t__ mt_numallocs; scalar_t__ mt_count; scalar_t__ mt_memfreed; scalar_t__ mt_memalloced; scalar_t__ mt_bytes; TYPE_1__* mt_percpu_alloc; int mt_sizemask; } ;
struct malloc_type_stream_header {scalar_t__ mtsh_version; int mtsh_maxcpus; int mtsh_count; } ;
struct malloc_type_stats {int mts_size; scalar_t__ mts_numfrees; scalar_t__ mts_numallocs; scalar_t__ mts_memfreed; scalar_t__ mts_memalloced; } ;
struct malloc_type_header {int mth_name; } ;
typedef int maxcpus ;
typedef int count ;
struct TYPE_2__ {int mtp_sizemask; scalar_t__ mtp_numfrees; scalar_t__ mtp_numallocs; scalar_t__ mtp_memfreed; scalar_t__ mtp_memalloced; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 struct memory_type* FUNC_1 (struct memory_type_list*,int ,int ,int) ;
 int FUNC_2 (struct memory_type*,int) ;
 int FUNC_3 (struct memory_type_list*) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 struct memory_type* FUNC_6 (struct memory_type_list*,int ,int ) ;
 scalar_t__ FUNC_7 (char*,...) ;

int
FUNC_8(struct memory_type_list *VAR_10, int VAR_11)
{
 struct malloc_type_stream_header *VAR_12;
 struct malloc_type_header *VAR_13;
 struct malloc_type_stats *VAR_14;
 struct memory_type *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 char *VAR_21, *VAR_22;
 size_t VAR_23;

 VAR_17 = FUNC_0(&VAR_10->mtl_list);
retry:
 VAR_23 = sizeof(VAR_20);
 if (FUNC_7("kern.smp.maxcpus", &VAR_20, &VAR_23, ((void*)0), 0) < 0) {
  if (VAR_9 == VAR_1 || VAR_9 == VAR_3)
   VAR_10->mtl_error = VAR_7;
  else
   VAR_10->mtl_error = VAR_5;
  return (-1);
 }
 if (VAR_23 != sizeof(VAR_20)) {
  VAR_10->mtl_error = VAR_5;
  return (-1);
 }

 VAR_23 = sizeof(VAR_16);
 if (FUNC_7("kern.malloc_count", &VAR_16, &VAR_23, ((void*)0), 0) < 0) {
  if (VAR_9 == VAR_1 || VAR_9 == VAR_3)
   VAR_10->mtl_error = VAR_7;
  else
   VAR_10->mtl_error = VAR_8;
  return (-1);
 }
 if (VAR_23 != sizeof(VAR_16)) {
  VAR_10->mtl_error = VAR_5;
  return (-1);
 }

 VAR_23 = sizeof(*VAR_13) + VAR_16 * (sizeof(*VAR_13) + sizeof(*VAR_14) *
     VAR_20);

 VAR_21 = FUNC_5(VAR_23);
 if (VAR_21 == ((void*)0)) {
  VAR_10->mtl_error = VAR_6;
  return (-1);
 }

 if (FUNC_7("kern.malloc_stats", VAR_21, &VAR_23, ((void*)0), 0) < 0) {




  if (VAR_9 == VAR_2) {
   FUNC_4(VAR_21);
   goto retry;
  }
  if (VAR_9 == VAR_1 || VAR_9 == VAR_3)
   VAR_10->mtl_error = VAR_7;
  else
   VAR_10->mtl_error = VAR_8;
  FUNC_4(VAR_21);
  return (-1);
 }

 if (VAR_23 == 0) {
  FUNC_4(VAR_21);
  return (0);
 }

 if (VAR_23 < sizeof(*VAR_12)) {
  VAR_10->mtl_error = VAR_8;
  FUNC_4(VAR_21);
  return (-1);
 }
 VAR_22 = VAR_21;
 VAR_12 = (struct malloc_type_stream_header *)VAR_22;
 VAR_22 += sizeof(*VAR_12);

 if (VAR_12->mtsh_version != VAR_4) {
  VAR_10->mtl_error = VAR_8;
  FUNC_4(VAR_21);
  return (-1);
 }






 VAR_20 = VAR_12->mtsh_maxcpus;
 VAR_16 = VAR_12->mtsh_count;
 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
  VAR_13 = (struct malloc_type_header *)VAR_22;
  VAR_22 += sizeof(*VAR_13);

  if (VAR_17 == 0) {
   VAR_15 = FUNC_6(VAR_10, VAR_0,
       VAR_13->mth_name);
  } else
   VAR_15 = ((void*)0);
  if (VAR_15 == ((void*)0))
   VAR_15 = FUNC_1(VAR_10, VAR_0,
       VAR_13->mth_name, VAR_20);
  if (VAR_15 == ((void*)0)) {
   FUNC_3(VAR_10);
   FUNC_4(VAR_21);
   VAR_10->mtl_error = VAR_6;
   return (-1);
  }




  FUNC_2(VAR_15, VAR_20);

  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
   VAR_14 = (struct malloc_type_stats *)VAR_22;
   VAR_22 += sizeof(*VAR_14);





   VAR_15->mt_memalloced += VAR_14->mts_memalloced;
   VAR_15->mt_memfreed += VAR_14->mts_memfreed;
   VAR_15->mt_numallocs += VAR_14->mts_numallocs;
   VAR_15->mt_numfrees += VAR_14->mts_numfrees;
   VAR_15->mt_sizemask |= VAR_14->mts_size;




   VAR_15->mt_percpu_alloc[VAR_19].mtp_memalloced =
       VAR_14->mts_memalloced;
   VAR_15->mt_percpu_alloc[VAR_19].mtp_memfreed =
       VAR_14->mts_memfreed;
   VAR_15->mt_percpu_alloc[VAR_19].mtp_numallocs =
       VAR_14->mts_numallocs;
   VAR_15->mt_percpu_alloc[VAR_19].mtp_numfrees =
       VAR_14->mts_numfrees;
   VAR_15->mt_percpu_alloc[VAR_19].mtp_sizemask =
       VAR_14->mts_size;
  }




  VAR_15->mt_bytes = VAR_15->mt_memalloced - VAR_15->mt_memfreed;
  VAR_15->mt_count = VAR_15->mt_numallocs - VAR_15->mt_numfrees;
 }

 FUNC_4(VAR_21);

 return (0);
}
