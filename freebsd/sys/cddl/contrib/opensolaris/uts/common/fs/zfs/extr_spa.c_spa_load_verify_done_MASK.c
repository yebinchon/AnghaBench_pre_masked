
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int io_error; int io_abd; TYPE_2__* io_spa; TYPE_3__* io_private; int * io_bp; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_6__ {int spa_scrub_lock; int spa_scrub_io_cv; int spa_load_verify_ios; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_7__ {int sle_data_count; int sle_meta_count; } ;
typedef TYPE_3__ spa_load_error_t ;
typedef scalar_t__ dmu_object_type_t ;
typedef int blkptr_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(zio_t *VAR_1)
{
 blkptr_t *VAR_2 = VAR_1->io_bp;
 spa_load_error_t *VAR_3 = VAR_1->io_private;
 dmu_object_type_t VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = VAR_1->io_error;
 spa_t *VAR_6 = VAR_1->io_spa;

 FUNC_3(VAR_1->io_abd);
 if (VAR_5) {
  if ((FUNC_0(VAR_2) != 0 || FUNC_2(VAR_4)) &&
      VAR_4 != VAR_0)
   FUNC_4(&VAR_3->sle_meta_count);
  else
   FUNC_4(&VAR_3->sle_data_count);
 }

 FUNC_6(&VAR_6->spa_scrub_lock);
 VAR_6->spa_load_verify_ios--;
 FUNC_5(&VAR_6->spa_scrub_io_cv);
 FUNC_7(&VAR_6->spa_scrub_lock);
}
