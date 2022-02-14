
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_ring {TYPE_1__* tx_base; } ;
struct TYPE_2__ {int cmd_type_offset_bsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_0(struct tx_ring *VAR_3, int VAR_4)
{
 return (((VAR_3->tx_base[VAR_4].cmd_type_offset_bsz >> VAR_1)
     & VAR_0) == VAR_2);
}
