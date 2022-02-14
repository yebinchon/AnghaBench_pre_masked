
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bce_softc {TYPE_1__* status_block; } ;
struct TYPE_2__ {int status_rx_quick_consumer_index0; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline u16
FUNC_1(struct bce_softc *VAR_1)
{
 u16 VAR_2;

 FUNC_0();
 VAR_2 = VAR_1->status_block->status_rx_quick_consumer_index0;
 if ((VAR_2 & VAR_0) == VAR_0)
  VAR_2++;

 return VAR_2;
}
