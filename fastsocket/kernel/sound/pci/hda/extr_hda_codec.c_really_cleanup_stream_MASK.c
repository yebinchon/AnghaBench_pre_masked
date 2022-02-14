
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_cvt_setup {int nid; scalar_t__ format_id; scalar_t__ channel_id; scalar_t__ stream_tag; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_cvt_setup*,int ,int) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2,
      struct hda_cvt_setup *VAR_3)
{
 hda_nid_t VAR_4 = VAR_3->nid;
 if (VAR_3->stream_tag || VAR_3->channel_id)
  FUNC_1(VAR_2, VAR_4, 0, VAR_0, 0);
 if (VAR_3->format_id)
  FUNC_1(VAR_2, VAR_4, 0, VAR_1, 0
);
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->nid = VAR_4;
}
