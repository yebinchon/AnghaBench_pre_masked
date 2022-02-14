
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dev; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sc_info*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_4(kobj_t VAR_1, void *VAR_2)
{
 struct sc_info *VAR_3 = (struct sc_info *)VAR_2;
 u_int32_t VAR_4;

 VAR_4 = FUNC_2(VAR_3->dev, VAR_0, 1);
 if (VAR_4 & 0x03) {
  FUNC_3(VAR_3->dev, VAR_0, VAR_4 & ~0x03, 1);
  FUNC_3(VAR_3->dev, VAR_0, VAR_4 | 0x03, 1);
  FUNC_3(VAR_3->dev, VAR_0, VAR_4 & ~0x03, 1);
  FUNC_0(500000);
 }

 return FUNC_1(VAR_3, 0)? 0 : 1;
}
