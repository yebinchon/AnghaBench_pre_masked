
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_cvt_setup {int stream_tag; int channel_id; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2,
     struct hda_cvt_setup *VAR_3, hda_nid_t VAR_4,
     u32 VAR_5, int VAR_6)
{
 unsigned int VAR_7, VAR_8;

 if (VAR_3->stream_tag != VAR_5 || VAR_3->channel_id != VAR_6) {
  VAR_7 = FUNC_0(VAR_2, VAR_4, 0, VAR_0, 0);
  VAR_8 = (VAR_5 << 4) | VAR_6;
  if (VAR_7 != VAR_8)
   FUNC_1(VAR_2, VAR_4, 0,
         VAR_1,
         VAR_8);
  VAR_3->stream_tag = VAR_5;
  VAR_3->channel_id = VAR_6;
 }
}
