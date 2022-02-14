
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int const* p; } ;
struct snd_kcontrol {TYPE_2__ tlv; } ;
struct snd_ctl_elem_id {int iface; int name; } ;
struct snd_ac97 {TYPE_1__* bus; } ;
typedef int sid ;
struct TYPE_3__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 struct snd_kcontrol* FUNC_1 (int ,struct snd_ctl_elem_id*) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_1, const char *VAR_2,
        const unsigned int *VAR_3)
{
 struct snd_ctl_elem_id VAR_4;
 struct snd_kcontrol *VAR_5;
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(VAR_4.name, VAR_2);
 VAR_4.iface = VAR_0;
 VAR_5 = FUNC_1(VAR_1->bus->card, &VAR_4);
 if (VAR_5 && VAR_5->tlv.p)
  VAR_5->tlv.p = VAR_3;
}
