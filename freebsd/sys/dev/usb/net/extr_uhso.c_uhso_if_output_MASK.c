
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;
struct route {int dummy; } ;
struct mbuf {int dummy; } ;
struct ifnet {int (* if_transmit ) (struct ifnet*,struct mbuf*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ifnet*,int ,int) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_6, struct mbuf *VAR_7, const struct sockaddr *VAR_8,
    struct route *VAR_9)
{
 int VAR_10;


 if (VAR_8->sa_family != VAR_0



  ) {
  return (VAR_2);
 }

 VAR_10 = (VAR_6->if_transmit)(VAR_6, VAR_7);
 if (VAR_10) {
  FUNC_0(VAR_6, VAR_4, 1);
  return (VAR_3);
 }
 FUNC_0(VAR_6, VAR_5, 1);
 return (0);
}
