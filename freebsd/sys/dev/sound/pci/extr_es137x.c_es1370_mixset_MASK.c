
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_mixer {int dummy; } ;
struct es_info {int escfg; } ;
struct TYPE_2__ {int left; int right; scalar_t__ stereo; int avail; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct es_info*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct es_info*) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_4 (struct es_info*,int,int) ;
 struct es_info* FUNC_5 (struct snd_mixer*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_6(struct snd_mixer *VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6)
{
 struct es_info *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 if (!VAR_2[VAR_4].avail)
  return (-1);
 VAR_8 = VAR_5;
 VAR_9 = (VAR_2[VAR_4].stereo) ? VAR_6 : VAR_8;
 if (VAR_2[VAR_4].left == 0xf)
  VAR_10 = (VAR_8 < 2) ? 0x80 : 7 - (VAR_8 - 2) / 14;
 else
  VAR_10 = (VAR_8 < 7) ? 0x80 : 31 - (VAR_8 - 7) / 3;
 VAR_7 = FUNC_5(VAR_3);
 FUNC_1(VAR_7);
 if (VAR_4 == VAR_0 && (FUNC_2(VAR_7->escfg)) &&
     FUNC_0(VAR_7->escfg))
  VAR_12 = 1;
 else
  VAR_12 = 0;
 if (VAR_2[VAR_4].stereo) {
  VAR_11 = (VAR_9 < 7) ? 0x80 : 31 - (VAR_9 - 7) / 3;
  FUNC_4(VAR_7, VAR_2[VAR_4].right, VAR_11);
  if (VAR_12 && VAR_2[VAR_1].stereo)
   FUNC_4(VAR_7,
       VAR_2[VAR_1].right, VAR_11);
 }
 FUNC_4(VAR_7, VAR_2[VAR_4].left, VAR_10);
 if (VAR_12)
  FUNC_4(VAR_7, VAR_2[VAR_1].left, VAR_10);
 FUNC_3(VAR_7);

 return (VAR_8 | (VAR_9 << 8));
}
