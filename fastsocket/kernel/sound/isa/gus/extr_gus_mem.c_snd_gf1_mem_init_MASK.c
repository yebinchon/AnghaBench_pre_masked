
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {int dummy; } ;
struct snd_gf1_mem {int * last; int first; int memory_mutex; } ;
struct TYPE_2__ {scalar_t__ default_voice_address; scalar_t__ enh_mode; int memory; struct snd_gf1_mem mem_alloc; } ;
struct snd_gus_card {int card; TYPE_1__ gf1; } ;
struct snd_gf1_mem_block {int size; void* name; scalar_t__ ptr; int owner; } ;
typedef int block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int ) ;
 int FUNC_1 (struct snd_gf1_mem_block*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,struct snd_info_entry**) ;
 int VAR_3 ;
 int * FUNC_4 (struct snd_gf1_mem*,struct snd_gf1_mem_block*) ;
 int FUNC_5 (struct snd_info_entry*,struct snd_gus_card*,int ) ;

int FUNC_6(struct snd_gus_card * VAR_4)
{
 struct snd_gf1_mem *VAR_5;
 struct snd_gf1_mem_block VAR_6;




 VAR_5 = &VAR_4->gf1.mem_alloc;
 FUNC_2(&VAR_5->memory_mutex);
 VAR_5->first = *(VAR_5->last = ((void*)0));
 if (!VAR_4->gf1.memory)
  return 0;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.owner = VAR_2;
 if (VAR_4->gf1.enh_mode) {
  VAR_6.ptr = 0;
  VAR_6.size = 1024;
  VAR_6.name = FUNC_0("InterWave LFOs", VAR_1);
  if (FUNC_4(VAR_5, &VAR_6) == ((void*)0))
   return -VAR_0;
 }
 VAR_6.ptr = VAR_4->gf1.default_voice_address;
 VAR_6.size = 4;
 VAR_6.name = FUNC_0("Voice default (NULL's)", VAR_1);
 if (FUNC_4(VAR_5, &VAR_6) == ((void*)0))
  return -VAR_0;




 return 0;
}
