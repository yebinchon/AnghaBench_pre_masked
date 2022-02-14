
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; int ifma_refcount; struct sockaddr* ifma_lladdr; struct sockaddr* ifma_addr; int * ifma_protospec; struct ifnet* ifma_ifp; } ;
struct ifnet {int dummy; } ;
struct ifmultiaddr {int sa_len; int ifma_refcount; struct ifmultiaddr* ifma_lladdr; struct ifmultiaddr* ifma_addr; int * ifma_protospec; struct ifnet* ifma_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr*,int ) ;
 void* FUNC_2 (int,int ,int) ;

__attribute__((used)) static struct ifmultiaddr *
FUNC_3(struct ifnet *VAR_2, struct sockaddr *VAR_3, struct sockaddr *VAR_4,
    int VAR_5)
{
 struct ifmultiaddr *VAR_6;
 struct sockaddr *VAR_7;

 VAR_6 = FUNC_2(sizeof *VAR_6, VAR_0, VAR_5 |
     VAR_1);
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_7 = FUNC_2(VAR_3->sa_len, VAR_0, VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_6, VAR_0);
  return (((void*)0));
 }
 FUNC_0(VAR_3, VAR_7, VAR_3->sa_len);
 VAR_6->ifma_addr = VAR_7;

 VAR_6->ifma_ifp = VAR_2;
 VAR_6->ifma_refcount = 1;
 VAR_6->ifma_protospec = ((void*)0);

 if (VAR_4 == ((void*)0)) {
  VAR_6->ifma_lladdr = ((void*)0);
  return (VAR_6);
 }

 VAR_7 = FUNC_2(VAR_4->sa_len, VAR_0, VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_6->ifma_addr, VAR_0);
  FUNC_1(VAR_6, VAR_0);
  return (((void*)0));
 }
 FUNC_0(VAR_4, VAR_7, VAR_4->sa_len);
 VAR_6->ifma_lladdr = VAR_7;

 return (VAR_6);
}
