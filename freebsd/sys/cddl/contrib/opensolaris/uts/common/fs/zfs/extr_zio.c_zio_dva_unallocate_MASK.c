
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ io_txg; int io_spa; int * io_bp_override; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_12__ {TYPE_1__* gn_gbh; struct TYPE_12__** gn_child; } ;
typedef TYPE_3__ zio_gang_node_t ;
struct TYPE_13__ {scalar_t__ blk_birth; } ;
typedef TYPE_4__ blkptr_t ;
struct TYPE_10__ {TYPE_4__* zg_blkptr; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_4__*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(zio_t *VAR_2, zio_gang_node_t *VAR_3, blkptr_t *VAR_4)
{
 FUNC_0(VAR_4->blk_birth == VAR_2->io_txg || FUNC_1(VAR_4));
 FUNC_0(VAR_2->io_bp_override == ((void*)0));

 if (!FUNC_1(VAR_4))
  FUNC_2(VAR_2->io_spa, VAR_4, VAR_4->blk_birth, VAR_0);

 if (VAR_3 != ((void*)0)) {
  for (int VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   FUNC_3(VAR_2, VAR_3->gn_child[VAR_5],
       &VAR_3->gn_gbh->zg_blkptr[VAR_5]);
  }
 }
}
