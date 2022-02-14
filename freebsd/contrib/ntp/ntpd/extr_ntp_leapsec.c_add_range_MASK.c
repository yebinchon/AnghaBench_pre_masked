
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t size; scalar_t__ base_tai; } ;
struct TYPE_10__ {TYPE_1__ head; TYPE_3__* info; } ;
typedef TYPE_2__ leap_table_t ;
struct TYPE_11__ {scalar_t__ taiof; } ;
typedef TYPE_3__ leap_info_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(
 leap_table_t * VAR_2,
 const leap_info_t * VAR_3)
{
 if (VAR_2->head.size == 0) {
  if (VAR_3->taiof >= 0)
   VAR_2->head.base_tai = VAR_3->taiof - 1;
  else
   VAR_2->head.base_tai = VAR_3->taiof + 1;
 } else if (VAR_2->head.size >= VAR_0) {
  VAR_2->head.size = VAR_0 - 1;
  VAR_2->head.base_tai = VAR_2->info[VAR_2->head.size].taiof;
 }


 FUNC_0(VAR_2->info+1, VAR_2->info, VAR_2->head.size*sizeof(*VAR_2->info));
 VAR_2->info[0] = *VAR_3;
 VAR_2->head.size++;
 FUNC_1(VAR_2);
 return VAR_1;
}
