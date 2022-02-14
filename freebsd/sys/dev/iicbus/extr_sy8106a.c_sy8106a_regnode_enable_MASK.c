
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sy8106a_reg_sc {TYPE_1__* param; int base_dev; } ;
struct regnode {int dummy; } ;
struct TYPE_2__ {int ramp_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sy8106a_reg_sc* FUNC_0 (struct regnode*) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct regnode *VAR_2, bool VAR_3, int *VAR_4)
{
 struct sy8106a_reg_sc *VAR_5;
 uint8_t VAR_6;

 VAR_5 = FUNC_0(VAR_2);

 FUNC_1(VAR_5->base_dev, VAR_1, &VAR_6, 1);
 if (VAR_3)
  VAR_6 &= ~VAR_0;
 else
  VAR_6 |= VAR_0;
 FUNC_2(VAR_5->base_dev, VAR_1, VAR_6);

 *VAR_4 = VAR_5->param->ramp_delay;

 return (0);
}
