
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_pcm_stream {scalar_t__ substreams; } ;
struct hda_pcm {struct hda_pcm_stream* stream; int name; } ;
struct hda_codec {struct hda_bus* bus; } ;
struct TYPE_2__ {int (* attach_pcm ) (struct hda_bus*,struct hda_codec*,struct hda_pcm*) ;} ;
struct hda_bus {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct hda_pcm_stream*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct hda_bus*,struct hda_codec*,struct hda_pcm*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_1, struct hda_pcm *VAR_2)
{
 struct hda_bus *VAR_3 = VAR_1->bus;
 struct hda_pcm_stream *VAR_4;
 int VAR_5, VAR_6;

 if (FUNC_1(!VAR_2->name))
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_4 = &VAR_2->stream[VAR_5];
  if (VAR_4->substreams) {
   VAR_6 = FUNC_0(VAR_1, VAR_4);
   if (VAR_6 < 0)
    return VAR_6;
  }
 }
 return VAR_3->ops.attach_pcm(VAR_3, VAR_1, VAR_2);
}
