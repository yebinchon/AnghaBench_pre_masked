
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mii_bus*,int ,int) ;

__attribute__((used)) static char *FUNC_2(struct mii_bus *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, FUNC_0(0), 0x03);
 if (VAR_2 >= 0) {
  VAR_2 &= 0xfff0;
  if (VAR_2 == 0x0600)
   return "Marvell 88E6060";
 }

 return ((void*)0);
}
