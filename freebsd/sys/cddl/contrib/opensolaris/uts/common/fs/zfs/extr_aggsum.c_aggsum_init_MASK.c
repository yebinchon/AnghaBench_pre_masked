
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int as_numbuckets; TYPE_2__* as_buckets; int as_lock; int as_upper_bound; int as_lower_bound; } ;
typedef TYPE_1__ aggsum_t ;
typedef int aggsum_bucket_t ;
struct TYPE_6__ {int asc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int ,int *) ;

void
FUNC_3(aggsum_t *VAR_3, uint64_t VAR_4)
{
 FUNC_0(VAR_3, sizeof (*VAR_3));
 VAR_3->as_lower_bound = VAR_3->as_upper_bound = VAR_4;
 FUNC_2(&VAR_3->as_lock, ((void*)0), VAR_1, ((void*)0));
 VAR_3->as_numbuckets = VAR_2;
 VAR_3->as_buckets = FUNC_1(VAR_2 * sizeof (aggsum_bucket_t),
     VAR_0);
 for (int VAR_5 = 0; VAR_5 < VAR_3->as_numbuckets; VAR_5++) {
  FUNC_2(&VAR_3->as_buckets[VAR_5].asc_lock,
      ((void*)0), VAR_1, ((void*)0));
 }
}
