
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int * rbuf; int * pbuf; scalar_t__ paddr; scalar_t__ raddr; int pmap; int dmat; int rmap; int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct sc_info *VAR_0)
{
 FUNC_0(VAR_0->dmat, VAR_0->rmap);
 FUNC_0(VAR_0->dmat, VAR_0->pmap);
 FUNC_1(VAR_0->dmat, VAR_0->rbuf, VAR_0->rmap);
 FUNC_1(VAR_0->dmat, VAR_0->pbuf, VAR_0->pmap);


 VAR_0->raddr = VAR_0->paddr = 0;
 VAR_0->pbuf = ((void*)0);
 VAR_0->rbuf = ((void*)0);

 return;
}
