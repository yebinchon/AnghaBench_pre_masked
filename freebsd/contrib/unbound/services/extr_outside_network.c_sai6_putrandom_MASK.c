
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ub_randstate {int dummy; } ;
struct TYPE_2__ {int* s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;


 int FUNC_0 (struct ub_randstate*,int) ;

__attribute__((used)) static void
FUNC_1(struct sockaddr_in6 *VAR_0, int VAR_1, struct ub_randstate *VAR_2)
{
 int VAR_3, VAR_4;
 if(!(VAR_1 > 0 && VAR_1 < 128))
  return;
 for(VAR_3 = 0; VAR_3 < (128 - VAR_1) / 8; VAR_3++) {
  VAR_0->sin6_addr.s6_addr[15-VAR_3] = (uint8_t)FUNC_0(VAR_2, 256);
 }
 VAR_4 = VAR_1 & 7;
 if(VAR_4 != 0) {
  VAR_0->sin6_addr.s6_addr[15-VAR_3] |=
   ((0xFF >> VAR_4) & FUNC_0(VAR_2, 256));
 }
}
