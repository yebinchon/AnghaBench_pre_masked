
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int len; int ether_vtag; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct m_tag {int dummy; } ;
struct ifnet {scalar_t__ if_type; int if_capenable; } ;
typedef int pad ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct mbuf* FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (struct ifnet*,char*) ;
 int FUNC_3 (struct mbuf*,int ,char const*) ;
 int FUNC_4 (struct mbuf*) ;
 struct m_tag* FUNC_5 (struct mbuf*,int ,int ,int *) ;
 int FUNC_6 (int,int) ;
 scalar_t__ VAR_8 ;

bool
FUNC_7(struct mbuf **VAR_9, struct ifnet *VAR_10, struct ifnet *VAR_11,
    uint16_t VAR_12, uint8_t VAR_13)
{
 struct m_tag *VAR_14;
 int VAR_15;
 uint16_t VAR_16;
 static const char VAR_17[8];
 if (VAR_7 && VAR_11->if_type == VAR_3) {
  for (VAR_15 = VAR_0 + VAR_1 - (*VAR_9)->m_pkthdr.len;
       VAR_15 > 0; VAR_15 -= sizeof(VAR_17)) {
   if (!FUNC_3(*VAR_9, FUNC_6(VAR_15, sizeof(VAR_17)), VAR_17))
    break;
  }
  if (VAR_15 > 0) {
   FUNC_4(*VAR_9);
   *VAR_9 = ((void*)0);
   FUNC_2(VAR_10, "cannot pad short frame");
   return (0);
  }
 }
 if (VAR_8 && (VAR_14 = FUNC_5(*VAR_9, VAR_4,
     VAR_5, ((void*)0))) != ((void*)0))
  VAR_16 = FUNC_0(VAR_12, *(uint8_t *)(VAR_14 + 1), 0);
 else
  VAR_16 = FUNC_0(VAR_12, VAR_13, 0);
 if (VAR_11->if_capenable & VAR_2) {
  (*VAR_9)->m_pkthdr.ether_vtag = VAR_16;
  (*VAR_9)->m_flags |= VAR_6;
 } else {
  *VAR_9 = FUNC_1(*VAR_9, VAR_16);
  if (*VAR_9 == ((void*)0)) {
   FUNC_2(VAR_10, "unable to prepend 802.1Q header");
   return (0);
  }
 }
 return (1);
}
