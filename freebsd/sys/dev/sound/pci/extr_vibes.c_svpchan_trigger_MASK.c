
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct sc_info {int dmaa_sh; int dmaa_st; } ;
struct sc_chinfo {int spd; int dma_active; int buffer; int fmt; struct sc_info* parent; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (struct sc_info*,int ) ;
 int FUNC_5 (struct sc_info*,int ,int) ;

__attribute__((used)) static int
FUNC_6(kobj_t VAR_12, void *VAR_13, int VAR_14)
{
 struct sc_chinfo *VAR_15 = VAR_13;
 struct sc_info *VAR_16 = VAR_15->parent;
 u_int32_t VAR_17, VAR_18, VAR_19;
 u_int8_t VAR_20;

 switch(VAR_14) {
 case 129:

  VAR_19 = (VAR_15->spd * 65536) / 48000;
  if (VAR_19 > 65535)
   VAR_19 = 65535;
  FUNC_5(VAR_16, VAR_10, VAR_19 >> 8);
  FUNC_5(VAR_16, VAR_11, VAR_19 & 0xff);


  VAR_20 = FUNC_4(VAR_16, VAR_9) & ~VAR_0;
  VAR_20 |= FUNC_0(VAR_15->fmt);
  FUNC_5(VAR_16, VAR_9, VAR_20);


  VAR_17 = FUNC_2(VAR_15->buffer);
  FUNC_3(VAR_16->dmaa_st, VAR_16->dmaa_sh,
      FUNC_1(VAR_15->buffer),
      VAR_17 - 1,
      VAR_1 | VAR_2);
  VAR_17 = VAR_17 / VAR_3 - 1;
  FUNC_5(VAR_16, VAR_6, VAR_17 >> 8);
  FUNC_5(VAR_16, VAR_7, VAR_17 & 0xff);


  VAR_18 = FUNC_4(VAR_16, VAR_8);
  VAR_18 = (VAR_18 | VAR_5) & ~VAR_4;
  FUNC_5(VAR_16, VAR_8, VAR_18);
  VAR_15->dma_active = 1;
  break;
 case 128:
 case 130:
  VAR_18 = FUNC_4(VAR_16, VAR_8) & ~VAR_5;
  FUNC_5(VAR_16, VAR_8, VAR_18);
  VAR_15->dma_active = 0;
  break;
 }

 return 0;
}
