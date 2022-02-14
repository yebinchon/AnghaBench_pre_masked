
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct snd_mixer {int dummy; } ;
struct sc_info {int src; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int* VAR_1 ;
 struct sc_info* FUNC_1 (struct snd_mixer*) ;

__attribute__((used)) static u_int32_t
FUNC_2(struct snd_mixer *VAR_2, u_int32_t VAR_3)
{
 struct sc_info *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = VAR_1[VAR_3];




 if (VAR_5 > VAR_0)
  VAR_4->src = VAR_5;
 return VAR_3;
}
