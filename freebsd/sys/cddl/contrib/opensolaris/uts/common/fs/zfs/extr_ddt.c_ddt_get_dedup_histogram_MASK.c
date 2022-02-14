
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__** spa_ddt; } ;
typedef TYPE_1__ spa_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
struct TYPE_5__ {int ** ddt_histogram_cache; } ;
typedef TYPE_2__ ddt_t ;
typedef int ddt_histogram_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;

void
FUNC_1(spa_t *VAR_3, ddt_histogram_t *VAR_4)
{
 for (enum zio_checksum VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  ddt_t *VAR_6 = VAR_3->spa_ddt[VAR_5];
  for (enum ddt_type VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   for (enum ddt_class VAR_8 = 0; VAR_8 < VAR_0;
       VAR_8++) {
    FUNC_0(VAR_4,
        &VAR_6->ddt_histogram_cache[VAR_7][VAR_8]);
   }
  }
 }
}
