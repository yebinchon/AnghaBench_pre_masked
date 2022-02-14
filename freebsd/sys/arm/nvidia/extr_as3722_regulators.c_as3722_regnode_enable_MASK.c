
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regnode {int dummy; } ;
struct as3722_reg_sc {int enable_usec; } ;


 int FUNC_0 (struct as3722_reg_sc*) ;
 int FUNC_1 (struct as3722_reg_sc*) ;
 struct as3722_reg_sc* FUNC_2 (struct regnode*) ;

__attribute__((used)) static int
FUNC_3(struct regnode *VAR_0, bool VAR_1, int *VAR_2)
{
 struct as3722_reg_sc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_0);

 if (VAR_1)
  VAR_4 = FUNC_1(VAR_3);
 else
  VAR_4 = FUNC_0(VAR_3);
 *VAR_2 = VAR_3->enable_usec;
 return (VAR_4);
}
