
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_info {int flags; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sc_info*,int ,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_4)
{
 struct sc_info *VAR_5 = (struct sc_info *)VAR_4;
 uint32_t VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_2(VAR_5, VAR_2, 1);
  if ((VAR_6 & 0x01) == 0)
   return (0);
  FUNC_0(1);
 }
 if ((VAR_5->flags & VAR_1) != 0)
  return (0);
 FUNC_1(VAR_5->dev, "CODEC semaphore timeout\n");
 return (VAR_0);
}
