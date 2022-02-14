
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct hda_pcm_stream {int nid; } ;
struct hda_codec {int dummy; } ;
struct TYPE_2__ {int rate; } ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct hda_codec*,int ,unsigned int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct hda_pcm_stream *VAR_3,
         struct hda_codec *VAR_4,
         unsigned int VAR_5,
         unsigned int VAR_6,
         struct snd_pcm_substream *VAR_7)
{
 u16 VAR_8;

 FUNC_1(VAR_4, VAR_1, VAR_7->runtime->rate);
 VAR_8 = FUNC_0(VAR_4, VAR_0);
 VAR_8 &= 0xff << (8 * (VAR_7->stream != VAR_2));
 VAR_8 |= ((VAR_5 & 0xf) << 4) << (8 * (VAR_7->stream == VAR_2));
 FUNC_1(VAR_4, VAR_0, VAR_8);

 FUNC_2(VAR_4, VAR_3->nid,
       VAR_5, 0, VAR_6);
 return 0;
}
