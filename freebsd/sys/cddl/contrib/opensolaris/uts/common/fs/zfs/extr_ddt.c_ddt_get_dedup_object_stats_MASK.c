
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__** spa_ddt; } ;
typedef TYPE_1__ spa_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
struct TYPE_7__ {TYPE_3__** ddt_object_stats; } ;
typedef TYPE_2__ ddt_t ;
struct TYPE_8__ {scalar_t__ ddo_count; scalar_t__ ddo_mspace; scalar_t__ ddo_dspace; } ;
typedef TYPE_3__ ddt_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(spa_t *VAR_3, ddt_object_t *VAR_4)
{

 for (enum zio_checksum VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  ddt_t *VAR_6 = VAR_3->spa_ddt[VAR_5];
  for (enum ddt_type VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   for (enum ddt_class VAR_8 = 0; VAR_8 < VAR_0;
       VAR_8++) {
    ddt_object_t *VAR_9 =
        &VAR_6->ddt_object_stats[VAR_7][VAR_8];
    VAR_4->ddo_count += VAR_9->ddo_count;
    VAR_4->ddo_dspace += VAR_9->ddo_dspace;
    VAR_4->ddo_mspace += VAR_9->ddo_mspace;
   }
  }
 }


 if (VAR_4->ddo_count != 0) {
  VAR_4->ddo_dspace /= VAR_4->ddo_count;
  VAR_4->ddo_mspace /= VAR_4->ddo_count;
 }
}
