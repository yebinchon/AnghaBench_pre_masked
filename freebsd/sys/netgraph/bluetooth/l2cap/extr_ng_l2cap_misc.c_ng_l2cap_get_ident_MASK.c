
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef TYPE_1__* ng_l2cap_con_p ;
struct TYPE_4__ {scalar_t__ ident; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_1__*,scalar_t__) ;

u_int8_t
FUNC_1(ng_l2cap_con_p VAR_2)
{
 u_int8_t VAR_3 = VAR_2->ident + 1;

 if (VAR_3 < VAR_0)
  VAR_3 = VAR_0;

 while (VAR_3 != VAR_2->ident) {
  if (FUNC_0(VAR_2, VAR_3) == ((void*)0)) {
   VAR_2->ident = VAR_3;

   return (VAR_3);
  }

  VAR_3 ++;
  if (VAR_3 < VAR_0)
   VAR_3 = VAR_0;
 }

 return (VAR_1);
}
