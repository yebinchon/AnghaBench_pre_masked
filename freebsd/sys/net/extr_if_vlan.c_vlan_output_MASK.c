
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct route {int dummy; } ;
struct mbuf {int dummy; } ;
struct ifvlan {int dummy; } ;
struct ifnet {int (* if_output ) (struct ifnet*,struct mbuf*,struct sockaddr const*,struct route*) ;struct ifvlan* if_softc; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct ifnet* FUNC_1 (struct ifvlan*) ;
 int * FUNC_2 (struct ifvlan*) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct ifnet*,struct mbuf*,struct sockaddr const*,struct route*) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_1, struct mbuf *VAR_2, const struct sockaddr *VAR_3,
    struct route *VAR_4)
{
 struct ifvlan *VAR_5;
 struct ifnet *VAR_6;

 FUNC_0();

 VAR_5 = VAR_1->if_softc;
 if (FUNC_2(VAR_5) == ((void*)0)) {
  FUNC_3(VAR_2);
  return (VAR_0);
 }
 VAR_6 = FUNC_1(VAR_5);
 return VAR_6->if_output(VAR_1, VAR_2, VAR_3, VAR_4);
}
