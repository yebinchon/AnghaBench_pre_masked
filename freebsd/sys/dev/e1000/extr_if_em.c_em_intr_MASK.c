
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct adapter {int rx_overruns; TYPE_2__ hw; int ctx; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;

int
FUNC_3(void *VAR_8)
{
 struct adapter *VAR_9 = VAR_8;
 if_ctx_t VAR_10 = VAR_9->ctx;
 u32 VAR_11;

 VAR_11 = FUNC_0(&VAR_9->hw, VAR_0);


 if (VAR_11 == 0xffffffff)
  return VAR_6;


 if (VAR_11 == 0x0)
  return VAR_6;





 if (VAR_9->hw.mac.type >= VAR_7 &&
     (VAR_11 & VAR_1) == 0)
  return VAR_6;







 FUNC_1(VAR_10);


 if (VAR_11 & (VAR_4 | VAR_2))
  FUNC_2(VAR_10);

 if (VAR_11 & VAR_3)
  VAR_9->rx_overruns++;

 return (VAR_5);
}
