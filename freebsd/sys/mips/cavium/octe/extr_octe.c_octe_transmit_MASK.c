
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int * if_softc; } ;
typedef int cvm_oct_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*,struct ifnet*) ;
 int FUNC_1 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 cvm_oct_private_t *VAR_4;

 VAR_4 = VAR_2->if_softc;

 if ((VAR_2->if_drv_flags & (VAR_1 | VAR_0)) !=
     VAR_1) {
  FUNC_1(VAR_3);
  return (0);
 }

 return (FUNC_0(VAR_3, VAR_2));
}
