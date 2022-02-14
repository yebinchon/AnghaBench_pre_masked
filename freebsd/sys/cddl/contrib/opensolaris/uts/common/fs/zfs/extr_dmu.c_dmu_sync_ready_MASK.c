
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ io_error; TYPE_5__* io_bp; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_13__ {TYPE_1__* dsa_zgd; } ;
typedef TYPE_3__ dmu_sync_arg_t ;
struct TYPE_14__ {int db_size; } ;
typedef TYPE_4__ dmu_buf_t ;
struct TYPE_15__ {int blk_fill; } ;
typedef TYPE_5__ blkptr_t ;
typedef int arc_buf_t ;
struct TYPE_11__ {TYPE_4__* zgd_db; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;

__attribute__((used)) static void
FUNC_5(zio_t *VAR_0, arc_buf_t *VAR_1, void *VAR_2)
{
 dmu_sync_arg_t *VAR_3 = VAR_2;
 dmu_buf_t *VAR_4 = VAR_3->dsa_zgd->zgd_db;
 blkptr_t *VAR_5 = VAR_0->io_bp;

 if (VAR_0->io_error == 0) {
  if (FUNC_3(VAR_5)) {




   FUNC_4(VAR_5, VAR_4->db_size);
  } else if (!FUNC_2(VAR_5)) {
   FUNC_0(FUNC_1(VAR_5) == 0);
   VAR_5->blk_fill = 1;
  }
 }
}
