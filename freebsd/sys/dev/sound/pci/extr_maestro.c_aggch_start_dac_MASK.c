
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_int ;
struct agg_chinfo {int speed; int phys; int base; int buflen; int num; TYPE_1__* parent; scalar_t__ qs16; scalar_t__ stereo; scalar_t__ us; } ;
typedef int bus_addr_t ;
struct TYPE_10__ {int active; } ;


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
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_15 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int,int ,int) ;

__attribute__((used)) static void
FUNC_12(struct agg_chinfo *VAR_16)
{
 bus_addr_t VAR_17;
 u_int32_t VAR_18;
 u_int16_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 u_int VAR_24;
 int VAR_25;

 VAR_18 = VAR_16->speed;
 VAR_17 = (VAR_16->phys - VAR_16->base) >> 1;
 VAR_21 = 0xc & (VAR_17 >> FUNC_0(2));
 VAR_22 = (VAR_16->phys - 16) & VAR_10;
 VAR_19 = VAR_16->buflen;
 VAR_20 = (VAR_16->num << 1) | 32;
 VAR_25 = VAR_8 - VAR_7;

 if (VAR_16->stereo) {
  VAR_22 |= VAR_11;
  if (VAR_16->qs16) {
   VAR_23 = VAR_2;
   VAR_17 >>= 1;
   VAR_19 >>= 1;
   VAR_25 = -VAR_25;
  } else
   VAR_23 = VAR_4;
 } else {
  VAR_25 = 0;
  if (VAR_16->qs16)
   VAR_23 = VAR_1;
  else {
   VAR_23 = VAR_3;
   VAR_18 >>= 1;
  }
 }
 if (VAR_16->us)
  VAR_22 |= VAR_12;

 if (VAR_21 > 8)
  VAR_21 = (VAR_21 >> 1) + 4;

 VAR_24 = (((VAR_18 % 48000) << 16) + 24000) / 48000
     + ((VAR_18 / 48000) << 16);

 FUNC_1(VAR_16->parent);
 FUNC_2(VAR_16->parent, VAR_15);

 FUNC_9(VAR_16->parent, VAR_13 + VAR_21,
     VAR_16->base >> VAR_9);
 FUNC_9(VAR_16->parent, VAR_13 + VAR_21 + 1,
     VAR_16->base >> VAR_9);
 if (VAR_21 < 8) {
  FUNC_9(VAR_16->parent, VAR_13 + VAR_21 + 2,
      VAR_16->base >> VAR_9);
  FUNC_9(VAR_16->parent, VAR_13 + VAR_21 + 3,
      VAR_16->base >> VAR_9);
 }
 FUNC_8(VAR_16->parent, VAR_20, VAR_22);
 FUNC_8(VAR_16->parent, VAR_20 + 1, VAR_22);

 FUNC_4(VAR_16->parent, VAR_20, VAR_17, VAR_19, VAR_25, VAR_24);
 if (VAR_16->stereo) {
  if (VAR_16->qs16)
   VAR_17 |= (VAR_14 >> 1);
  FUNC_4(VAR_16->parent, VAR_20 + 1, VAR_17, VAR_19, -VAR_25, VAR_24);

  FUNC_5();
  FUNC_11(VAR_16->parent, VAR_20, VAR_0,
      (VAR_23 << VAR_5) | VAR_6 | 0xf);
  FUNC_11(VAR_16->parent, VAR_20 + 1, VAR_0,
      (VAR_23 << VAR_5) | VAR_6 | 0xf);
  FUNC_6();
 } else {
  FUNC_11(VAR_16->parent, VAR_20, VAR_0,
      (VAR_23 << VAR_5) | VAR_6 | 0xf);
 }


 VAR_16->parent->active |= (1 << VAR_16->num);

 FUNC_7(VAR_16->parent);
 FUNC_10(VAR_16->parent);
 FUNC_3(VAR_16->parent);
}
