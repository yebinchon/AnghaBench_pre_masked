
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct ac97_info {int extstat; int lock; } ;


 int VAR_0 ;





 int FUNC_0 (struct ac97_info*,int) ;
 int FUNC_1 (struct ac97_info*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct ac97_info *VAR_1, int VAR_2, int VAR_3)
{
 u_int16_t VAR_4;

 switch(VAR_2) {
 case 132:
 case 128:
 case 130:
 case 131:
 case 129:
  break;

 default:
  return -1;
 }

 FUNC_2(VAR_1->lock);
 if (VAR_3 != 0) {
  VAR_4 = VAR_3;
  if (VAR_1->extstat & VAR_0)
   VAR_4 >>= 1;
  FUNC_1(VAR_1, VAR_2, VAR_4);
 }
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_1->extstat & VAR_0)
  VAR_4 <<= 1;
 FUNC_3(VAR_1->lock);
 return VAR_4;
}
