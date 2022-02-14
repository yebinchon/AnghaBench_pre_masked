
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int in_use; int id; int index; } ;
typedef TYPE_1__ ocs_queue_hash_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(ocs_queue_hash_t *VAR_1, uint16_t VAR_2, uint16_t VAR_3)
{
 uint32_t VAR_4 = VAR_2 & (VAR_0 - 1);





 while(VAR_1[VAR_4].in_use) {
  VAR_4 = (VAR_4 + 1) & (VAR_0 - 1);
 }


 VAR_1[VAR_4].id = VAR_2;
 VAR_1[VAR_4].in_use = 1;
 VAR_1[VAR_4].index = VAR_3;
}
