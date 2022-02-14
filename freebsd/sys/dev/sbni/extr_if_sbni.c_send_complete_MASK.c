
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbni_softc {int ifp; int * tx_buf_p; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __inline void
FUNC_2(struct sbni_softc *VAR_1)
{
 FUNC_1(VAR_1->tx_buf_p);
 VAR_1->tx_buf_p = ((void*)0);
 FUNC_0(VAR_1->ifp, VAR_0, 1);
}
