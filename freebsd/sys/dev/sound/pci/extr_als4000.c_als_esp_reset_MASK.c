
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dev; int sh; int st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct sc_info *VAR_3)
{
 u_int32_t VAR_4, VAR_5, VAR_6;

 FUNC_2(VAR_3->st, VAR_3->sh, VAR_2, 1);
 FUNC_0(10);
 FUNC_2(VAR_3->st, VAR_3->sh, VAR_2, 0);
 FUNC_0(30);

 VAR_4 = 1000;
 do {
  VAR_5 = FUNC_1(VAR_3->st, VAR_3->sh, VAR_1);
  if (VAR_5 & 0x80) {
   VAR_6 = FUNC_1(VAR_3->st, VAR_3->sh, VAR_0);
   if (VAR_6 == 0xaa)
    return 0;
   else
    break;
  }
  FUNC_0(20);
 } while (--VAR_4 != 0);

 if (VAR_4 == 0)
  FUNC_3(VAR_3->dev, "als_esp_reset timeout");
 return 1;
}
