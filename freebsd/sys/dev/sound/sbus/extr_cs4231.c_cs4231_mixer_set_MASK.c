
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct snd_mixer {int dummy; } ;
struct cs4231_softc {int dummy; } ;


 int FUNC_0 (struct cs4231_softc*) ;
 int FUNC_1 (struct cs4231_softc*) ;
 int ** VAR_0 ;
 int FUNC_2 (struct cs4231_softc*,int *,size_t) ;
 struct cs4231_softc* FUNC_3 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_4(struct snd_mixer *VAR_1, u_int32_t VAR_2, u_int32_t VAR_3,
    u_int32_t VAR_4)
{
 struct cs4231_softc *VAR_5;

 VAR_5 = FUNC_3(VAR_1);
 FUNC_0(VAR_5);
 FUNC_2(VAR_5, &VAR_0[VAR_2][0], VAR_3);
 FUNC_2(VAR_5, &VAR_0[VAR_2][1], VAR_4);
 FUNC_1(VAR_5);

 return (VAR_3 | (VAR_4 << 8));
}
