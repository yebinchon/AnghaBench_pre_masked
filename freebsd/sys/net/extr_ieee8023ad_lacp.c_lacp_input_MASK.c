
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int subtype ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct lagg_port {int dummy; } ;
struct lacp_port {int dummy; } ;
struct ether_header {int dummy; } ;


 struct lacp_port* FUNC_0 (struct lagg_port*) ;


 int FUNC_1 (struct lacp_port*,struct mbuf*) ;
 int FUNC_2 (struct lacp_port*,struct mbuf*) ;
 int FUNC_3 (struct mbuf*,int,int,int*) ;
 int FUNC_4 (struct mbuf*) ;

struct mbuf *
FUNC_5(struct lagg_port *VAR_0, struct mbuf *VAR_1)
{
 struct lacp_port *VAR_2 = FUNC_0(VAR_0);
 uint8_t VAR_3;

 if (VAR_1->m_pkthdr.len < sizeof(struct ether_header) + sizeof(VAR_3)) {
  FUNC_4(VAR_1);
  return (((void*)0));
 }

 FUNC_3(VAR_1, sizeof(struct ether_header), sizeof(VAR_3), &VAR_3);
 switch (VAR_3) {
  case 129:
   FUNC_2(VAR_2, VAR_1);
   return (((void*)0));

  case 128:
   FUNC_1(VAR_2, VAR_1);
   return (((void*)0));
 }


 return (VAR_1);
}
