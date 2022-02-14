
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* group; int link_list; TYPE_2__* runtime; } ;
struct snd_pcm_group {int dummy; } ;
struct snd_pcm_file {struct snd_pcm_substream* substream; } ;
struct file {struct snd_pcm_file* private_data; } ;
struct TYPE_6__ {int count; int substreams; int lock; } ;
struct TYPE_5__ {TYPE_1__* status; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;
 TYPE_3__* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 struct file* FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 struct file *VAR_10;
 struct snd_pcm_file *VAR_11;
 struct snd_pcm_substream *VAR_12;

 VAR_10 = FUNC_5(VAR_8);
 if (!VAR_10)
  return -VAR_1;
 VAR_11 = VAR_10->private_data;
 VAR_12 = VAR_11->substream;
 FUNC_1(&VAR_6);
 FUNC_9(&VAR_5);
 if (VAR_7->runtime->status->state == VAR_4 ||
     VAR_7->runtime->status->state != VAR_12->runtime->status->state) {
  VAR_9 = -VAR_1;
  goto _end;
 }
 if (FUNC_6(VAR_12)) {
  VAR_9 = -VAR_0;
  goto _end;
 }
 if (!FUNC_6(VAR_7)) {
  VAR_7->group = FUNC_3(sizeof(struct snd_pcm_group), VAR_3);
  if (VAR_7->group == ((void*)0)) {
   VAR_9 = -VAR_2;
   goto _end;
  }
  FUNC_7(&VAR_7->group->lock);
  FUNC_0(&VAR_7->group->substreams);
  FUNC_4(&VAR_7->link_list, &VAR_7->group->substreams);
  VAR_7->group->count = 1;
 }
 FUNC_4(&VAR_12->link_list, &VAR_7->group->substreams);
 VAR_7->group->count++;
 VAR_12->group = VAR_7->group;
 _end:
 FUNC_10(&VAR_5);
 FUNC_8(&VAR_6);
 FUNC_2(VAR_10);
 return VAR_9;
}
