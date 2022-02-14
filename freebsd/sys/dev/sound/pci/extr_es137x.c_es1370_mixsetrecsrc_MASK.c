
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct snd_mixer {int dummy; } ;
struct es_info {int escfg; } ;
struct TYPE_2__ {int recmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct es_info*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct es_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_4 (struct es_info*,int ,int) ;
 struct es_info* FUNC_5 (struct snd_mixer*) ;
 int FUNC_6 (struct snd_mixer*) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static uint32_t
FUNC_7(struct snd_mixer *VAR_11, uint32_t VAR_12)
{
 struct es_info *VAR_13;
 int VAR_14, VAR_15 = 0;

 VAR_13 = FUNC_5(VAR_11);
 if (VAR_12 == 0) VAR_12 = 1 << VAR_6;
 VAR_12 &= FUNC_6(VAR_11);
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
  if ((VAR_12 & (1 << VAR_14)) != 0) VAR_15 |= VAR_10[VAR_14].recmask;

 FUNC_1(VAR_13);
 if ((VAR_12 & (1 << VAR_8)) && FUNC_2(VAR_13->escfg) &&
     FUNC_0(VAR_13->escfg))
  VAR_15 |= VAR_10[VAR_9].recmask;
 FUNC_4(VAR_13, VAR_0, VAR_15 & 0x55);
 FUNC_4(VAR_13, VAR_4, VAR_15 & 0xaa);
 FUNC_4(VAR_13, VAR_1, (VAR_15 >> 8) & 0x17);
 FUNC_4(VAR_13, VAR_5, (VAR_15 >> 8) & 0x0f);
 FUNC_4(VAR_13, VAR_2, 0x7f);
 FUNC_4(VAR_13, VAR_3, 0x3f);
 FUNC_3(VAR_13);

 return (VAR_12);
}
