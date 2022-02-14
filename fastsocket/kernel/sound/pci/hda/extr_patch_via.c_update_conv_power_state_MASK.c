
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_spec {unsigned int* dac_stream_tag; } ;
struct hda_codec {struct via_spec* spec; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int ,unsigned int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_4, hda_nid_t VAR_5,
          unsigned int VAR_6, unsigned int VAR_7)
{
 struct via_spec *VAR_8 = VAR_4->spec;
 unsigned int VAR_9;

 if (FUNC_0(VAR_4, VAR_5, VAR_6))
  return;
 VAR_9 = FUNC_1(VAR_4, VAR_5, 0, VAR_1, 0);
 if (VAR_9 && (VAR_8->dac_stream_tag[VAR_7] != VAR_9))
  VAR_8->dac_stream_tag[VAR_7] = VAR_9;

 FUNC_2(VAR_4, VAR_5, 0, VAR_3, VAR_6);
 if (VAR_6 == VAR_0) {
  VAR_9 = FUNC_1(VAR_4, VAR_5, 0, VAR_1, 0);
  if (!VAR_9 && (VAR_8->dac_stream_tag[VAR_7] != VAR_9))
   FUNC_2(VAR_4, VAR_5, 0,
        VAR_2,
        VAR_8->dac_stream_tag[VAR_7]);
 }
}
