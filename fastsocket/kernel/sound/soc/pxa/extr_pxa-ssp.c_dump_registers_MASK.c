
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssp_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (struct ssp_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct ssp_device *VAR_6)
{
 FUNC_0(&VAR_6->pdev->dev, "SSCR0 0x%08x SSCR1 0x%08x SSTO 0x%08x\n",
   FUNC_1(VAR_6, VAR_1), FUNC_1(VAR_6, VAR_2),
   FUNC_1(VAR_6, VAR_5));

 FUNC_0(&VAR_6->pdev->dev, "SSPSP 0x%08x SSSR 0x%08x SSACD 0x%08x\n",
   FUNC_1(VAR_6, VAR_3), FUNC_1(VAR_6, VAR_4),
   FUNC_1(VAR_6, VAR_0));
}
