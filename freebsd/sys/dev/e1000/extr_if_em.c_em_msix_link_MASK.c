
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ mac; int * back; } ;
struct adapter {int ims; int link_mask; TYPE_2__ hw; int ctx; int rx_overruns; int link_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_11)
{
 struct adapter *VAR_12 = VAR_11;
 u32 VAR_13;

 ++VAR_12->link_irq;
 FUNC_2(VAR_12->hw.back != ((void*)0));
 VAR_13 = FUNC_0(&VAR_12->hw, VAR_1);

 if (VAR_13 & VAR_3)
  VAR_12->rx_overruns++;

 if (VAR_13 & (VAR_4 | VAR_2)) {
  FUNC_3(VAR_12->ctx);
 } else if (VAR_12->hw.mac.type == VAR_10) {

  FUNC_1(&VAR_12->hw, VAR_6, VAR_8 |
      VAR_7);
 }

 if (VAR_12->hw.mac.type == VAR_10) {





  if (VAR_13)
   FUNC_1(&VAR_12->hw, VAR_5, VAR_12->ims);
 } else {

  FUNC_1(&VAR_12->hw, VAR_6, VAR_7);
  FUNC_1(&VAR_12->hw, VAR_0, VAR_12->link_mask);
 }

 return (VAR_9);
}
