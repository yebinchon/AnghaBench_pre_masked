
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct snd_mixer {int dummy; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (struct snd_mixer*) ;
 struct mtx* FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct mtx*) ;
 scalar_t__ FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static uint32_t
FUNC_6(struct snd_mixer *VAR_0, uint32_t VAR_1)
{
 struct mtx *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;
 uint8_t VAR_4;

 if (FUNC_3(VAR_2)) {
  VAR_4 = 0;
 } else {
  VAR_4 = 1;
  FUNC_2(VAR_2);
 }
 VAR_3 = FUNC_5(FUNC_0(VAR_0), VAR_1);
 if (VAR_4) {
  FUNC_4(VAR_2);
 }
 return (VAR_3);
}
