
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
typedef int zio_bad_cksum_t ;
struct TYPE_10__ {int iv_split_block; scalar_t__ iv_reconstruct; } ;
typedef TYPE_2__ indirect_vsd_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(zio_t *VAR_0)
{
 indirect_vsd_t *VAR_1 = VAR_0->io_vsd;

 if (VAR_1->iv_reconstruct) {





  FUNC_1(VAR_0);
  return;
 }

 if (!VAR_1->iv_split_block) {




  return;
 }

 zio_bad_cksum_t VAR_2;
 int VAR_3 = FUNC_2(VAR_0, &VAR_2);
 if (VAR_3 == 0) {
  FUNC_3(VAR_0);
  return;
 }






 FUNC_0(VAR_0);

 FUNC_4(VAR_0);
}
