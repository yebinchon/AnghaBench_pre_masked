
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct link_master {void (* hook ) (void*,int) ;void* hook_private_data; } ;


 struct link_master* FUNC_0 (struct snd_kcontrol*) ;

int FUNC_1(struct snd_kcontrol *VAR_0,
        void (*VAR_1)(void *VAR_2, int),
        void *VAR_3)
{
 struct link_master *VAR_4 = FUNC_0(VAR_0);
 VAR_4->hook = VAR_1;
 VAR_4->hook_private_data = VAR_3;
 return 0;
}
