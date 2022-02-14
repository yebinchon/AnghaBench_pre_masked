
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_rchinfo {int run; int irqmask; int setupreg; int sizereg; int spd; int fmt; int num; struct sc_info* parent; } ;
struct sc_info {int bufsz; int lock; int audigy; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int FUNC_1 (int) ;




 int FUNC_2 (int ) ;
 int FUNC_3 (struct sc_info*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sc_info*,int ,int ,int) ;
 int FUNC_6 (struct sc_info*,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(kobj_t VAR_10, void *VAR_11, int VAR_12)
{
 struct sc_rchinfo *VAR_13 = VAR_11;
 struct sc_info *VAR_14 = VAR_13->parent;
 u_int32_t VAR_15, VAR_16;

 if (!FUNC_1(VAR_12))
  return 0;

 switch(VAR_14->bufsz) {
 case 4096:
  VAR_16 = VAR_7;
  break;

 case 8192:
  VAR_16 = VAR_9;
  break;

 case 16384:
  VAR_16 = VAR_5;
  break;

 case 32768:
  VAR_16 = VAR_6;
  break;

 case 65536:
  VAR_16 = VAR_8;
  break;

 default:
  VAR_16 = VAR_7;
 }

 FUNC_7(VAR_14->lock);
 switch(VAR_12) {
 case 129:
  VAR_13->run = 1;
  FUNC_6(VAR_14, 0, VAR_13->sizereg, VAR_16);
  if (VAR_13->num == 0) {
   if (VAR_14->audigy) {
    VAR_15 = VAR_2;
    if (FUNC_0(VAR_13->fmt) > 1)
     VAR_15 |= VAR_3;
    VAR_15 |= FUNC_2(VAR_13->spd);
   } else {
    VAR_15 = VAR_0;
    if (FUNC_0(VAR_13->fmt) > 1)
     VAR_15 |= VAR_1;
    VAR_15 |= FUNC_4(VAR_13->spd);
   }

   FUNC_6(VAR_14, 0, VAR_13->setupreg, 0);
   FUNC_6(VAR_14, 0, VAR_13->setupreg, VAR_15);
  }
  VAR_15 = FUNC_3(VAR_14, VAR_4, 4);
  VAR_15 |= VAR_13->irqmask;
  FUNC_5(VAR_14, VAR_4, VAR_15, 4);
  break;

 case 128:
 case 132:
  VAR_13->run = 0;
  FUNC_6(VAR_14, 0, VAR_13->sizereg, 0);
  if (VAR_13->setupreg)
   FUNC_6(VAR_14, 0, VAR_13->setupreg, 0);
  VAR_15 = FUNC_3(VAR_14, VAR_4, 4);
  VAR_15 &= ~VAR_13->irqmask;
  FUNC_5(VAR_14, VAR_4, VAR_15, 4);
  break;

 case 130:
 case 131:
 default:
  break;
 }
 FUNC_8(VAR_14->lock);

 return 0;
}
