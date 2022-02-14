
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct snd_mixer {int dummy; } ;
struct ac97_info {int id; TYPE_1__* mix; int dev; int subvendor; } ;
struct TYPE_2__ {int enable; scalar_t__ recidx; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (struct ac97_info*) ;
 scalar_t__ FUNC_1 (struct ac97_info*) ;
 int FUNC_2 (struct ac97_info*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 struct ac97_info* FUNC_4 (struct snd_mixer*) ;
 int FUNC_5 (struct snd_mixer*,size_t) ;
 int FUNC_6 (struct snd_mixer*,size_t,size_t) ;
 int FUNC_7 (struct snd_mixer*,size_t,size_t) ;
 int FUNC_8 (struct snd_mixer*,size_t) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int
FUNC_11(struct snd_mixer *VAR_13)
{
 struct ac97_info *VAR_14 = FUNC_4(VAR_13);
 u_int32_t VAR_15, VAR_16;

 if (VAR_14 == ((void*)0))
  return -1;

 if (FUNC_1(VAR_14))
  return -1;

 switch (VAR_14->id) {
 case 0x41445374:
  switch (VAR_14->subvendor) {
  case 0x02d91014:







   VAR_16 = 0;
   if (VAR_14->mix[VAR_9].enable)
    VAR_16 |= VAR_5;
   if (VAR_14->mix[VAR_11].enable)
    VAR_16 |= VAR_7;
   if (VAR_14->mix[VAR_12].enable)
    FUNC_6(VAR_13, VAR_12,
        VAR_16);
   else {
    FUNC_6(VAR_13, VAR_12,
        VAR_16);
    FUNC_7(VAR_13, VAR_12,
        VAR_8);
   }
   break;
  case 0x099c103c:
   VAR_14->mix[VAR_9].enable = 1;
   VAR_14->mix[VAR_11].enable = 1;
   FUNC_7(VAR_13, VAR_11,
       VAR_12);
   FUNC_7(VAR_13, VAR_12,
       VAR_8);
   FUNC_6(VAR_13, VAR_12,
       VAR_5 | VAR_7);
   break;
  default:
   break;
  }
  break;
 case 0x434d4941:
 case 0x434d4961:
 case 0x434d4978:
 case 0x434d4982:
 case 0x434d4983:
  FUNC_3(&VAR_14->mix[VAR_10],
      sizeof(VAR_14->mix[VAR_10]));
  FUNC_10(VAR_14->dev, FUNC_9(VAR_14->dev) |
      VAR_3);

  break;
 default:
  break;
 }

 if (FUNC_9(VAR_14->dev) & VAR_3)
  FUNC_2(VAR_14, VAR_2, 0);
 VAR_16 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
  VAR_16 |= VAR_14->mix[VAR_15].enable? 1 << VAR_15 : 0;
 FUNC_5(VAR_13, VAR_16);

 VAR_16 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
  VAR_16 |= VAR_14->mix[VAR_15].recidx? 1 << VAR_15 : 0;
 FUNC_8(VAR_13, VAR_16);

 FUNC_0(VAR_14);

 return 0;
}
