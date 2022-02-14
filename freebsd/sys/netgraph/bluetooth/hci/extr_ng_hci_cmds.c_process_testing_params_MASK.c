
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct mbuf {int dummy; } ;
typedef int ng_hci_unit_p ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;




int
FUNC_1(ng_hci_unit_p VAR_1, u_int16_t VAR_2, struct mbuf *VAR_3,
  struct mbuf *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_2) {
 case 129:
 case 128:
 case 130:
  break;

 default:
  VAR_5 = VAR_0;
  break;
 }

 FUNC_0(VAR_3);
 FUNC_0(VAR_4);

 return (VAR_5);
}
