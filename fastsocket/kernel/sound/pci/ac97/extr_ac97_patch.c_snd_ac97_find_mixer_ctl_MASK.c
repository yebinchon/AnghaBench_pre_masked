
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_id {int name; int iface; } ;
struct snd_ac97 {TYPE_1__* bus; } ;
typedef int id ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 struct snd_kcontrol* FUNC_1 (int ,struct snd_ctl_elem_id*) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static struct snd_kcontrol *FUNC_3(struct snd_ac97 *VAR_1,
          const char *VAR_2)
{
 struct snd_ctl_elem_id VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.iface = VAR_0;
 FUNC_2(VAR_3.name, VAR_2);
 return FUNC_1(VAR_1->bus->card, &VAR_3);
}
