
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct link_master {int val; int hook_private_data; int (* hook ) (int ,int ) ;} ;


 int FUNC_0 (struct link_master*) ;
 struct link_master* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct link_master*,int ,int ) ;

void FUNC_4(struct snd_kcontrol *VAR_0, bool VAR_1)
{
 struct link_master *VAR_2;
 bool VAR_3 = 0;

 if (!VAR_0)
  return;
 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_1) {
  int VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 < 0)
   return;
  VAR_3 = VAR_4;
  VAR_4 = FUNC_3(VAR_2, VAR_2->val, VAR_2->val);
  if (VAR_4 < 0)
   return;
 }

 if (VAR_2->hook && !VAR_3)
  VAR_2->hook(VAR_2->hook_private_data, VAR_2->val);
}
