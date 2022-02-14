
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * (* ci_tmpl_init ) (int *) ;int * ci_tmpl_free; } ;
typedef TYPE_1__ zio_checksum_info_t ;
struct TYPE_6__ {int spa_cksum_tmpls_lock; int ** spa_cksum_tmpls; int spa_cksum_salt; } ;
typedef TYPE_2__ spa_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_4(enum zio_checksum VAR_1, spa_t *VAR_2)
{
 zio_checksum_info_t *VAR_3 = &VAR_0[VAR_1];

 if (VAR_3->ci_tmpl_init == ((void*)0))
  return;
 if (VAR_2->spa_cksum_tmpls[VAR_1] != ((void*)0))
  return;

 FUNC_0(VAR_3->ci_tmpl_free != ((void*)0));
 FUNC_1(&VAR_2->spa_cksum_tmpls_lock);
 if (VAR_2->spa_cksum_tmpls[VAR_1] == ((void*)0)) {
  VAR_2->spa_cksum_tmpls[VAR_1] =
      VAR_3->ci_tmpl_init(&VAR_2->spa_cksum_salt);
  FUNC_0(VAR_2->spa_cksum_tmpls[VAR_1] != ((void*)0));
 }
 FUNC_2(&VAR_2->spa_cksum_tmpls_lock);
}
