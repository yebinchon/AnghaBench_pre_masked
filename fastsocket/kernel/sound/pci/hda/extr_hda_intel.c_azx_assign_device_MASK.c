
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int number; int stream; TYPE_1__* pcm; } ;
struct azx_dev {int opened; int assigned_key; } ;
struct azx {int playback_index_offset; int playback_streams; int capture_index_offset; int capture_streams; struct azx_dev* azx_dev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct azx_dev*) ;
 int FUNC_1 (struct azx_dev*) ;
 int FUNC_2 (struct azx_dev*) ;

__attribute__((used)) static inline struct azx_dev *
FUNC_3(struct azx *VAR_1, struct snd_pcm_substream *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct azx_dev *VAR_6 = ((void*)0);

 int VAR_7 = (VAR_2->pcm->device << 16) | (VAR_2->number << 2) |
  (VAR_2->stream + 1);

 if (VAR_2->stream == VAR_0) {
  VAR_3 = VAR_1->playback_index_offset;
  VAR_5 = VAR_1->playback_streams;
 } else {
  VAR_3 = VAR_1->capture_index_offset;
  VAR_5 = VAR_1->capture_streams;
 }
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_3++) {
  struct azx_dev *VAR_8 = &VAR_1->azx_dev[VAR_3];
  FUNC_1(VAR_8);
  if (!VAR_8->opened && !FUNC_0(VAR_8)) {
   VAR_6 = VAR_8;
   if (VAR_6->assigned_key == VAR_7) {
    VAR_6->opened = 1;
    VAR_6->assigned_key = VAR_7;
    FUNC_2(VAR_8);
    return VAR_8;
   }
  }
  FUNC_2(VAR_8);
 }
 if (VAR_6) {
  FUNC_1(VAR_6);
  VAR_6->opened = 1;
  VAR_6->assigned_key = VAR_7;
  FUNC_2(VAR_6);
 }
 return VAR_6;
}
