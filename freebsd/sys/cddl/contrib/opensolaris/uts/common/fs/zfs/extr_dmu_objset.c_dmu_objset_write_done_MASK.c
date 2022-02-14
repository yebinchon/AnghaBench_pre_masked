
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io_flags; int io_bp_orig; int * io_bp; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_5__ {int * os_synctx; int * os_dsl_dataset; } ;
typedef TYPE_2__ objset_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
typedef int blkptr_t ;
typedef int arc_buf_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(zio_t *VAR_2, arc_buf_t *VAR_3, void *VAR_4)
{
 blkptr_t *VAR_5 = VAR_2->io_bp;
 blkptr_t *VAR_6 = &VAR_2->io_bp_orig;
 objset_t *VAR_7 = VAR_4;

 if (VAR_2->io_flags & VAR_1) {
  FUNC_0(FUNC_1(VAR_5, VAR_6));
 } else {
  dsl_dataset_t *VAR_8 = VAR_7->os_dsl_dataset;
  dmu_tx_t *VAR_9 = VAR_7->os_synctx;

  (void) FUNC_3(VAR_8, VAR_6, VAR_9, VAR_0);
  FUNC_2(VAR_8, VAR_5, VAR_9);
 }
 FUNC_4(VAR_5, sizeof (*VAR_5));
}
