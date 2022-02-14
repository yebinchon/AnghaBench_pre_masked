
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct snd_mixer {int dummy; } ;
struct TYPE_2__ {scalar_t__ iselect; scalar_t__ bits; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct snd_mixer*,size_t) ;
 int FUNC_1 (struct snd_mixer*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct snd_mixer *VAR_2)
{
 u_int32_t VAR_3, VAR_4;

 for (VAR_3 = VAR_4 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].bits) VAR_4 |= 1 << VAR_3;
 }
 FUNC_0(VAR_2, VAR_4);

 for (VAR_3 = VAR_4 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].iselect) VAR_4 |= 1 << VAR_3;
 }
 FUNC_1(VAR_2, VAR_4);
 return 0;
}
