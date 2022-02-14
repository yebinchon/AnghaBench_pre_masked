
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct syr827_reg_sc {int volt_reg; int base_dev; } ;
struct regnode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct syr827_reg_sc* FUNC_0 (struct regnode*) ;
 int FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_2(struct regnode *VAR_3, int *VAR_4)
{
 struct syr827_reg_sc *VAR_5;
 uint8_t VAR_6;

 VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_5->base_dev, VAR_5->volt_reg, &VAR_6, 1);
 *VAR_4 = (VAR_6 & VAR_0) * VAR_2 +
     VAR_1;

 return (0);
}
