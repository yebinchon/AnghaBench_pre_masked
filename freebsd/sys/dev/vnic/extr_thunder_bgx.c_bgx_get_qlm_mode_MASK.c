
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgx {int bgx_id; void* qlm_mode; int dev; } ;
typedef int device_t ;


 int VAR_0 ;





 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bgx*,int ,int ) ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bgx *VAR_11)
{
 device_t VAR_12 = VAR_11->dev;;
 int VAR_13;
 int VAR_14;




 VAR_13 = FUNC_0(VAR_11, 0, VAR_0);
 VAR_13 = (VAR_13 >> 8) & 0x07;

 VAR_14 = FUNC_0(VAR_11, 0, VAR_1) &
     VAR_9;

 switch (VAR_13) {
 case 131:
  VAR_11->qlm_mode = VAR_5;
  if (VAR_10) {
   FUNC_1(VAR_12, "BGX%d QLM mode: SGMII\n",
       VAR_11->bgx_id);
  }
  break;
 case 130:
  VAR_11->qlm_mode = VAR_6;
  if (VAR_10) {
   FUNC_1(VAR_12, "BGX%d QLM mode: XAUI\n",
       VAR_11->bgx_id);
  }
  break;
 case 132:
  VAR_11->qlm_mode = VAR_4;
  if (VAR_10) {
   FUNC_1(VAR_12, "BGX%d QLM mode: RXAUI\n",
       VAR_11->bgx_id);
  }
  break;
 case 129:
  if (!VAR_14) {
   VAR_11->qlm_mode = VAR_7;
   if (VAR_10) {
    FUNC_1(VAR_12, "BGX%d QLM mode: XFI\n",
        VAR_11->bgx_id);
   }
  } else {
   VAR_11->qlm_mode = VAR_2;
   if (VAR_10) {
    FUNC_1(VAR_12, "BGX%d QLM mode: 10G_KR\n",
        VAR_11->bgx_id);
   }
  }
  break;
 case 128:
  if (!VAR_14) {
   VAR_11->qlm_mode = VAR_8;
   if (VAR_10) {
    FUNC_1(VAR_12, "BGX%d QLM mode: XLAUI\n",
        VAR_11->bgx_id);
   }
  } else {
   VAR_11->qlm_mode = VAR_3;
   if (VAR_10) {
    FUNC_1(VAR_12, "BGX%d QLM mode: 40G_KR4\n",
        VAR_11->bgx_id);
   }
  }
  break;
 default:
  VAR_11->qlm_mode = VAR_5;
  if (VAR_10) {
   FUNC_1(VAR_12, "BGX%d QLM default mode: SGMII\n",
       VAR_11->bgx_id);
  }
 }
}
