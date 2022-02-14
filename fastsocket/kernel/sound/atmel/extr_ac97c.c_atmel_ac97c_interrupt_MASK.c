
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct atmel_ac97c {TYPE_1__* pdev; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct atmel_ac97c*,int ) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 int FUNC_2 (int *,char*,char*,char*,char*,char*,char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_12, void *VAR_13)
{
 struct atmel_ac97c *VAR_14 = (struct atmel_ac97c *)VAR_13;
 irqreturn_t VAR_15 = VAR_10;
 u32 VAR_16 = FUNC_0(VAR_14, VAR_11);
 u32 VAR_17 = FUNC_0(VAR_14, VAR_7);
 u32 VAR_18 = FUNC_0(VAR_14, VAR_8);

 if (VAR_16 & VAR_5) {
  FUNC_2(&VAR_14->pdev->dev, "channel A event%s%s%s%s%s%s\n",
    VAR_17 & VAR_0 ? " OVRUN" : "",
    VAR_17 & VAR_1 ? " RXRDY" : "",
    VAR_17 & VAR_4 ? " UNRUN" : "",
    VAR_17 & VAR_2 ? " TXEMPTY" : "",
    VAR_17 & VAR_3 ? " TXRDY" : "",
    !VAR_17 ? " NONE" : "");
  VAR_15 = VAR_9;
 }

 if (VAR_16 & VAR_6) {
  FUNC_2(&VAR_14->pdev->dev, "codec channel event%s%s%s%s%s\n",
    VAR_18 & VAR_0 ? " OVRUN" : "",
    VAR_18 & VAR_1 ? " RXRDY" : "",
    VAR_18 & VAR_2 ? " TXEMPTY" : "",
    VAR_18 & VAR_3 ? " TXRDY" : "",
    !VAR_18 ? " NONE" : "");
  VAR_15 = VAR_9;
 }

 if (VAR_15 == VAR_10) {
  FUNC_1(&VAR_14->pdev->dev, "spurious interrupt sr 0x%08x "
    "casr 0x%08x cosr 0x%08x\n", VAR_16, VAR_17, VAR_18);
 }

 return VAR_15;
}
