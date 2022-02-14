
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct hdaa_widget {int* eld; int eld_len; int nid; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int dev; } ;
typedef int device_t ;


 int * VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,char*,int ,int,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_widget *VAR_2)
{
 struct hdaa_devinfo *VAR_3 = VAR_2->devinfo;
 device_t VAR_4 = VAR_3->dev;
 uint8_t *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_2->eld == ((void*)0) || VAR_2->eld_len < 4)
  return;
 FUNC_0(VAR_4,
     "ELD nid=%d: ELD_Ver=%u Baseline_ELD_Len=%u\n",
     VAR_2->nid, VAR_2->eld[0] >> 3, VAR_2->eld[2]);
 if ((VAR_2->eld[0] >> 3) != 0x02)
  return;
 VAR_6 = FUNC_1(VAR_2->eld_len, (u_int)VAR_2->eld[2] * 4);
 VAR_7 = VAR_2->eld[4] & 0x1f;
 FUNC_0(VAR_4,
     "ELD nid=%d: CEA_EDID_Ver=%u MNL=%u\n",
     VAR_2->nid, VAR_2->eld[4] >> 5, VAR_7);
 VAR_9 = VAR_2->eld[5] >> 4;
 FUNC_0(VAR_4,
     "ELD nid=%d: SAD_Count=%u Conn_Type=%u S_AI=%u HDCP=%u\n",
     VAR_2->nid, VAR_9, (VAR_2->eld[5] >> 2) & 0x3,
     (VAR_2->eld[5] >> 1) & 0x1, VAR_2->eld[5] & 0x1);
 FUNC_0(VAR_4,
     "ELD nid=%d: Aud_Synch_Delay=%ums\n",
     VAR_2->nid, VAR_2->eld[6] * 2);
 FUNC_0(VAR_4,
     "ELD nid=%d: Channels=0x%b\n",
     VAR_2->nid, VAR_2->eld[7],
     "\020\07RLRC\06FLRC\05RC\04RLR\03FC\02LFE\01FLR");
 FUNC_0(VAR_4,
     "ELD nid=%d: Port_ID=0x%02x%02x%02x%02x%02x%02x%02x%02x\n",
     VAR_2->nid, VAR_2->eld[8], VAR_2->eld[9], VAR_2->eld[10], VAR_2->eld[11],
     VAR_2->eld[12], VAR_2->eld[13], VAR_2->eld[14], VAR_2->eld[15]);
 FUNC_0(VAR_4,
     "ELD nid=%d: Manufacturer_Name=0x%02x%02x\n",
     VAR_2->nid, VAR_2->eld[16], VAR_2->eld[17]);
 FUNC_0(VAR_4,
     "ELD nid=%d: Product_Code=0x%02x%02x\n",
     VAR_2->nid, VAR_2->eld[18], VAR_2->eld[19]);
 FUNC_0(VAR_4,
     "ELD nid=%d: Monitor_Name_String='%.*s'\n",
     VAR_2->nid, VAR_7, &VAR_2->eld[20]);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_5 = &VAR_2->eld[20 + VAR_7 + VAR_8 * 3];
  VAR_10 = (VAR_5[0] >> 3) & 0x0f;
  if (VAR_10 == VAR_1) {
   VAR_10 = (VAR_5[2] >> 3) & 0x1f;
   if (VAR_10 < 1 || VAR_10 > 3)
    VAR_10 = 0;
   else
    VAR_10 += 14;
  }
  FUNC_0(VAR_4,
      "ELD nid=%d: %s %dch freqs=0x%b",
      VAR_2->nid, VAR_0[VAR_10], (VAR_5[0] & 0x07) + 1,
      VAR_5[1], "\020\007192\006176\00596\00488\00348\00244\00132");
  switch (VAR_10) {
  case 132:
   FUNC_2(" sizes=0x%b",
       VAR_5[2] & 0x07, "\020\00324\00220\00116");
   break;
  case 135:
  case 130:
  case 131:
  case 129:
  case 136:
  case 133:
  case 134:
   FUNC_2(" max_bitrate=%d", VAR_5[2] * 8000);
   break;
  case 128:
   FUNC_2(" profile=%d", VAR_5[2] & 0x07);
   break;
  }
  FUNC_2("\n");
 }
}
