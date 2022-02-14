
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct snd_mixer {int dummy; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (struct snd_mixer*) ;
 struct mtx* FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct mtx*) ;
 scalar_t__ FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;
 int FUNC_5 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_6(struct snd_mixer *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct mtx *VAR_4 = FUNC_1(VAR_0);
 uint8_t VAR_5;

 if (FUNC_3(VAR_4)) {
  VAR_5 = 0;
 } else {
  VAR_5 = 1;
  FUNC_2(VAR_4);
 }
 FUNC_5(FUNC_0(VAR_0), VAR_1, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_4(VAR_4);
 }
 return (VAR_2 | (VAR_3 << 8));
}
