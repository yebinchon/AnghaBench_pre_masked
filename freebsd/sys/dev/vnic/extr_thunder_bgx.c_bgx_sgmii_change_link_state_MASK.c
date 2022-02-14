
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct lmac {int last_duplex; int last_speed; int lmacid; scalar_t__ link_up; struct bgx* bgx; } ;
struct bgx {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bgx*,int ,int ) ;
 int FUNC_1 (struct bgx*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct lmac *VAR_12)
{
 struct bgx *VAR_13 = VAR_12->bgx;
 uint64_t VAR_14;
 uint64_t VAR_15 = 0;
 uint64_t VAR_16 = 0;

 VAR_14 = FUNC_0(VAR_13, VAR_12->lmacid, VAR_0);
 VAR_14 &= ~VAR_5;
 FUNC_1(VAR_13, VAR_12->lmacid, VAR_0, VAR_14);

 VAR_15 = FUNC_0(VAR_13, VAR_12->lmacid, VAR_1);
 VAR_16 = FUNC_0(VAR_13, VAR_12->lmacid, VAR_4);

 if (VAR_12->link_up) {
  VAR_16 &= ~VAR_10;
  VAR_15 &= ~VAR_6;
  VAR_15 |= (VAR_12->last_duplex << 2);
 } else {
  VAR_16 |= VAR_10;
 }

 switch (VAR_12->last_speed) {
 case 10:
  VAR_15 &= ~VAR_8;
  VAR_15 |= VAR_9;
  VAR_15 &= ~VAR_7;
  VAR_16 &= ~VAR_11;
  VAR_16 |= 50;
  FUNC_1(VAR_13, VAR_12->lmacid, VAR_3, 64);
  FUNC_1(VAR_13, VAR_12->lmacid, VAR_2, 0);
  break;
 case 100:
  VAR_15 &= ~VAR_8;
  VAR_15 &= ~VAR_9;
  VAR_15 &= ~VAR_7;
  VAR_16 &= ~VAR_11;
  VAR_16 |= 5;
  FUNC_1(VAR_13, VAR_12->lmacid, VAR_3, 64);
  FUNC_1(VAR_13, VAR_12->lmacid, VAR_2, 0);
  break;
 case 1000:
  VAR_15 |= VAR_8;
  VAR_15 &= ~VAR_9;
  VAR_15 |= VAR_7;
  VAR_16 &= ~VAR_11;
  VAR_16 |= 1;
  FUNC_1(VAR_13, VAR_12->lmacid, VAR_3, 512);
  if (VAR_12->last_duplex)
   FUNC_1(VAR_13, VAR_12->lmacid,
          VAR_2, 0);
  else
   FUNC_1(VAR_13, VAR_12->lmacid,
          VAR_2, 8192);
  break;
 default:
  break;
 }
 FUNC_1(VAR_13, VAR_12->lmacid, VAR_4, VAR_16);
 FUNC_1(VAR_13, VAR_12->lmacid, VAR_1, VAR_15);

 VAR_15 = FUNC_0(VAR_13, VAR_12->lmacid, VAR_1);


 VAR_14 |= VAR_5;
 FUNC_1(VAR_13, VAR_12->lmacid, VAR_0, VAR_14);
}
