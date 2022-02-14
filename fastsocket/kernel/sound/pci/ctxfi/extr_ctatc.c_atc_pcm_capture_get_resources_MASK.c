
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sum_mgr {int (* get_src ) (struct sum_mgr*,struct src_desc*,struct src**) ;int (* get_amixer ) (struct sum_mgr*,struct amixer_desc*,struct amixer**) ;int (* get_sum ) (struct sum_mgr*,struct sum_desc*,struct sum**) ;int (* get_srcimp ) (struct sum_mgr*,struct srcimp_desc*,struct srcimp**) ;} ;
struct sum_desc {int msr; int member_0; } ;
struct sum {int dummy; } ;
struct srcimp_mgr {int (* get_src ) (struct sum_mgr*,struct src_desc*,struct src**) ;int (* get_amixer ) (struct sum_mgr*,struct amixer_desc*,struct amixer**) ;int (* get_sum ) (struct sum_mgr*,struct sum_desc*,struct sum**) ;int (* get_srcimp ) (struct sum_mgr*,struct srcimp_desc*,struct srcimp**) ;} ;
struct srcimp_desc {int msr; int member_0; } ;
struct srcimp {int dummy; } ;
struct src_node_conf_t {int msr; unsigned int pitch; int mix_msr; int imp_msr; int vo; int member_0; } ;
struct src_mgr {int (* get_src ) (struct sum_mgr*,struct src_desc*,struct src**) ;int (* get_amixer ) (struct sum_mgr*,struct amixer_desc*,struct amixer**) ;int (* get_sum ) (struct sum_mgr*,struct sum_desc*,struct sum**) ;int (* get_srcimp ) (struct sum_mgr*,struct srcimp_desc*,struct srcimp**) ;} ;
struct src_desc {int multi; int msr; int mode; int member_0; } ;
struct src {TYPE_3__* ops; } ;
struct ct_atc_pcm {struct src* src; TYPE_2__* substream; scalar_t__ n_srcimp; struct srcimp** srcimps; int mono; scalar_t__ n_amixer; int * amixers; scalar_t__ n_srcc; struct src** srccs; } ;
struct ct_atc {int rsr; int msr; struct sum_mgr** rsc_mgrs; } ;
struct amixer_mgr {int (* get_src ) (struct sum_mgr*,struct src_desc*,struct src**) ;int (* get_amixer ) (struct sum_mgr*,struct amixer_desc*,struct amixer**) ;int (* get_sum ) (struct sum_mgr*,struct sum_desc*,struct sum**) ;int (* get_srcimp ) (struct sum_mgr*,struct srcimp_desc*,struct srcimp**) ;} ;
struct amixer_desc {int msr; int member_0; } ;
struct amixer {int dummy; } ;
struct TYPE_6__ {int (* set_pitch ) (struct src*,unsigned int) ;int (* set_vo ) (struct src*,int ) ;int (* set_rom ) (struct src*,int ) ;} ;
struct TYPE_5__ {TYPE_1__* runtime; } ;
struct TYPE_4__ {int channels; int rate; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ct_atc*,struct ct_atc_pcm*) ;
 int FUNC_2 (struct ct_atc*,struct ct_atc_pcm*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct ct_atc*,struct ct_atc_pcm*,struct src_node_conf_t*,int*) ;
 int FUNC_6 (struct sum_mgr*,struct src_desc*,struct src**) ;
 int FUNC_7 (struct src*,unsigned int) ;
 int FUNC_8 (struct src*,int ) ;
 int FUNC_9 (struct src*,int ) ;
 int FUNC_10 (struct sum_mgr*,struct amixer_desc*,struct amixer**) ;
 int FUNC_11 (struct sum_mgr*,struct sum_desc*,struct sum**) ;
 int FUNC_12 (struct sum_mgr*,struct srcimp_desc*,struct srcimp**) ;
 int FUNC_13 (struct sum_mgr*,struct src_desc*,struct src**) ;
 int FUNC_14 (struct src*,unsigned int) ;

