
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dev; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*,int ,int) ;
 int FUNC_4 (struct sc_info*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_2, void *VAR_3, int VAR_4, u_int32_t VAR_5)
{
 struct sc_info *VAR_6 = (struct sc_info *)VAR_3;
 if (FUNC_2(VAR_6)) {
  FUNC_1(VAR_6->dev, "m3_wrcd timed out.\n");
  return -1;
 }
 FUNC_4(VAR_6, VAR_1, VAR_5);
 FUNC_3(VAR_6, VAR_0, VAR_4 & 0x7f);
 FUNC_0(50);
 return 0;
}
