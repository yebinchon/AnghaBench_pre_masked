
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {int vendor_id; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_7, hda_nid_t VAR_8,
         hda_nid_t VAR_9, u32 VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;

 if (VAR_7->vendor_id == 0x80862807)
  FUNC_0(VAR_7, VAR_8, VAR_9);

 if (FUNC_5(VAR_7, VAR_9) & VAR_0) {
  VAR_12 = FUNC_2(VAR_7, VAR_9, 0,
         VAR_4, 0);

  VAR_13 = VAR_12 & ~VAR_1;
  if (FUNC_1(VAR_11))
   VAR_13 |= VAR_2;
  else
   VAR_13 |= VAR_3;

  FUNC_6("hdmi_setup_stream: "
       "NID=0x%x, %spinctl=0x%x\n",
       VAR_9,
       VAR_12 == VAR_13 ? "" : "new-",
       VAR_13);

  if (VAR_12 != VAR_13)
   FUNC_4(VAR_7, VAR_9, 0,
         VAR_5,
         VAR_13);

 }
 if (FUNC_1(VAR_11) && !VAR_13) {
  FUNC_6("hdmi_setup_stream: HBR is not supported\n");
  return -VAR_6;
 }

 FUNC_3(VAR_7, VAR_8, VAR_10, 0, VAR_11);
 return 0;
}
