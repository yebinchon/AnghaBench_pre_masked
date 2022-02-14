
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_7,
      struct hda_codec *VAR_8, hda_nid_t VAR_9,
      unsigned int VAR_10)
{
 int VAR_11 = FUNC_0(VAR_8, VAR_9, 0, VAR_4, 0);
 FUNC_1(VAR_7,
      "  Converter: stream=%d, channel=%d\n",
      (VAR_11 & VAR_1) >> VAR_2,
      VAR_11 & VAR_0);

 if (VAR_10 == VAR_6 && (VAR_11 & VAR_0) == 0) {
  int VAR_12 = FUNC_0(VAR_8, VAR_9, 0,
          VAR_5, 0);
  FUNC_1(VAR_7, "  SDI-Select: %d\n",
       VAR_12 & VAR_3);
 }
}
