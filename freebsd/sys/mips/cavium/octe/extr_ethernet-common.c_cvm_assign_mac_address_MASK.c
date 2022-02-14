
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int u_int8_t ;
struct TYPE_2__ {scalar_t__ mac_addr_count; int * mac_addr_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *,int *,int) ;

int FUNC_3(uint64_t *VAR_3, uint8_t *VAR_4)
{

 if (VAR_1 == 0) {
  FUNC_2((uint8_t *)&VAR_1 + 2,
      FUNC_1()->mac_addr_base, 6);

  if (VAR_1 == 0)
   return VAR_0;

  VAR_2 = FUNC_0();
  VAR_1 += VAR_2;
 }

 if (VAR_2 >= FUNC_1()->mac_addr_count)
  return VAR_0;

 if (VAR_3)
  *VAR_3 = VAR_1;
 if (VAR_4)
  FUNC_2(VAR_4, (u_int8_t *)&VAR_1 + 2, 6);

 VAR_1++;
 VAR_2++;

 return 0;
}
