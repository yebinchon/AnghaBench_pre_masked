
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
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_6,
      struct hda_codec *VAR_7, hda_nid_t VAR_8,
      int VAR_9, int VAR_10, int VAR_11)
{
 unsigned int VAR_12;
 int VAR_13;

 VAR_9 = VAR_9 == VAR_5 ? VAR_2 : VAR_0;
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  FUNC_1(VAR_6, " [");
  VAR_12 = FUNC_0(VAR_7, VAR_8, 0,
      VAR_4,
      VAR_1 | VAR_9 | VAR_13);
  FUNC_1(VAR_6, "0x%02x", VAR_12);
  if (VAR_10) {
   VAR_12 = FUNC_0(VAR_7, VAR_8, 0,
       VAR_4,
       VAR_3 | VAR_9 | VAR_13);
   FUNC_1(VAR_6, " 0x%02x", VAR_12);
  }
  FUNC_1(VAR_6, "]");
 }
 FUNC_1(VAR_6, "\n");
}
