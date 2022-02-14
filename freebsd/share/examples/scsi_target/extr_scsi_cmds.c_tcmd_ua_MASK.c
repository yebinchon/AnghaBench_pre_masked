
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ua_types ;
typedef scalar_t__ u_int ;
struct initiator_state {int pending_ua; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct initiator_state* FUNC_0 (scalar_t__) ;

void
FUNC_1(u_int VAR_2, ua_types VAR_3)
{
 struct initiator_state *VAR_4;
 u_int VAR_5, VAR_6;

 if (VAR_2 == VAR_0) {
  VAR_5 = 0;
  VAR_6 = VAR_1 - 1;
 } else {
  VAR_5 = VAR_6 = VAR_2;
 }

 for (; VAR_5 <= VAR_6; VAR_5++) {
  VAR_4 = FUNC_0(VAR_5);
  if (VAR_4 == ((void*)0))
   break;
  VAR_4->pending_ua = VAR_3;
 }
}
