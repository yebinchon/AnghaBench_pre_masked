
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sy8106a_reg_sc {int base_dev; } ;
struct regnode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sy8106a_reg_sc* FUNC_0 (struct regnode*) ;
 int FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_2(struct regnode *VAR_4, int *VAR_5)
{
 struct sy8106a_reg_sc *VAR_6;
 uint8_t VAR_7;

 VAR_6 = FUNC_0(VAR_4);

 FUNC_1(VAR_6->base_dev, VAR_3, &VAR_7, 1);
 *VAR_5 = (VAR_7 & VAR_1) * VAR_2 +
     VAR_0;

 return (0);
}
