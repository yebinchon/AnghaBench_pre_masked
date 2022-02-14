
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_info {int sc_media; int * xn_ifp; int txq; int rxq; } ;


 int VAR_0 ;
 int FUNC_0 (struct netfront_info*) ;
 int FUNC_1 (struct netfront_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct netfront_info*) ;
 int FUNC_7 (struct netfront_info*) ;

__attribute__((used)) static void
FUNC_8(struct netfront_info *VAR_1)
{

 FUNC_0(VAR_1);
 FUNC_7(VAR_1);
 FUNC_1(VAR_1);
 FUNC_6(VAR_1);
 FUNC_2(VAR_1->xn_ifp);
 FUNC_3(VAR_1->rxq, VAR_0);
 FUNC_3(VAR_1->txq, VAR_0);
 FUNC_4(VAR_1->xn_ifp);
 VAR_1->xn_ifp = ((void*)0);
 FUNC_5(&VAR_1->sc_media);
}
