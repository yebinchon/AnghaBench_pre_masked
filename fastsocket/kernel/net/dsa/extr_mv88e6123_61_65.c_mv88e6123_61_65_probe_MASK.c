
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mii_bus*,int,int ,int) ;

__attribute__((used)) static char *FUNC_2(struct mii_bus *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1, FUNC_0(0), 0x03);
 if (VAR_2 >= 0) {
  VAR_2 &= 0xfff0;
  if (VAR_2 == 0x1210)
   return "Marvell 88E6123";
  if (VAR_2 == 0x1610)
   return "Marvell 88E6161";
  if (VAR_2 == 0x1650)
   return "Marvell 88E6165";
 }

 return ((void*)0);
}
