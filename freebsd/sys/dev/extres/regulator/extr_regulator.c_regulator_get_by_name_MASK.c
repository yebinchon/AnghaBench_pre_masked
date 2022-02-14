
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
 struct regnode* FUNC_2 (char const*) ;
 int FUNC_3 (struct regnode*,int ) ;

int
FUNC_4(device_t VAR_1, const char *VAR_2, regulator_t *VAR_3)
{
 struct regnode *VAR_4;

 FUNC_0();
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }
 *VAR_3 = FUNC_3(VAR_4, VAR_1);
 FUNC_1();
 return (0);
}
