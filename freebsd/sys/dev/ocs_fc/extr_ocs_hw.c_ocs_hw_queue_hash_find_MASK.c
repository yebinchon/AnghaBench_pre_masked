
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int id; int index; scalar_t__ in_use; } ;
typedef TYPE_1__ ocs_queue_hash_t ;
typedef int int32_t ;


 int VAR_0 ;

int32_t
FUNC_0(ocs_queue_hash_t *VAR_1, uint16_t VAR_2)
{
 int32_t VAR_3 = -1;
 int32_t VAR_4 = VAR_2 & (VAR_0 - 1);






 do {
  if (VAR_1[VAR_4].in_use &&
      VAR_1[VAR_4].id == VAR_2) {
   VAR_3 = VAR_1[VAR_4].index;
  } else {
   VAR_4 = (VAR_4 + 1) & (VAR_0 - 1);
  }
 } while(VAR_3 == -1 && VAR_1[VAR_4].in_use);

 return VAR_3;
}
