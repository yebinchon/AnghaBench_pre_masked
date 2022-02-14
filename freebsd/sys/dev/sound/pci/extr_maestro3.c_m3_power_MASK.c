
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct sc_info *VAR_1, int VAR_2)
{
 u_int32_t VAR_3;

 FUNC_0(VAR_0, ("m3_power(%d)\n", VAR_2));
 FUNC_1(VAR_1);

 VAR_3 = FUNC_2(VAR_1->dev, 0x34, 1);
 if (FUNC_2(VAR_1->dev, VAR_3, 1) == 1) {
  FUNC_3(VAR_1->dev, VAR_3 + 4, VAR_2, 1);
 }

 return 0;
}
