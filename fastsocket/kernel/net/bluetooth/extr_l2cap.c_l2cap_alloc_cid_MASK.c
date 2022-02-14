
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct l2cap_chan_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct l2cap_chan_list*,scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct l2cap_chan_list *VAR_2)
{
 u16 VAR_3 = VAR_1;

 for (; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_0(VAR_2, VAR_3))
   return VAR_3;
 }

 return 0;
}
