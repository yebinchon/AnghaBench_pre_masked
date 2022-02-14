
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phynode {int dummy; } ;
typedef int phy_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct phynode*,int ) ;
 struct phynode* FUNC_3 (int ,intptr_t) ;

int
FUNC_4(device_t VAR_1, device_t VAR_2, intptr_t VAR_3,
    phy_t *VAR_4)
{
 struct phynode *VAR_5;

 FUNC_0();

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }
 *VAR_4 = FUNC_2(VAR_5, VAR_1);
 FUNC_1();

 return (0);
}
