
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;
struct davinci_mcbsp_dev {int * clk; } ;
struct TYPE_3__ {struct davinci_mcbsp_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct davinci_mcbsp_dev*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct davinci_mcbsp_dev *VAR_3 = VAR_1.private_data;
 struct resource *VAR_4;

 FUNC_5(&VAR_1);
 FUNC_0(VAR_3->clk);
 FUNC_1(VAR_3->clk);
 VAR_3->clk = ((void*)0);
 FUNC_2(VAR_3);
 VAR_4 = FUNC_3(VAR_2, VAR_0, 0);
 FUNC_4(VAR_4->start, (VAR_4->end - VAR_4->start) + 1);

 return 0;
}
