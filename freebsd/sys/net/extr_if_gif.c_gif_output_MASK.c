
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct route {int dummy; } ;
struct TYPE_2__ {scalar_t__ csum_data; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int (* if_transmit ) (struct ifnet*,struct mbuf*) ;} ;
typedef int af ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,int) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;

int
FUNC_2(struct ifnet *VAR_1, struct mbuf *VAR_2, const struct sockaddr *VAR_3,
 struct route *VAR_4)
{
 uint32_t VAR_5;

 if (VAR_3->sa_family == VAR_0)
  FUNC_0(VAR_3->sa_data, &VAR_5, sizeof(VAR_5));
 else
  VAR_5 = VAR_3->sa_family;





 VAR_2->m_pkthdr.csum_data = VAR_5;
 return (VAR_1->if_transmit(VAR_1, VAR_2));
}