__attribute__((used)) static int
FUNC_15(struct ct_atc *VAR_8, struct ct_atc_pcm *VAR_9)
{
 struct src_mgr *VAR_10 = VAR_8->rsc_mgrs[VAR_5];
 struct srcimp_mgr *VAR_11 = VAR_8->rsc_mgrs[VAR_6];
 struct amixer_mgr *VAR_12 = VAR_8->rsc_mgrs[VAR_0];
 struct sum_mgr *VAR_13 = VAR_8->rsc_mgrs[VAR_7];
 struct src_desc VAR_14 = {0};
 struct src *VAR_15;
 struct srcimp_desc VAR_16 = {0};
 struct srcimp *VAR_17;
 struct amixer_desc VAR_18 = {0};
 struct sum_desc VAR_19 = {0};
 unsigned int VAR_20;
 int VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;
 struct src_node_conf_t VAR_28[2] = {{0} };


 FUNC_1(VAR_8, VAR_9);




 VAR_21 = VAR_9->substream->runtime->channels;


 VAR_20 = FUNC_0((VAR_8->rsr * VAR_8->msr),
    VAR_9->substream->runtime->rate);

 FUNC_5(VAR_8, VAR_9, VAR_28, &VAR_26);
 VAR_27 = (1 == VAR_21) ? 1 : 0;
 VAR_25 = VAR_27 * 2 + VAR_26;
 VAR_24 = VAR_26;
 if ((VAR_21 > 1) && (0x8000000 >= VAR_20)) {


  VAR_25 += VAR_21 * VAR_8->msr;
  VAR_24 += VAR_21 * VAR_8->msr;
 } else {
  VAR_24 += VAR_21;
 }

 if (VAR_26) {
  VAR_9->srccs = FUNC_3(sizeof(void *)*VAR_26, VAR_3);
  if (!VAR_9->srccs)
   return -VAR_2;
 }
 if (VAR_25) {
  VAR_9->amixers = FUNC_3(sizeof(void *)*VAR_25, VAR_3);
  if (!VAR_9->amixers) {
   VAR_22 = -VAR_2;
   goto error1;
  }
 }
 VAR_9->srcimps = FUNC_3(sizeof(void *)*VAR_24, VAR_3);
 if (!VAR_9->srcimps) {
  VAR_22 = -VAR_2;
  goto error1;
 }


 VAR_14.multi = 1;
 VAR_14.mode = VAR_1;
 for (VAR_23 = 0, VAR_9->n_srcc = 0; VAR_23 < VAR_26; VAR_23++) {
  VAR_14.msr = VAR_28[VAR_23/VAR_21].msr;
  VAR_22 = VAR_10->get_src(VAR_10, &VAR_14,
     (struct src **)&VAR_9->srccs[VAR_23]);
  if (VAR_22)
   goto error1;

  VAR_15 = VAR_9->srccs[VAR_23];
  VAR_20 = VAR_28[VAR_23/VAR_21].pitch;
  VAR_15->ops->set_pitch(VAR_15, VAR_20);
  VAR_15->ops->set_rom(VAR_15, FUNC_4(VAR_20));
  VAR_15->ops->set_vo(VAR_15, VAR_28[VAR_23/VAR_21].vo);

  VAR_9->n_srcc++;
 }


 for (VAR_23 = 0, VAR_9->n_amixer = 0; VAR_23 < VAR_25; VAR_23++) {
  if (VAR_23 < (VAR_27*2))
   VAR_18.msr = VAR_8->msr;
  else if (VAR_23 < (VAR_27*2+VAR_26))
   VAR_18.msr = VAR_28[(VAR_23-VAR_27*2)/VAR_21].mix_msr;
  else
   VAR_18.msr = 1;

  VAR_22 = VAR_12->get_amixer(VAR_12, &VAR_18,
     (struct amixer **)&VAR_9->amixers[VAR_23]);
  if (VAR_22)
   goto error1;

  VAR_9->n_amixer++;
 }


 VAR_19.msr = VAR_8->msr;
 VAR_22 = VAR_13->get_sum(VAR_13, &VAR_19, (struct sum **)&VAR_9->mono);
 if (VAR_22)
  goto error1;

 VAR_20 = FUNC_0((VAR_8->rsr * VAR_8->msr),
    VAR_9->substream->runtime->rate);

 for (VAR_23 = 0, VAR_9->n_srcimp = 0; VAR_23 < VAR_24; VAR_23++) {
  if (VAR_23 < (VAR_26))
   VAR_16.msr = VAR_28[VAR_23/VAR_21].imp_msr;
  else if (1 == VAR_21)
   VAR_16.msr = (VAR_20 <= 0x8000000) ? VAR_8->msr : 1;
  else
   VAR_16.msr = 1;

  VAR_22 = VAR_11->get_srcimp(VAR_11, &VAR_16, &VAR_17);
  if (VAR_22)
   goto error1;

  VAR_9->srcimps[VAR_23] = VAR_17;
  VAR_9->n_srcimp++;
 }


 VAR_14.multi = VAR_9->substream->runtime->channels;
 VAR_14.msr = 1;
 VAR_14.mode = VAR_4;
 VAR_22 = VAR_10->get_src(VAR_10, &VAR_14, (struct src **)&VAR_9->src);
 if (VAR_22)
  goto error1;

 VAR_15 = VAR_9->src;
 VAR_15->ops->set_pitch(VAR_15, VAR_20);


 VAR_22 = FUNC_2(VAR_8, VAR_9);
 if (VAR_22 < 0)
  goto error1;

 return 0;

error1:
 FUNC_1(VAR_8, VAR_9);
 return VAR_22;
}
