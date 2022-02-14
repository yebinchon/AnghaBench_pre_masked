
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct edmacc_param {int opt; int link_bcntrld; } ;
struct davinci_runtime_data {int master_lch; int slave_lch; TYPE_2__* params; } ;
struct TYPE_4__ {int channel; } ;
struct TYPE_3__ {struct davinci_runtime_data* private_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,struct snd_pcm_substream*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,struct edmacc_param*) ;
 int FUNC_7 (int,struct edmacc_param*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_4)
{
 struct davinci_runtime_data *VAR_5 = VAR_4->runtime->private_data;
 struct edmacc_param VAR_6;
 int VAR_7;


 VAR_7 = FUNC_3(VAR_5->params->channel,
      VAR_3, VAR_4,
      VAR_1);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_5->master_lch = VAR_7;


 VAR_7 = FUNC_4(FUNC_1(VAR_5->master_lch), VAR_0);
 if (VAR_7 < 0) {
  FUNC_5(VAR_5->master_lch);
  return VAR_7;
 }
 VAR_5->slave_lch = VAR_7;
 FUNC_6(VAR_5->slave_lch, &VAR_6);
 VAR_6.opt |= VAR_2 | FUNC_2(FUNC_0(VAR_5->master_lch));
 VAR_6.link_bcntrld = FUNC_0(VAR_5->slave_lch) << 5;
 FUNC_7(VAR_5->slave_lch, &VAR_6);

 return 0;
}
