
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef size_t u_int ;
struct TYPE_5__ {int* state; } ;
typedef TYPE_1__ SHA1_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2(u_int8_t VAR_1[VAR_0], SHA1_CTX *VAR_2)
{
 u_int VAR_3;

 FUNC_0(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_1[VAR_3] = (u_int8_t)
     ((VAR_2->state[VAR_3>>2] >> ((3-(VAR_3 & 3)) * 8) ) & 255);
 }
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
}
