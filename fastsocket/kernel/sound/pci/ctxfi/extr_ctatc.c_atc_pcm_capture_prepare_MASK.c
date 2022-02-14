
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rsc {TYPE_4__* ops; } ;
struct sum {struct rsc rsc; } ;
struct srcimp {TYPE_5__* ops; } ;
struct src {struct rsc rsc; } ;
struct ct_mixer {int (* get_output_ports ) (struct ct_mixer*,int ,struct rsc**,struct rsc**) ;} ;
struct ct_atc_pcm {int n_srcc; int timer; struct src* src; struct srcimp** srcimps; struct amixer** amixers; TYPE_2__* substream; struct src** srccs; struct sum* mono; } ;
struct ct_atc {int rsr; int msr; struct ct_mixer* mixer; } ;
struct amixer {struct rsc rsc; TYPE_3__* ops; } ;
struct TYPE_10__ {int (* map ) (struct srcimp*,struct src*,struct rsc*) ;} ;
struct TYPE_9__ {int (* next_conj ) (struct rsc*) ;int (* master ) (struct rsc*) ;} ;
struct TYPE_8__ {int (* commit_raw_write ) (struct amixer*) ;int (* set_sum ) (struct amixer*,int *) ;int (* set_scale ) (struct amixer*,int ) ;int (* set_input ) (struct amixer*,struct rsc*) ;int (* setup ) (struct amixer*,struct rsc*,int ,struct sum*) ;} ;
struct TYPE_7__ {TYPE_1__* runtime; } ;
struct TYPE_6__ {int channels; int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ct_atc*,struct ct_atc_pcm*) ;
 int FUNC_2 (struct ct_atc*,struct ct_atc_pcm*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ct_mixer*,int ,struct rsc**,struct rsc**) ;
 int FUNC_5 (struct rsc*) ;
 int FUNC_6 (struct srcimp*,struct src*,struct rsc*) ;
 int FUNC_7 (struct srcimp*,struct src*,struct rsc*) ;
 int FUNC_8 (struct amixer*,struct rsc*,int ,struct sum*) ;
 int FUNC_9 (struct srcimp*,struct src*,struct rsc*) ;
 int FUNC_10 (struct amixer*,struct rsc*,int ,struct sum*) ;
 int FUNC_11 (struct rsc*) ;
 int FUNC_12 (struct amixer*,struct rsc*) ;
 int FUNC_13 (struct amixer*,int ) ;
 int FUNC_14 (struct amixer*,int *) ;
 int FUNC_15 (struct amixer*) ;

__attribute__((used)) static int FUNC_16(struct ct_atc *VAR_3, struct ct_atc_pcm *VAR_4)
{
 struct src *VAR_5;
 struct amixer *VAR_6;
 struct srcimp *VAR_7;
 struct ct_mixer *VAR_8 = VAR_3->mixer;
 struct sum *VAR_9;
 struct rsc *VAR_10[8] = {((void*)0)};
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned int VAR_16;
 int VAR_17 = 0, VAR_18 = 0;

 FUNC_2(VAR_3, VAR_4);


 VAR_11 = FUNC_1(VAR_3, VAR_4);
 if (VAR_11)
  return VAR_11;


 VAR_8->get_output_ports(VAR_8, VAR_1,
    &VAR_10[0], &VAR_10[1]);

 VAR_15 = VAR_4->substream->runtime->channels;
 if (1 == VAR_15) {
  VAR_9 = VAR_4->mono;
  for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
   VAR_6 = VAR_4->amixers[VAR_12];
   VAR_6->ops->setup(VAR_6, VAR_10[VAR_12],
      VAR_2, VAR_9);
  }
  VAR_10[0] = &VAR_9->rsc;
  VAR_14 = 1;
  VAR_17 = VAR_14 * 2;
 }

 for (VAR_12 = 0; VAR_12 < VAR_4->n_srcc; VAR_12++) {
  VAR_5 = VAR_4->srccs[VAR_12];
  VAR_7 = VAR_4->srcimps[VAR_18+VAR_12];
  VAR_6 = VAR_4->amixers[VAR_17+VAR_12];
  VAR_7->ops->map(VAR_7, VAR_5, VAR_10[VAR_12%VAR_15]);
  VAR_6->ops->setup(VAR_6, &VAR_5->rsc, VAR_0, ((void*)0));
  VAR_10[VAR_12%VAR_15] = &VAR_6->rsc;
 }

 VAR_16 = FUNC_0((VAR_3->rsr * VAR_3->msr),
    VAR_4->substream->runtime->rate);

 if ((VAR_15 > 1) && (VAR_16 <= 0x8000000)) {


  for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
   VAR_10[VAR_12]->ops->master(VAR_10[VAR_12]);
   for (VAR_13 = 0; VAR_13 < VAR_3->msr; VAR_13++) {
    VAR_6 = VAR_4->amixers[VAR_4->n_srcc+VAR_13*VAR_15+VAR_12];
    VAR_6->ops->set_input(VAR_6, VAR_10[VAR_12]);
    VAR_6->ops->set_scale(VAR_6, VAR_0);
    VAR_6->ops->set_sum(VAR_6, ((void*)0));
    VAR_6->ops->commit_raw_write(VAR_6);
    VAR_10[VAR_12]->ops->next_conj(VAR_10[VAR_12]);

    VAR_7 = VAR_4->srcimps[VAR_4->n_srcc+VAR_13*VAR_15+VAR_12];
    VAR_7->ops->map(VAR_7, VAR_4->src,
       &VAR_6->rsc);
   }
  }
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
   VAR_7 = VAR_4->srcimps[VAR_4->n_srcc+VAR_12];
   VAR_7->ops->map(VAR_7, VAR_4->src, VAR_10[VAR_12]);
  }
 }

 FUNC_3(VAR_4->timer);

 return 0;
}
