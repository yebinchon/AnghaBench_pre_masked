
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_id {int iface; int name; } ;
struct snd_ac97 {TYPE_1__* bus; } ;
typedef int sid ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 int FUNC_1 (int ,char const*,char const*) ;
 struct snd_kcontrol* FUNC_2 (int ,struct snd_ctl_elem_id*) ;

__attribute__((used)) static struct snd_kcontrol *FUNC_3(struct snd_ac97 *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct snd_ctl_elem_id VAR_4;
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(VAR_4.name, VAR_2, VAR_3);
 VAR_4.iface = VAR_0;
 return FUNC_2(VAR_1->bus->card, &VAR_4);
}
