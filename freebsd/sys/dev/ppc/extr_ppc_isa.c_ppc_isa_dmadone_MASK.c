
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_data {int ppc_dmachan; int ppc_dmacnt; int ppc_dmaddr; int ppc_dmaflags; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ppc_data *VAR_0)
{
 FUNC_0(VAR_0->ppc_dmaflags, VAR_0->ppc_dmaddr, VAR_0->ppc_dmacnt,
     VAR_0->ppc_dmachan);
}
