
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct syr827_reg_sc {TYPE_1__* param; int volt_reg; int base_dev; } ;
struct regnode {int dummy; } ;
struct TYPE_2__ {int ramp_delay; } ;


 int VAR_0 ;
 struct syr827_reg_sc* FUNC_0 (struct regnode*) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct regnode *VAR_1, bool VAR_2, int *VAR_3)
{
 struct syr827_reg_sc *VAR_4;
 uint8_t VAR_5;

 VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_4->base_dev, VAR_4->volt_reg, &VAR_5, 1);
 if (VAR_2)
  VAR_5 &= ~VAR_0;
 else
  VAR_5 |= VAR_0;
 FUNC_2(VAR_4->base_dev, VAR_4->volt_reg, VAR_5);

 *VAR_3 = VAR_4->param->ramp_delay;

 return (0);
}
