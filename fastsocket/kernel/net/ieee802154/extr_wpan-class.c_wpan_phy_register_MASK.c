
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct wpan_phy {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct device *VAR_0, struct wpan_phy *VAR_1)
{
 VAR_1->dev.parent = VAR_0;

 return FUNC_0(&VAR_1->dev);
}
