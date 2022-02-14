
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef int type ;
struct memory_type_list {int mtl_error; int mtl_list; } ;
struct memory_type {scalar_t__ mt_numfrees; scalar_t__ mt_numallocs; scalar_t__ mt_count; scalar_t__ mt_memfreed; scalar_t__ mt_memalloced; scalar_t__ mt_bytes; TYPE_3__* mt_percpu_alloc; int mt_sizemask; } ;
struct malloc_type_stats {int mts_size; scalar_t__ mts_numfrees; scalar_t__ mts_numallocs; scalar_t__ mts_memfreed; scalar_t__ mts_memalloced; } ;
struct malloc_type_internal {scalar_t__ mti_stats; struct malloc_type_internal* ks_handle; scalar_t__ ks_shortdesc; struct malloc_type_internal* ks_next; } ;
struct malloc_type {scalar_t__ mti_stats; struct malloc_type* ks_handle; scalar_t__ ks_shortdesc; struct malloc_type* ks_next; } ;
typedef int mts ;
typedef int mti ;
typedef int mp_maxcpus ;
typedef int kvm_t ;
typedef int kmemstatistics ;
struct TYPE_5__ {int mtp_sizemask; scalar_t__ mtp_numfrees; scalar_t__ mtp_numallocs; scalar_t__ mtp_memfreed; scalar_t__ mtp_memalloced; } ;
struct TYPE_4__ {scalar_t__ n_type; scalar_t__ n_value; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 struct memory_type* FUNC_1 (struct memory_type_list*,int ,char*,int) ;
 int FUNC_2 (struct memory_type*,int) ;
 int FUNC_3 (struct memory_type_list*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *,struct malloc_type_internal*,struct malloc_type_internal*,int,int ) ;
 int FUNC_6 (int *,void*,char*,int) ;
 int FUNC_7 (int *,size_t,...) ;
 int FUNC_8 (int *,int ,struct malloc_type_stats*,int,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,TYPE_1__*) ;
 struct memory_type* FUNC_11 (struct memory_type_list*,int ,char*) ;
 TYPE_1__* VAR_7 ;

int
FUNC_12(struct memory_type_list *VAR_8, void *VAR_9)
{
 struct memory_type *VAR_10;
 void *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 char VAR_17[VAR_4];
 struct malloc_type_stats VAR_18;
 struct malloc_type_internal VAR_19, *VAR_20;
 struct malloc_type VAR_21, *VAR_22;
 kvm_t *VAR_23;

 VAR_23 = (kvm_t *)VAR_9;

 VAR_12 = FUNC_0(&VAR_8->mtl_list);

 if (FUNC_10(VAR_23, VAR_7) != 0) {
  VAR_8->mtl_error = VAR_1;
  return (-1);
 }

 if (VAR_7[VAR_5].n_type == 0 ||
     VAR_7[VAR_5].n_value == 0) {
  VAR_8->mtl_error = VAR_2;
  return (-1);
 }

 VAR_16 = FUNC_7(VAR_23, VAR_6, &VAR_14,
     sizeof(VAR_14), 0);
 if (VAR_16 != 0) {
  VAR_8->mtl_error = VAR_16;
  return (-1);
 }

 VAR_16 = FUNC_7(VAR_23, VAR_5, &VAR_11,
     sizeof(VAR_11), 0);
 if (VAR_16 != 0) {
  VAR_8->mtl_error = VAR_16;
  return (-1);
 }

 VAR_15 = FUNC_9(VAR_23);

 for (VAR_22 = VAR_11; VAR_22 != ((void*)0); VAR_22 = VAR_21.ks_next) {
  VAR_16 = FUNC_5(VAR_23, VAR_22, &VAR_21, sizeof(VAR_21), 0);
  if (VAR_16 != 0) {
   FUNC_3(VAR_8);
   VAR_8->mtl_error = VAR_16;
   return (-1);
  }
  VAR_16 = FUNC_6(VAR_23, (void *)VAR_21.ks_shortdesc, VAR_17,
      VAR_4);
  if (VAR_16 != 0) {
   FUNC_3(VAR_8);
   VAR_8->mtl_error = VAR_16;
   return (-1);
  }





  VAR_20 = VAR_21.ks_handle;
  VAR_16 = FUNC_5(VAR_23, VAR_20, &VAR_19, sizeof(VAR_19), 0);
  if (VAR_16 != 0) {
   FUNC_3(VAR_8);
   VAR_8->mtl_error = VAR_16;
   return (-1);
  }

  if (VAR_12 == 0) {
   VAR_10 = FUNC_11(VAR_8, VAR_0, VAR_17);
  } else
   VAR_10 = ((void*)0);
  if (VAR_10 == ((void*)0))
   VAR_10 = FUNC_1(VAR_8, VAR_0,
       VAR_17, VAR_14);
  if (VAR_10 == ((void*)0)) {
   FUNC_3(VAR_8);
   VAR_8->mtl_error = VAR_3;
   return (-1);
  }





  FUNC_2(VAR_10, VAR_14);
  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
   VAR_16 = FUNC_8(VAR_23, (u_long)VAR_19.mti_stats, &VAR_18,
       sizeof(VAR_18), VAR_13);
   if (VAR_16 != 0) {
    FUNC_3(VAR_8);
    VAR_8->mtl_error = VAR_16;
    return (-1);
   }
   VAR_10->mt_memalloced += VAR_18.mts_memalloced;
   VAR_10->mt_memfreed += VAR_18.mts_memfreed;
   VAR_10->mt_numallocs += VAR_18.mts_numallocs;
   VAR_10->mt_numfrees += VAR_18.mts_numfrees;
   VAR_10->mt_sizemask |= VAR_18.mts_size;

   VAR_10->mt_percpu_alloc[VAR_13].mtp_memalloced =
       VAR_18.mts_memalloced;
   VAR_10->mt_percpu_alloc[VAR_13].mtp_memfreed =
       VAR_18.mts_memfreed;
   VAR_10->mt_percpu_alloc[VAR_13].mtp_numallocs =
       VAR_18.mts_numallocs;
   VAR_10->mt_percpu_alloc[VAR_13].mtp_numfrees =
       VAR_18.mts_numfrees;
   VAR_10->mt_percpu_alloc[VAR_13].mtp_sizemask =
       VAR_18.mts_size;
  }
  for (; VAR_13 < VAR_14; VAR_13++) {
   FUNC_4(&VAR_10->mt_percpu_alloc[VAR_13],
       sizeof(VAR_10->mt_percpu_alloc[0]));
  }

  VAR_10->mt_bytes = VAR_10->mt_memalloced - VAR_10->mt_memfreed;
  VAR_10->mt_count = VAR_10->mt_numallocs - VAR_10->mt_numfrees;
 }

 return (0);
}
