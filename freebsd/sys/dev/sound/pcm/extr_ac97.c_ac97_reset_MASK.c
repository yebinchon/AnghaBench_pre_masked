
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ac97_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ac97_info*,int ) ;
 int FUNC_2 (struct ac97_info*,int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct ac97_info *VAR_3)
{
 u_int32_t VAR_4, VAR_5;
 FUNC_2(VAR_3, VAR_2, 0);
 for (VAR_4 = 0; VAR_4 < 500; VAR_4++) {
  VAR_5 = FUNC_1(VAR_3, VAR_1) & VAR_0;
  if (VAR_5 == VAR_0)
   return;
  FUNC_0(1000);
 }
 FUNC_3(VAR_3->dev, "AC97 reset timed out.\n");
}
