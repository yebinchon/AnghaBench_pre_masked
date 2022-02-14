
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct sc_info {int dmac_sh; int dmac_st; } ;
struct sc_chinfo {int dma_active; int buffer; int fmt; int spd; struct sc_info* parent; } ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (struct sc_info*,int ) ;
 int FUNC_5 (struct sc_info*,int ,int) ;
 int FUNC_6 (struct sc_info*,int ) ;

__attribute__((used)) static int
FUNC_7(kobj_t VAR_9, void *VAR_10, int VAR_11)
{
 struct sc_chinfo *VAR_12 = VAR_10;
 struct sc_info *VAR_13 = VAR_12->parent;
 u_int32_t VAR_14, VAR_15;
 u_int8_t VAR_16;

 switch(VAR_11) {
 case 129:

  FUNC_6(VAR_13, VAR_12->spd);


  VAR_16 = FUNC_4(VAR_13, VAR_8) & ~VAR_0;
  VAR_16 |= FUNC_0(VAR_12->fmt);
  FUNC_5(VAR_13, VAR_8, VAR_16);


  VAR_14 = FUNC_2(VAR_12->buffer) / 2;
  FUNC_3(VAR_13->dmac_st, VAR_13->dmac_sh,
      FUNC_1(VAR_12->buffer),
      VAR_14 - 1,
      VAR_1 | VAR_2);
  VAR_14 = VAR_14 / VAR_3 - 1;
  FUNC_5(VAR_13, VAR_5, VAR_14 >> 8);
  FUNC_5(VAR_13, VAR_6, VAR_14 & 0xff);


  VAR_15 = FUNC_4(VAR_13, VAR_7) | VAR_4;
  FUNC_5(VAR_13, VAR_7, VAR_15);
  VAR_12->dma_active = 1;
  break;
 case 128:
 case 130:
  VAR_15 = FUNC_4(VAR_13, VAR_7) & ~VAR_4;
  FUNC_5(VAR_13, VAR_7, VAR_15);
  VAR_12->dma_active = 0;
  break;
 }

 return 0;
}
