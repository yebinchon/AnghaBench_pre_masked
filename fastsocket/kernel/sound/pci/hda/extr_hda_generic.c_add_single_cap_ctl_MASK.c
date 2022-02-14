
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpname ;
struct snd_kcontrol_new {void* put; } ;
struct hda_gen_spec {int dummy; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_kcontrol_new* FUNC_0 (struct hda_gen_spec*,int,char*,int,int ) ;
 int FUNC_1 (unsigned int,int) ;
 void* VAR_3 ;
 int FUNC_2 (char*,int,char*,char const*,...) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_4, const char *VAR_5,
         int VAR_6, bool VAR_7, unsigned int VAR_8,
         bool VAR_9)
{
 struct hda_gen_spec *VAR_10 = VAR_4->spec;
 char VAR_11[44];
 int VAR_12 = VAR_7 ? VAR_1 : VAR_2;
 const char *VAR_13 = VAR_7 ? "Switch" : "Volume";
 unsigned int VAR_14 = VAR_9 ? 1 : 3;
 struct snd_kcontrol_new *VAR_15;

 if (!VAR_8)
  return 0;

 if (VAR_5)
  FUNC_2(VAR_11, sizeof(VAR_11),
    "%s Capture %s", VAR_5, VAR_13);
 else
  FUNC_2(VAR_11, sizeof(VAR_11),
    "Capture %s", VAR_13);
 VAR_15 = FUNC_0(VAR_10, VAR_12, VAR_11, VAR_6,
      FUNC_1(VAR_8, VAR_14));
 if (!VAR_15)
  return -VAR_0;
 if (VAR_7)
  VAR_15->put = VAR_3;
 if (!VAR_9)
  return 0;


 if (VAR_5)
  FUNC_2(VAR_11, sizeof(VAR_11),
    "Inverted %s Capture %s", VAR_5, VAR_13);
 else
  FUNC_2(VAR_11, sizeof(VAR_11),
    "Inverted Capture %s", VAR_13);
 VAR_15 = FUNC_0(VAR_10, VAR_12, VAR_11, VAR_6,
      FUNC_1(VAR_8, 2));
 if (!VAR_15)
  return -VAR_0;
 if (VAR_7)
  VAR_15->put = VAR_3;
 return 0;
}
