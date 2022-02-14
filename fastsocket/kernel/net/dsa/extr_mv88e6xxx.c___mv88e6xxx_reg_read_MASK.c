
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;


 int FUNC_0 (struct mii_bus*,int,int) ;
 int FUNC_1 (struct mii_bus*,int,int ,int) ;
 int FUNC_2 (struct mii_bus*,int) ;

int FUNC_3(struct mii_bus *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_1 == 0)
  return FUNC_0(VAR_0, VAR_2, VAR_3);




 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;




 VAR_4 = FUNC_1(VAR_0, VAR_1, 0, 0x9800 | (VAR_2 << 5) | VAR_3);
 if (VAR_4 < 0)
  return VAR_4;




 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;




 VAR_4 = FUNC_0(VAR_0, VAR_1, 1);
 if (VAR_4 < 0)
  return VAR_4;

 return VAR_4 & 0xffff;
}
