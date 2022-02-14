
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int dummy; } ;
struct nid_path {int dummy; } ;
struct hda_gen_spec {int pcm_mutex; int loopback_list; int paths; int kctls; } ;
struct hda_amp_list {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;

int FUNC_2(struct hda_gen_spec *VAR_0)
{
 FUNC_1(&VAR_0->kctls, sizeof(struct snd_kcontrol_new), 32);
 FUNC_1(&VAR_0->paths, sizeof(struct nid_path), 8);
 FUNC_1(&VAR_0->loopback_list, sizeof(struct hda_amp_list), 8);
 FUNC_0(&VAR_0->pcm_mutex);
 return 0;
}
