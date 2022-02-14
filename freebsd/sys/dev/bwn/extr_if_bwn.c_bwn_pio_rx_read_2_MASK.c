
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bwn_pio_rxqueue {scalar_t__ prq_base; int prq_mac; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static uint16_t
FUNC_1(struct bwn_pio_rxqueue *VAR_0, uint16_t VAR_1)
{

 return (FUNC_0(VAR_0->prq_mac, VAR_0->prq_base + VAR_1));
}
