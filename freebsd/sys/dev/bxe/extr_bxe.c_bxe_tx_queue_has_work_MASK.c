
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bxe_fastpath {scalar_t__ tx_pkt_cons; int * tx_cons_sb; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline int
FUNC_2(struct bxe_fastpath *VAR_0)
{
    uint16_t VAR_1;

    FUNC_1();
    VAR_1 = FUNC_0(*VAR_0->tx_cons_sb);
    return (VAR_1 != VAR_0->tx_pkt_cons);
}
