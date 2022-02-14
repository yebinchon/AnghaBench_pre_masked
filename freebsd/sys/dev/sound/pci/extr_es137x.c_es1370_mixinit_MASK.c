
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct snd_mixer {int dummy; } ;
struct es_info {int escfg; } ;
struct TYPE_2__ {scalar_t__ recmask; scalar_t__ avail; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct es_info* FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct snd_mixer*,int) ;
 int FUNC_3 (struct snd_mixer*,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct snd_mixer *VAR_3)
{
 struct es_info *VAR_4;
 int VAR_5;
 uint32_t VAR_6;

 VAR_4 = FUNC_1(VAR_3);
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2[VAR_5].avail)
   VAR_6 |= (1 << VAR_5);
 }







 if (FUNC_0(VAR_4->escfg))
  VAR_6 &= ~(1 << VAR_1);
 FUNC_2(VAR_3, VAR_6);
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2[VAR_5].recmask)
   VAR_6 |= (1 << VAR_5);
 }
 if (FUNC_0(VAR_4->escfg))
  VAR_6 &= ~(1 << VAR_1);
 FUNC_3(VAR_3, VAR_6);
 return (0);
}
