
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef scalar_t__ uint16_t ;
struct xfrm_state {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {unsigned short sa_family; } ;
struct sadb_sa {int sadb_sa_spi; } ;
struct sadb_msg {int sadb_msg_satype; } ;
struct sadb_address {int dummy; } ;
struct net {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct xfrm_state* FUNC_1 (struct net*,int ,int *,int ,scalar_t__,unsigned short) ;

__attribute__((used)) static struct xfrm_state *FUNC_2(struct net *VAR_3, struct sadb_msg *VAR_4, void **VAR_5)
{
 struct sadb_sa *VAR_6;
 struct sadb_address *VAR_7;
 uint16_t VAR_8;
 unsigned short VAR_9;
 xfrm_address_t *VAR_10;

 VAR_6 = (struct sadb_sa *) VAR_5[VAR_2-1];
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_8 = FUNC_0(VAR_4->sadb_msg_satype);
 if (VAR_8 == 0)
  return ((void*)0);


 VAR_7 = (struct sadb_address *) VAR_5[VAR_1-1];
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_9 = ((struct sockaddr *)(VAR_7 + 1))->sa_family;
 switch (VAR_9) {
 case 129:
  VAR_10 = (xfrm_address_t *)&((struct sockaddr_in *)(VAR_7 + 1))->sin_addr;
  break;





 default:
  VAR_10 = ((void*)0);
 }

 if (!VAR_10)
  return ((void*)0);

 return FUNC_1(VAR_3, VAR_0, VAR_10, VAR_6->sadb_sa_spi, VAR_8, VAR_9);
}
