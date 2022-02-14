
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ifp; int * rxs; int * txs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 if (VAR_1.txs != ((void*)0)) {
  FUNC_0(VAR_1.txs, VAR_0);
 }
 if (VAR_1.rxs != ((void*)0)) {
  FUNC_0(VAR_1.rxs, VAR_0);
 }
 if (VAR_1.ifp != ((void*)0)) {
  FUNC_1(VAR_1.ifp);
 }
}
