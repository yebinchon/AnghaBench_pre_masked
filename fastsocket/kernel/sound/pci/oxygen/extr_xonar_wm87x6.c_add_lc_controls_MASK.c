
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {struct snd_kcontrol** lc_controls; } ;
struct snd_kcontrol {int dummy; } ;
struct oxygen {int card; struct xonar_wm87x6* model_data; } ;


 unsigned int FUNC_0 (struct snd_kcontrol**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct snd_kcontrol** VAR_1 ;
 int FUNC_2 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_3 (struct snd_kcontrol**,struct oxygen*) ;

__attribute__((used)) static int FUNC_4(struct oxygen *VAR_2)
{
 struct xonar_wm87x6 *VAR_3 = VAR_2->model_data;
 unsigned int VAR_4;
 struct snd_kcontrol *VAR_5;
 int VAR_6;

 FUNC_1(FUNC_0(VAR_1) != FUNC_0(VAR_3->lc_controls));
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4) {
  VAR_5 = FUNC_3(&VAR_1[VAR_4], VAR_2);
  if (!VAR_5)
   return -VAR_0;
  VAR_6 = FUNC_2(VAR_2->card, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_3->lc_controls[VAR_4] = VAR_5;
 }
 return 0;
}
