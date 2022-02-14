
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;





 int VAR_4 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_5,
      struct hda_codec *VAR_6, hda_nid_t VAR_7,
      int VAR_8)
{
 unsigned int VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_7, 0,
         VAR_4, 0);
 FUNC_1(VAR_5, "  Pin-ctls: 0x%02x:", VAR_9);
 if (VAR_9 & VAR_1)
  FUNC_1(VAR_5, " IN");
 if (VAR_9 & VAR_2)
  FUNC_1(VAR_5, " OUT");
 if (VAR_9 & VAR_0)
  FUNC_1(VAR_5, " HP");
 if (VAR_8) {
  int VAR_10 = VAR_9 & VAR_3;
  switch (VAR_10) {
  case 128:
   FUNC_1(VAR_5, " VREF_HIZ");
   break;
  case 131:
   FUNC_1(VAR_5, " VREF_50");
   break;
  case 129:
   FUNC_1(VAR_5, " VREF_GRD");
   break;
  case 130:
   FUNC_1(VAR_5, " VREF_80");
   break;
  case 132:
   FUNC_1(VAR_5, " VREF_100");
   break;
  }
 }
 FUNC_1(VAR_5, "\n");
}
