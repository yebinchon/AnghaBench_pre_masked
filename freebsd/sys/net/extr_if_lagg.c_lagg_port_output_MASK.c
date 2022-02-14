
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
struct route {int dummy; } ;
struct mbuf {int dummy; } ;
struct lagg_port {int (* lp_output ) (struct ifnet*,struct mbuf*,struct sockaddr const*,struct route*) ;} ;
struct ifnet {struct lagg_port* if_lagg; } ;



 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;

 int FUNC_1 (struct ifnet*,struct mbuf*,struct sockaddr const*,struct route*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_1, struct mbuf *VAR_2,
 const struct sockaddr *VAR_3, struct route *VAR_4)
{
 struct lagg_port *VAR_5 = VAR_1->if_lagg;

 switch (VAR_3->sa_family) {
  case 128:
  case 129:
   return ((*VAR_5->lp_output)(VAR_1, VAR_2, VAR_3, VAR_4));
 }


 FUNC_0(VAR_2);
 return (VAR_0);
}
