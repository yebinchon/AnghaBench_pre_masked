
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t zio_type_t ;
typedef size_t zio_taskq_type_t ;
struct TYPE_5__ {TYPE_3__* io_spa; int * io_executor; } ;
typedef TYPE_1__ zio_t ;
typedef size_t uint_t ;
struct TYPE_6__ {size_t stqs_count; int * stqs_taskq; } ;
typedef TYPE_2__ spa_taskqs_t ;
struct TYPE_7__ {TYPE_2__** spa_zio_taskq; } ;
typedef TYPE_3__ spa_t ;
typedef int kthread_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static boolean_t
FUNC_1(zio_t *VAR_3, zio_taskq_type_t VAR_4)
{
 kthread_t *VAR_5 = VAR_3->io_executor;
 spa_t *VAR_6 = VAR_3->io_spa;

 for (zio_type_t VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  spa_taskqs_t *VAR_8 = &VAR_6->spa_zio_taskq[VAR_7][VAR_4];
  uint_t VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_8->stqs_count; VAR_9++) {
   if (FUNC_0(VAR_8->stqs_taskq[VAR_9], VAR_5))
    return (VAR_1);
  }
 }

 return (VAR_0);
}
