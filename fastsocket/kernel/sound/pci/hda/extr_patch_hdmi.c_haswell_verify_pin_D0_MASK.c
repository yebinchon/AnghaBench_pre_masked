
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,int ,int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_4 (char*,int ,int,...) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_12,
  hda_nid_t VAR_13, hda_nid_t VAR_14)
{
 int VAR_15, VAR_16, VAR_17;




 if (!FUNC_1(VAR_12, VAR_13, VAR_7))
  FUNC_3(VAR_12, VAR_13, 0, VAR_11, VAR_7);

 if (!FUNC_1(VAR_12, VAR_14, VAR_7)) {
  FUNC_3(VAR_12, VAR_14, 0, VAR_11,
        VAR_7);
  FUNC_0(40);
  VAR_15 = FUNC_2(VAR_12, VAR_14, 0, VAR_9, 0);
  VAR_15 = (VAR_15 & VAR_5) >> VAR_6;
  FUNC_4("Haswell HDMI audio: Power for pin 0x%x is now D%d\n", VAR_14, VAR_15);
 }

 VAR_16 = FUNC_2(VAR_12, VAR_14, 0,
      VAR_8,
      VAR_0 | VAR_1);
 VAR_17 = FUNC_2(VAR_12, VAR_14, 0,
      VAR_8,
      VAR_2 | VAR_1);
 if (VAR_16 != VAR_17) {
  FUNC_3(VAR_12, VAR_14, 0, VAR_10,
        VAR_4 | VAR_3 | VAR_16);

  VAR_16 = FUNC_2(VAR_12, VAR_14, 0,
      VAR_8,
      VAR_0 | VAR_1);
  VAR_17 = FUNC_2(VAR_12, VAR_14, 0,
      VAR_8,
      VAR_2 | VAR_1);
  FUNC_4("Haswell HDMI audio: Mute after set on pin 0x%x: [0x%x 0x%x]\n", VAR_14, VAR_16, VAR_17);
 }
}
