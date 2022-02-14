
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct TYPE_2__ {scalar_t__ avail; scalar_t__ recdev; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (struct snd_mixer*,int) ;
 int FUNC_1 (struct snd_mixer*,int) ;

__attribute__((used)) static int
FUNC_2(struct snd_mixer *VAR_2)
{
 u_int32_t VAR_3;
 int VAR_4;

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1[VAR_4][0].avail != 0)
   VAR_3 |= (1 << VAR_4);
 FUNC_0(VAR_2, VAR_3);
 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1[VAR_4][0].recdev != 0)
   VAR_3 |= (1 << VAR_4);
 FUNC_1(VAR_2, VAR_3);
 return (0);
}
