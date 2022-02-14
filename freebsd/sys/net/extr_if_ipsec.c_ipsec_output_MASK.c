
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct route {int dummy; } ;
struct mbuf {int dummy; } ;
struct ifnet {int (* if_transmit ) (struct ifnet*,struct mbuf*) ;} ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_1(struct ifnet *VAR_0, struct mbuf *VAR_1, const struct sockaddr *VAR_2,
 struct route *VAR_3)
{

 return (VAR_0->if_transmit(VAR_0, VAR_1));
}
