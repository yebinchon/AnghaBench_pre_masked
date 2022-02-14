
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {void* gated_jack; void* gating_jack; } ;
struct hda_codec {int dummy; } ;
typedef void* hda_nid_t ;


 int VAR_0 ;
 struct hda_jack_tbl* FUNC_0 (struct hda_codec*,void*) ;

int FUNC_1(struct hda_codec *VAR_1, hda_nid_t VAR_2,
     hda_nid_t VAR_3)
{
 struct hda_jack_tbl *VAR_4 = FUNC_0(VAR_1, VAR_2);
 struct hda_jack_tbl *VAR_5 = FUNC_0(VAR_1, VAR_3);

 if (!VAR_4 || !VAR_5)
  return -VAR_0;

 VAR_4->gating_jack = VAR_3;
 VAR_5->gated_jack = VAR_2;

 return 0;
}
