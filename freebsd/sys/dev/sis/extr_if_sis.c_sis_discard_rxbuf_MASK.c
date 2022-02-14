
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sis_rxdesc {TYPE_1__* rx_desc; } ;
struct TYPE_2__ {int sis_cmdsts; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static __inline void
FUNC_1(struct sis_rxdesc *VAR_1)
{

 VAR_1->rx_desc->sis_cmdsts = FUNC_0(VAR_0);
}
