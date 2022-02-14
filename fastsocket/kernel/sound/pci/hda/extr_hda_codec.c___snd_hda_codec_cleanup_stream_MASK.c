
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_cvt_setup {scalar_t__ active; } ;
struct hda_codec {scalar_t__ no_sticky_stream; } ;
typedef int hda_nid_t ;


 struct hda_cvt_setup* FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,struct hda_cvt_setup*) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(struct hda_codec *VAR_0, hda_nid_t VAR_1,
        int VAR_2)
{
 struct hda_cvt_setup *VAR_3;

 if (!VAR_1)
  return;

 if (VAR_0->no_sticky_stream)
  VAR_2 = 1;

 FUNC_2("hda_codec_cleanup_stream: NID=0x%x\n", VAR_1);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3) {




  if (VAR_2)
   FUNC_1(VAR_0, VAR_3);
  else
   VAR_3->active = 0;
 }
}
