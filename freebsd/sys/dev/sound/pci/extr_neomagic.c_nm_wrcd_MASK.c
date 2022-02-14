
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dev; scalar_t__ ac97_base; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_0, void *VAR_1, int VAR_2, u_int32_t VAR_3)
{
 struct sc_info *VAR_4 = (struct sc_info *)VAR_1;
 int VAR_5 = 3;

 if (!FUNC_2(VAR_4)) {
  while (VAR_5-- > 0) {
   FUNC_3(VAR_4, VAR_4->ac97_base + VAR_2, VAR_3, 2);
   if (!FUNC_2(VAR_4)) {
    FUNC_0(1000);
    return 0;
   }
  }
 }
 FUNC_1(VAR_4->dev, "ac97 codec not ready\n");
 return -1;
}
