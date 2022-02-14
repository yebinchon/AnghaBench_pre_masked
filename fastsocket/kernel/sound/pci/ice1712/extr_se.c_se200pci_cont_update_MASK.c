
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ice1712 {struct se_spec* spec; } ;
struct se_spec {TYPE_1__* vol; } ;
struct TYPE_4__ {int target; int ch; } ;
struct TYPE_3__ {int ch1; int ch2; } ;
 int FUNC_0 (struct snd_ice1712*,int ,int ,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;
 int FUNC_2 (struct snd_ice1712*,int ) ;
 int FUNC_3 (struct snd_ice1712*,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ,int ) ;
 int FUNC_5 (struct snd_ice1712*,int ,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_6(struct snd_ice1712 *VAR_1, int VAR_2)
{
 struct se_spec *VAR_3 = VAR_1->spec;
 switch (VAR_0[VAR_2].target) {
 case 133:
  FUNC_0(VAR_1,
        VAR_0[VAR_2].ch,
        VAR_3->vol[VAR_2].ch1,
        VAR_3->vol[VAR_2].ch2);
  break;

 case 130:
  FUNC_4(VAR_1,
       VAR_3->vol[VAR_2].ch1,
       VAR_3->vol[VAR_2].ch2);
  break;

 case 129:
  FUNC_5(VAR_1,
        VAR_3->vol[VAR_2].ch1,
        VAR_3->vol[VAR_2].ch2);
  break;

 case 128:
  FUNC_3(VAR_1,
         VAR_3->vol[VAR_2].ch1);
  break;

 case 131:
  FUNC_2(VAR_1, VAR_3->vol[VAR_2].ch1);
  break;

 case 132:
  FUNC_1(VAR_1, VAR_3->vol[VAR_2].ch1);
  break;

 default:
  break;
 }
}
