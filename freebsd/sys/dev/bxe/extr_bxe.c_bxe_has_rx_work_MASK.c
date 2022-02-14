
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bxe_fastpath {int rx_cq_cons; int * rx_cq_cons_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline int
FUNC_2(struct bxe_fastpath *VAR_1)
{
    uint16_t VAR_2;

    FUNC_1();
    VAR_2 = FUNC_0(*VAR_1->rx_cq_cons_sb);
    if ((VAR_2 & VAR_0) == VAR_0)
        VAR_2++;
    return (VAR_1->rx_cq_cons != VAR_2);
}
