
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct atmel_abdac {TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct atmel_abdac*,int ) ;
 int FUNC_2 (struct atmel_abdac*,int ,int) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct atmel_abdac *VAR_6 = VAR_5;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_1);
 if (VAR_7 & FUNC_0(VAR_3)) {
  FUNC_3(&VAR_6->pdev->dev, "underrun detected\n");
  FUNC_2(VAR_6, VAR_0, FUNC_0(VAR_3));
 } else {
  FUNC_3(&VAR_6->pdev->dev, "spurious interrupt (status=0x%x)\n",
   VAR_7);
  FUNC_2(VAR_6, VAR_0, VAR_7);
 }

 return VAR_2;
}
