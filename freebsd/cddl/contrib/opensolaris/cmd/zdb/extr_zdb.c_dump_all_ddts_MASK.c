
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int ** spa_ddt; } ;
typedef TYPE_1__ spa_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
typedef int ddt_t ;
struct TYPE_14__ {scalar_t__ dds_blocks; } ;
typedef TYPE_2__ ddt_stat_t ;
typedef TYPE_2__ ddt_histogram_t ;
typedef int dds_total ;
typedef int ddh_total ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int* VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(spa_t *VAR_4)
{
 ddt_histogram_t VAR_5;
 ddt_stat_t VAR_6;

 FUNC_0(&VAR_5, sizeof (VAR_5));
 FUNC_0(&VAR_6, sizeof (VAR_6));

 for (enum zio_checksum VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  ddt_t *VAR_8 = VAR_4->spa_ddt[VAR_7];
  for (enum ddt_type VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   for (enum ddt_class VAR_10 = 0; VAR_10 < VAR_0;
       VAR_10++) {
    FUNC_3(VAR_8, VAR_9, VAR_10);
   }
  }
 }

 FUNC_2(VAR_4, &VAR_6);

 if (VAR_6.dds_blocks == 0) {
  (void) FUNC_5("All DDTs are empty\n");
  return;
 }

 (void) FUNC_5("\n");

 if (VAR_3['D'] > 1) {
  (void) FUNC_5("DDT histogram (aggregated over all DDTs):\n");
  FUNC_1(VAR_4, &VAR_5);
  FUNC_6(&VAR_6, &VAR_5);
 }

 FUNC_4(&VAR_6);
}
