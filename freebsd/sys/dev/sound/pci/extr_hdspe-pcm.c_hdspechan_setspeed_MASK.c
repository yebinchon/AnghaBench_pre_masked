
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {int dev; struct sc_info* sc; } ;
struct sc_info {int type; long long ctrl_register; int speed; } ;
struct sc_chinfo {struct sc_pcminfo* parent; } ;
struct hdspe_rate {int speed; long long reg; } ;
typedef int kobj_t ;



 int VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*,int ,long long) ;
 struct hdspe_rate* VAR_4 ;

__attribute__((used)) static uint32_t
FUNC_3(kobj_t VAR_5, void *VAR_6, uint32_t VAR_7)
{
 struct sc_pcminfo *VAR_8;
 struct hdspe_rate *VAR_9;
 struct sc_chinfo *VAR_10;
 struct sc_info *VAR_11;
 long long VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_10 = VAR_6;
 VAR_8 = VAR_10->parent;
 VAR_11 = VAR_8->sc;
 VAR_9 = ((void*)0);





 if (FUNC_1(VAR_11) == 1)
  goto end;


 for (VAR_14 = 0; VAR_4[VAR_14].speed != 0; VAR_14++) {
  if (VAR_4[VAR_14].speed == VAR_7)
   VAR_9 = &VAR_4[VAR_14];
 }


 if (VAR_9 == ((void*)0)) {
  for (VAR_14 = 0; VAR_4[VAR_14].speed != 0; VAR_14++) {
   VAR_9 = &VAR_4[VAR_14];
   VAR_13 = VAR_9->speed + ((VAR_4[VAR_14 + 1].speed != 0) ?
       ((VAR_4[VAR_14 + 1].speed - VAR_9->speed) >> 1) : 0);
   if (VAR_7 < VAR_13)
    break;
  }
 }

 switch (VAR_11->type) {
 case 128:
 case 129:
  VAR_12 = VAR_1;
  break;
 default:

  goto end;
 }


 VAR_11->ctrl_register &= ~VAR_2;
 VAR_11->ctrl_register |= VAR_9->reg;
 FUNC_2(VAR_11, VAR_0, VAR_11->ctrl_register);

 VAR_7 = VAR_9->speed;
 if (VAR_7 > 96000)
  VAR_7 /= 4;
 else if (VAR_7 > 48000)
  VAR_7 /= 2;


 VAR_12 /= VAR_7;
 FUNC_2(VAR_11, VAR_3, VAR_12);

 VAR_11->speed = VAR_9->speed;
end:

 return (VAR_11->speed);
}
