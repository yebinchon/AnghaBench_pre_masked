
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bgx {int lmac_count; int lmac_type; int lane_to_sds; TYPE_1__* lmac; int bgx_id; int dev; } ;
struct TYPE_2__ {int lmacid_bd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct bgx*,int ,int ,unsigned long) ;
 scalar_t__ FUNC_1 (struct bgx*,int ,int ) ;
 int FUNC_2 (struct bgx*,int,scalar_t__,int) ;
 int FUNC_3 (struct bgx*) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_5(struct bgx *VAR_14)
{
 int VAR_15;

 FUNC_3(VAR_14);

 FUNC_0(VAR_14, 0, VAR_3, VAR_9);
 if (FUNC_1(VAR_14, 0, VAR_1))
  FUNC_4(VAR_14->dev, "BGX%d BIST failed\n", VAR_14->bgx_id);


 for (VAR_15 = 0; VAR_15 < VAR_14->lmac_count; VAR_15++) {
  if (VAR_14->lmac_type == VAR_8) {
   if (VAR_15)
    VAR_14->lane_to_sds = 0x0e;
   else
    VAR_14->lane_to_sds = 0x04;
   FUNC_2(VAR_14, VAR_15, VAR_0,
       (VAR_14->lmac_type << 8) | VAR_14->lane_to_sds);
   continue;
  }
  FUNC_2(VAR_14, VAR_15, VAR_0,
      (VAR_14->lmac_type << 8) | (VAR_14->lane_to_sds + VAR_15));
  VAR_14->lmac[VAR_15].lmacid_bd = VAR_13;
  VAR_13++;
 }

 FUNC_2(VAR_14, 0, VAR_7, VAR_14->lmac_count);
 FUNC_2(VAR_14, 0, VAR_5, VAR_14->lmac_count);


 for (VAR_15 = 0; VAR_15 < VAR_14->lmac_count; VAR_15++) {
  FUNC_0(VAR_14, 0, VAR_2,
      ((1UL << VAR_10) - 1) <<
      (VAR_15 * VAR_10));
 }


 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++)
  FUNC_2(VAR_14, 0, VAR_4 + (VAR_15 * 8), 0x00);


 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
  FUNC_2(VAR_14, 0, VAR_6 + (VAR_15 * 8), 0x00);
}
