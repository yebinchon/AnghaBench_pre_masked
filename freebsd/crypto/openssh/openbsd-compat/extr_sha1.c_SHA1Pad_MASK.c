
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef int u_int ;
struct TYPE_4__ {int count; } ;
typedef TYPE_1__ SHA1_CTX ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int) ;

void
FUNC_1(SHA1_CTX *VAR_0)
{
 u_int8_t VAR_1[8];
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_1[VAR_2] = (u_int8_t)((VAR_0->count >>
      ((7 - (VAR_2 & 7)) * 8)) & 255);
 }
 FUNC_0(VAR_0, (u_int8_t *)"\200", 1);
 while ((VAR_0->count & 504) != 448)
  FUNC_0(VAR_0, (u_int8_t *)"\0", 1);
 FUNC_0(VAR_0, VAR_1, 8);
}
