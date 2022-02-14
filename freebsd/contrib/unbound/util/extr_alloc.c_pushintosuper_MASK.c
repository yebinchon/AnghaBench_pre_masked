
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alloc_cache {int num_quar; TYPE_1__* super; int * quar; } ;
typedef int alloc_special_type ;
struct TYPE_2__ {int num_quar; int lock; int * quar; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct alloc_cache* VAR_1, alloc_special_type* VAR_2)
{
 int VAR_3;
 alloc_special_type *VAR_4 = VAR_1->quar;
 FUNC_4(*VAR_4);
 FUNC_4(VAR_1 && VAR_1->super &&
  VAR_1->num_quar >= VAR_0);

 FUNC_0(VAR_2, VAR_1->quar);
 for(VAR_3=1; VAR_3<VAR_0/2; VAR_3++) {
  VAR_4 = FUNC_1(VAR_4);
 }
 VAR_1->quar = FUNC_1(VAR_4);
 VAR_1->num_quar -= VAR_0/2;


 FUNC_2(&VAR_1->super->lock);
 FUNC_0(VAR_4, VAR_1->super->quar);
 VAR_1->super->quar = VAR_2;
 VAR_1->super->num_quar += VAR_0/2 + 1;
 FUNC_3(&VAR_1->super->lock);

}
