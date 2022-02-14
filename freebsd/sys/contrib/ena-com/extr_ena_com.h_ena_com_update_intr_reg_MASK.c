
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ena_eth_io_intr_reg {int intr_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct ena_eth_io_intr_reg *VAR_4,
        u32 VAR_5,
        u32 VAR_6,
        bool VAR_7)
{
 VAR_4->intr_control = 0;
 VAR_4->intr_control |= VAR_5 &
  VAR_1;

 VAR_4->intr_control |=
  (VAR_6 << VAR_3)
  & VAR_2;

 if (VAR_7)
  VAR_4->intr_control |= VAR_0;
}
