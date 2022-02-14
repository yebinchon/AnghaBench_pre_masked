
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {int dummy; } ;
struct hda_jack_tbl {int nid; int jack_dirty; } ;
struct hda_codec {int addr; struct hdmi_spec* spec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int,int,int) ;
 int FUNC_1 (struct hdmi_spec*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct hdmi_spec*,int) ;
 int FUNC_4 (struct hda_codec*) ;
 struct hda_jack_tbl* FUNC_5 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_4, unsigned int VAR_5)
{
 struct hdmi_spec *VAR_6 = VAR_4->spec;
 int VAR_7 = VAR_5 >> VAR_2;
 int VAR_8;
 int VAR_9;
 struct hda_jack_tbl *VAR_10;

 VAR_10 = FUNC_5(VAR_4, VAR_7);
 if (!VAR_10)
  return;
 VAR_8 = VAR_10->nid;
 VAR_10->jack_dirty = 1;

 FUNC_0(VAR_3,
  "HDMI hot plug event: Codec=%d Pin=%d Presence_Detect=%d ELD_Valid=%d\n",
  VAR_4->addr, VAR_8,
  !!(VAR_5 & VAR_1), !!(VAR_5 & VAR_0));

 VAR_9 = FUNC_3(VAR_6, VAR_8);
 if (VAR_9 < 0)
  return;

 FUNC_2(FUNC_1(VAR_6, VAR_9), 1);
 FUNC_4(VAR_4);
}
