
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {int inv_eapd; struct ad198x_spec* spec; } ;
struct TYPE_3__ {int no_share_stream; } ;
struct TYPE_4__ {int mixer_nid; int beep_nid; TYPE_1__ multiout; } ;
struct ad198x_spec {TYPE_2__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct ad198x_spec*,int,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_5)
{
 int VAR_6;
 struct ad198x_spec *VAR_7;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7 = VAR_5->spec;


 VAR_5->inv_eapd = 1;

 VAR_7->gen.mixer_nid = 0x07;
 VAR_7->gen.beep_nid = 0x19;
 FUNC_2(VAR_7, 0x18, 0, VAR_2);







 VAR_7->gen.multiout.no_share_stream = 1;

 FUNC_5(VAR_5, ((void*)0), VAR_3, VAR_4);
 FUNC_3(VAR_5, VAR_0);

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 < 0) {
  FUNC_4(VAR_5);
  return VAR_6;
 }

 FUNC_3(VAR_5, VAR_1);

 return 0;
}
