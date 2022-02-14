
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {int chip_idx; struct pcxhr_mgr* mgr; } ;
struct snd_pcm_substream {int number; TYPE_1__* runtime; } ;
struct pcxhr_stream {int * substream; int status; } ;
struct pcxhr_mgr {scalar_t__ ref_count_rate; int setup_mutex; scalar_t__ sample_rate; } ;
struct TYPE_2__ {struct pcxhr_stream* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcxhr_mgr*,int ) ;
 struct snd_pcxhr* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcxhr *VAR_2 = FUNC_3(VAR_1);
 struct pcxhr_mgr *VAR_3 = VAR_2->mgr;
 struct pcxhr_stream *VAR_4 = VAR_1->runtime->private_data;

 FUNC_0(&VAR_3->setup_mutex);

 FUNC_4("pcxhr_close chip%d subs%d\n",
      VAR_2->chip_idx, VAR_1->number);


 if (--VAR_3->ref_count_rate == 0) {
  VAR_3->sample_rate = 0;
  FUNC_2(VAR_3, 0);
 }

 VAR_4->status = VAR_0;
 VAR_4->substream = ((void*)0);

 FUNC_1(&VAR_3->setup_mutex);

 return 0;
}
