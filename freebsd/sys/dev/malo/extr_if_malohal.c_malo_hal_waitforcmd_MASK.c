
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct malo_hal {scalar_t__* mh_cmdbuf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct malo_hal *VAR_1, uint16_t VAR_2)
{

 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 10000; VAR_3++) {
  if (VAR_1->mh_cmdbuf[0] == FUNC_1(VAR_2))
   return 1;

  FUNC_0(1 * 1000);
 }

 return 0;

}
