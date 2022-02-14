
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct hdmi_spec_per_cvt {int cvt_nid; } ;
struct hdmi_spec {int dummy; } ;
struct hda_spdif_out {int ctls; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {int spdif_mutex; scalar_t__ spdif_status_reset; struct hdmi_spec* spec; } ;
struct TYPE_2__ {int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hda_codec*,int) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 struct hda_spdif_out* FUNC_5 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_6(struct hda_pcm_stream *VAR_7,
         struct hda_codec *VAR_8,
         unsigned int VAR_9,
         unsigned int VAR_10,
         struct snd_pcm_substream *VAR_11)
{
 int VAR_12;
 unsigned int VAR_13, VAR_14;
 int VAR_15;
 struct hdmi_spec *VAR_16 = VAR_8->spec;
 struct hda_spdif_out *VAR_17;
 struct hdmi_spec_per_cvt *VAR_18;

 FUNC_1(&VAR_8->spdif_mutex);
 VAR_18 = FUNC_0(VAR_16, 0);
 VAR_17 = FUNC_5(VAR_8, VAR_18->cvt_nid);

 VAR_12 = VAR_11->runtime->channels;

 VAR_13 = 0x2;


 if (VAR_8->spdif_status_reset && (VAR_17->ctls & VAR_0))
  FUNC_4(VAR_8,
    VAR_6,
    0,
    VAR_2,
    VAR_17->ctls & ~VAR_0 & 0xff);


 FUNC_4(VAR_8, VAR_6, 0,
   VAR_1, (VAR_9 << 4) | 0x0);


 FUNC_4(VAR_8, VAR_6, 0,
   VAR_4, VAR_10);



 if (VAR_8->spdif_status_reset && (VAR_17->ctls & VAR_0)) {
  FUNC_4(VAR_8,
    VAR_6,
    0,
    VAR_2,
    VAR_17->ctls & 0xff);
  FUNC_4(VAR_8,
    VAR_6,
    0,
    VAR_3, VAR_13);
 }

 for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
  if (VAR_12 == 2)
   VAR_14 = 0;
  else
   VAR_14 = VAR_15 * 2;




  if (VAR_8->spdif_status_reset &&
  (VAR_17->ctls & VAR_0))
   FUNC_4(VAR_8,
    VAR_5[VAR_15],
    0,
    VAR_2,
    VAR_17->ctls & ~VAR_0 & 0xff);

  FUNC_4(VAR_8,
    VAR_5[VAR_15],
    0,
    VAR_1,
    (VAR_9 << 4) | VAR_14);

  FUNC_4(VAR_8,
    VAR_5[VAR_15],
    0,
    VAR_4,
    VAR_10);


  if (VAR_8->spdif_status_reset &&
  (VAR_17->ctls & VAR_0)) {
   FUNC_4(VAR_8,
     VAR_5[VAR_15],
     0,
     VAR_2,
     VAR_17->ctls & 0xff);
   FUNC_4(VAR_8,
     VAR_5[VAR_15],
     0,
     VAR_3, VAR_13);
  }
 }

 FUNC_3(VAR_8, VAR_12);

 FUNC_2(&VAR_8->spdif_mutex);
 return 0;
}
