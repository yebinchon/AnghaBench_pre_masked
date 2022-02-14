
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct syr827_reg_sc* FUNC_1 (struct regnode*) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct regnode *VAR_3, int VAR_4,
    int VAR_5, int *VAR_6)
{
 struct syr827_reg_sc *VAR_7;
 int VAR_8;
 uint8_t VAR_9;

 VAR_7 = FUNC_1(VAR_3);


 FUNC_2(VAR_7->base_dev, VAR_7->volt_reg, &VAR_9, 1);
 VAR_8 = (VAR_9 & VAR_0) * VAR_2 +
     VAR_1;


 VAR_9 &= ~VAR_0;
 VAR_9 |= ((VAR_4 - VAR_1) / VAR_2);
 FUNC_3(VAR_7->base_dev, VAR_7->volt_reg, VAR_9);


 *VAR_6 = VAR_7->param->ramp_delay *
     (FUNC_0(VAR_8 - VAR_4) / VAR_2);

 return (0);
}
