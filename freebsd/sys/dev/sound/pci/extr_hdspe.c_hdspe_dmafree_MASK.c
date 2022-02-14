
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int * pbuf; int * rbuf; int pmap; int dmat; int rmap; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_0)
{

 FUNC_0(VAR_0->dmat, VAR_0->rmap);
 FUNC_0(VAR_0->dmat, VAR_0->pmap);
 FUNC_1(VAR_0->dmat, VAR_0->rbuf, VAR_0->rmap);
 FUNC_1(VAR_0->dmat, VAR_0->pbuf, VAR_0->pmap);
 VAR_0->rbuf = VAR_0->pbuf = ((void*)0);
}
