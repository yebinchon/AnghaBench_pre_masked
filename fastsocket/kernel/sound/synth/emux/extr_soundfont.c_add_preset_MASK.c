
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sf_id; int low; } ;
struct snd_sf_zone {scalar_t__ counter; struct snd_sf_zone* next_instr; struct snd_sf_zone* next_zone; TYPE_1__ v; int instr; int bank; } ;
struct snd_sf_list {struct snd_sf_zone** presets; } ;


 int FUNC_0 (struct snd_sf_list*,struct snd_sf_zone*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct snd_sf_zone* FUNC_2 (struct snd_sf_list*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct snd_sf_list *VAR_0, struct snd_sf_zone *VAR_1)
{
 struct snd_sf_zone *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0, VAR_1->bank, VAR_1->instr, VAR_1->v.low);
 if (VAR_2 && VAR_2->v.sf_id != VAR_1->v.sf_id) {

  struct snd_sf_zone *VAR_4;

  for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next_zone) {
   if (VAR_4->counter > VAR_1->counter)

    return;
  }

  FUNC_0(VAR_0, VAR_2);
  VAR_2 = ((void*)0);
 }


 if ((VAR_3 = FUNC_1(VAR_1->bank, VAR_1->instr, VAR_1->v.low)) < 0)
  return;
 VAR_1->next_zone = VAR_2;
 VAR_1->next_instr = VAR_0->presets[VAR_3];
 VAR_0->presets[VAR_3] = VAR_1;
}
