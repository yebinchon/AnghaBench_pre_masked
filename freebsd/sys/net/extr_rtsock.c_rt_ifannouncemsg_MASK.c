
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_addrinfo {int dummy; } ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*,int ) ;
 struct mbuf* FUNC_1 (struct ifnet*,int ,int,struct rt_addrinfo*) ;

void
FUNC_2(struct ifnet *VAR_2, int VAR_3)
{
 struct mbuf *VAR_4;
 struct rt_addrinfo VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_3, &VAR_5);
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4, VAR_0);
}
