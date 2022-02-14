
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_mixart {TYPE_2__* mgr; } ;
struct mixart_stream {TYPE_4__* pipe; } ;
struct TYPE_7__ {int references; } ;
struct TYPE_6__ {int ref_count_rate; int sample_rate; } ;
struct TYPE_5__ {int rate; struct mixart_stream* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 struct snd_mixart* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_mixart *VAR_2 = FUNC_2(VAR_1);
 struct mixart_stream *VAR_3 = VAR_1->runtime->private_data;



 FUNC_3("snd_mixart_prepare\n");

 FUNC_1(VAR_2->mgr);



 if(VAR_2->mgr->ref_count_rate == 1)
  VAR_2->mgr->sample_rate = VAR_1->runtime->rate;


 if(VAR_3->pipe->references == 1) {
  if( FUNC_0(VAR_2->mgr, VAR_3->pipe, VAR_1->runtime->rate) )
   return -VAR_0;
 }

 return 0;
}
