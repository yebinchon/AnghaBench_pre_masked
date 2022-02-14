
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct sc_info {int sh; int st; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct sc_info *VAR_2, u_int8_t VAR_3)
{
 u_int32_t VAR_4, VAR_5;

 VAR_4 = 1000;
 do {
  VAR_5 = FUNC_1(VAR_2->st, VAR_2->sh, VAR_1);
  if (~VAR_5 & 0x80)
   break;
  FUNC_0(20);
 } while (--VAR_4 != 0);

 if (VAR_4 == 0)
  FUNC_3(VAR_2->dev, "als_esp_wr timeout");

 FUNC_2(VAR_2->st, VAR_2->sh, VAR_0, VAR_3);
}
