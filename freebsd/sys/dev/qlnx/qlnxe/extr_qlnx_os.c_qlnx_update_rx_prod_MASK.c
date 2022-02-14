
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct qlnx_rx_queue {int hw_rxq_prod_addr; int rx_comp_ring; int rx_bd_ring; } ;
struct eth_rx_prod_data {void* cqe_prod; void* bd_prod; } ;
struct ecore_hwfn {int dummy; } ;
typedef int rx_prods ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,int ,int,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct ecore_hwfn *VAR_0, struct qlnx_rx_queue *VAR_1)
{

        uint16_t VAR_2;
        uint16_t VAR_3;
 union {
  struct eth_rx_prod_data rx_prod_data;
  uint32_t data32;
 } VAR_4;

        VAR_2 = FUNC_0(&VAR_1->rx_bd_ring);
        VAR_3 = FUNC_0(&VAR_1->rx_comp_ring);


        VAR_4.rx_prod_data.bd_prod = FUNC_1(VAR_2);
        VAR_4.rx_prod_data.cqe_prod = FUNC_1(VAR_3);





 FUNC_3();

        FUNC_2(VAR_0, VAR_1->hw_rxq_prod_addr,
  sizeof(VAR_4), &VAR_4.data32);







        FUNC_3();

 return;
}
