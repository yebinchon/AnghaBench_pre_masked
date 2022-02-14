
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regnode {int dummy; } ;
typedef int regulator_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct regnode* FUNC_2 (int ,intptr_t) ;
 int FUNC_3 (struct regnode*,int ) ;

int
FUNC_4(device_t VAR_1, device_t VAR_2, intptr_t VAR_3, regulator_t *VAR_4)
{
 struct regnode *VAR_5;

 FUNC_0();

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }
 *VAR_4 = FUNC_3(VAR_5, VAR_1);
 FUNC_1();

 return (0);
}
