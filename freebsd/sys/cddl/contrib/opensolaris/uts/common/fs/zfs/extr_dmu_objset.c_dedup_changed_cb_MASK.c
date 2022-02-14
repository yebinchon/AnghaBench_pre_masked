
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_2__ {int os_dedup_checksum; int os_dedup_verify; int * os_spa; } ;
typedef TYPE_1__ objset_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_4, uint64_t VAR_5)
{
 objset_t *VAR_6 = VAR_4;
 spa_t *VAR_7 = VAR_6->os_spa;
 enum zio_checksum VAR_8;




 FUNC_0(VAR_5 != VAR_0);

 VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_2);

 VAR_6->os_dedup_checksum = VAR_8 & VAR_1;
 VAR_6->os_dedup_verify = !!(VAR_8 & VAR_3);
}
