
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rxs; int rxf; int rxb; int * ifp; int * txs; int txf; int txb; int gnttab; } ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int * FUNC_4 (int ) ;
 void* FUNC_5 (int ,int ,int) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int
FUNC_6(void)
{
 int VAR_6 = 0;

 FUNC_3(VAR_5.gnttab, sizeof(VAR_5.gnttab));

 VAR_5.txs = FUNC_5(VAR_4, VAR_2, VAR_1|VAR_3);
 if (VAR_5.txs != ((void*)0)) {
  FUNC_2(VAR_5.txs);
  FUNC_0(&VAR_5.txb, VAR_5.txs, VAR_4);
  FUNC_1(&VAR_5.txf, VAR_5.txs, VAR_4);
 } else {
  VAR_6 = 1;
 }

 VAR_5.ifp = FUNC_4(VAR_0);
 if (VAR_5.ifp == ((void*)0)) {
  VAR_6 = 1;
 }

 VAR_5.rxs = FUNC_5(VAR_4, VAR_2, VAR_1|VAR_3);
 if (VAR_5.rxs != ((void*)0)) {
  FUNC_2(VAR_5.rxs);
  FUNC_0(&VAR_5.rxb, VAR_5.rxs, VAR_4);
  FUNC_1(&VAR_5.rxf, VAR_5.rxs, VAR_4);
 } else {
  VAR_6 = 1;
 }

 return VAR_6;
}
