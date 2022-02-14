
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct aggsum_bucket {int asc_lock; int asc_borrowed; } ;
typedef int int64_t ;
struct TYPE_4__ {int as_lock; int as_lower_bound; int as_upper_bound; } ;
typedef TYPE_1__ aggsum_t ;


 int FUNC_0 (TYPE_1__*,struct aggsum_bucket*) ;
 int FUNC_1 (int volatile*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(aggsum_t *VAR_0, int64_t VAR_1, struct aggsum_bucket *VAR_2)
{
 int64_t VAR_3 = (VAR_1 < 0 ? -VAR_1 : VAR_1);
 FUNC_2(&VAR_0->as_lock);
 FUNC_2(&VAR_2->asc_lock);

 FUNC_0(VAR_0, VAR_2);

 FUNC_1((volatile uint64_t *)&VAR_0->as_upper_bound, VAR_3);
 FUNC_1((volatile uint64_t *)&VAR_0->as_lower_bound, -VAR_3);
 VAR_2->asc_borrowed = VAR_3;

 FUNC_3(&VAR_2->asc_lock);
 FUNC_3(&VAR_0->as_lock);
}
