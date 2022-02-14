
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bwn_pio_txqueue {scalar_t__ tq_base; } ;
struct bwn_mac {int dummy; } ;


 scalar_t__ FUNC_0 (struct bwn_mac*,scalar_t__) ;

__attribute__((used)) static uint16_t
FUNC_1(struct bwn_mac *VAR_0, struct bwn_pio_txqueue *VAR_1,
    uint16_t VAR_2)
{

 return (FUNC_0(VAR_0, VAR_1->tq_base + VAR_2));
}
