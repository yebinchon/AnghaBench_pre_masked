
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int * private_data; int * dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_9 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_10)
{
 int VAR_11;

 VAR_8 = FUNC_2(&VAR_10->dev, "I2SCLK");
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9.dev = &VAR_10->dev;
 VAR_9.private_data = ((void*)0);
 VAR_11 = FUNC_4(&VAR_9);
 if (VAR_11 != 0)
  FUNC_3(VAR_8);







 VAR_0 = VAR_1;
 VAR_0 = 0;

 VAR_2 = VAR_4 | VAR_3;

 VAR_5 &= ~(VAR_6 | VAR_7);

 return VAR_11;
}
