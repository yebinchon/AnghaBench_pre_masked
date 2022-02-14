
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct aggsum_bucket {scalar_t__ asc_borrowed; scalar_t__ asc_delta; int asc_lock; } ;
struct TYPE_3__ {int as_lower_bound; int as_upper_bound; int as_lock; } ;
typedef TYPE_1__ aggsum_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int volatile*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(aggsum_t *VAR_0, struct aggsum_bucket *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0->as_lock));
 FUNC_0(FUNC_1(&VAR_1->asc_lock));





 FUNC_2((volatile uint64_t *)&VAR_0->as_lower_bound, VAR_1->asc_delta);
 FUNC_2((volatile uint64_t *)&VAR_0->as_upper_bound, VAR_1->asc_delta);
 VAR_1->asc_delta = 0;
 FUNC_2((volatile uint64_t *)&VAR_0->as_upper_bound,
     -VAR_1->asc_borrowed);
 FUNC_2((volatile uint64_t *)&VAR_0->as_lower_bound,
     VAR_1->asc_borrowed);
 VAR_1->asc_borrowed = 0;
}
