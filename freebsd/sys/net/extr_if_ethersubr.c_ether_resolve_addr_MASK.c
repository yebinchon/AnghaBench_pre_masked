
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct in_addr {int dummy; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct route {int ro_flags; } ;
struct mbuf {int m_flags; } ;
struct llentry {int dummy; } ;
struct ifnet {int * if_broadcastaddr; } ;
struct ether_header {int * ether_shost; int ether_type; int * ether_dhost; } ;
typedef int etype ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct in6_addr const*,int *) ;
 int FUNC_1 (struct in_addr const*,int *) ;
 int * FUNC_2 (struct ifnet*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ifnet*,int ,struct mbuf*,struct sockaddr const*,int *,int*,struct llentry**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*,char*,int) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (struct ifnet*,int ,struct mbuf*,struct sockaddr const*,int *,int*,struct llentry**) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_12, struct mbuf *VAR_13,
 const struct sockaddr *VAR_14, struct route *VAR_15, u_char *VAR_16,
 uint32_t *VAR_17, struct llentry **VAR_18)
{
 struct ether_header *VAR_19;
 uint32_t VAR_20 = 0;
 int VAR_21 = 0;




 if (VAR_18)
  *VAR_18 = ((void*)0);
 VAR_19 = (struct ether_header *)VAR_16;

 switch (VAR_14->sa_family) {
 default:
  FUNC_5(VAR_12, "can't handle af%d\n", VAR_14->sa_family);
  if (VAR_13 != ((void*)0))
   FUNC_6(VAR_13);
  return (VAR_0);
 }

 if (VAR_21 == VAR_1) {
  if (VAR_15 != ((void*)0) && (VAR_15->ro_flags & VAR_9) != 0)
   VAR_21 = VAR_2;
 }

 if (VAR_21 != 0)
  return (VAR_21);

 *VAR_17 = VAR_11;
 if (VAR_20 & VAR_6)
  *VAR_17 |= VAR_10;

 return (0);
}
