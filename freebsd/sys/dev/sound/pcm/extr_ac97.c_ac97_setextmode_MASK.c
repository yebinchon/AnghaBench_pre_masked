
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct ac97_info {int extcaps; int extstat; int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ac97_info*,int ) ;
 int FUNC_1 (struct ac97_info*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct ac97_info *VAR_2, u_int16_t VAR_3)
{
 VAR_3 &= VAR_0;
 if ((VAR_3 & ~VAR_2->extcaps) != 0) {
  FUNC_2(VAR_2->dev, "ac97 invalid mode set 0x%04x\n",
         VAR_3);
  return -1;
 }
 FUNC_3(VAR_2->lock);
 FUNC_1(VAR_2, VAR_1, VAR_3);
 VAR_2->extstat = FUNC_0(VAR_2, VAR_1) & VAR_0;
 FUNC_4(VAR_2->lock);
 return (VAR_3 == VAR_2->extstat)? 0 : -1;
}
