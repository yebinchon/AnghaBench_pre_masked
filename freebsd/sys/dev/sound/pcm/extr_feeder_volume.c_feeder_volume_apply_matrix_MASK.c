
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pcmchan_matrix {int channels; TYPE_2__* map; } ;
struct pcm_feeder {struct feed_volume_info* data; TYPE_1__* desc; } ;
struct feed_volume_info {int channels; int * matrix; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(struct pcm_feeder *VAR_5, struct pcmchan_matrix *VAR_6)
{
 struct feed_volume_info *VAR_7;
 uint32_t VAR_8;

 if (VAR_5 == ((void*)0) || VAR_5->desc == ((void*)0) || VAR_5->desc->type != VAR_1 ||
     VAR_5->data == ((void*)0) || VAR_6 == ((void*)0) || VAR_6->channels < VAR_3 ||
     VAR_6->channels > VAR_2)
  return (VAR_0);

 VAR_7 = VAR_5->data;

 for (VAR_8 = 0; VAR_8 < (sizeof(VAR_7->matrix) / sizeof(VAR_7->matrix[0])); VAR_8++) {
  if (VAR_8 < VAR_6->channels)
   VAR_7->matrix[VAR_8] = VAR_6->map[VAR_8].type;
  else
   VAR_7->matrix[VAR_8] = VAR_4;
 }

 VAR_7->channels = VAR_6->channels;

 return (0);
}
