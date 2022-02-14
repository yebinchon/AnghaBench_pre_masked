
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf10bmac_softc {int* nf10bmac_eth_addr; scalar_t__ nf10bmac_unit; } ;


 int VAR_0 ;
 int FUNC_0 (int**,char*,int ) ;

__attribute__((used)) static int
FUNC_1(struct nf10bmac_softc *VAR_1)
{
 if (VAR_1->nf10bmac_eth_addr[0] == 0x00 &&
     VAR_1->nf10bmac_eth_addr[1] == 0x00 &&
     VAR_1->nf10bmac_eth_addr[2] == 0x00 &&
     VAR_1->nf10bmac_eth_addr[3] == 0x00 &&
     VAR_1->nf10bmac_eth_addr[4] == 0x00 &&
     VAR_1->nf10bmac_eth_addr[5] == 0x00) {
  FUNC_0(&VAR_1->nf10bmac_eth_addr, "\0NFBSD", VAR_0);
  VAR_1->nf10bmac_eth_addr[5] += VAR_1->nf10bmac_unit;
 }

 return (0);
}
