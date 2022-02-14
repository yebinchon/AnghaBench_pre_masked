
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct snd_mixer {int dummy; } ;
struct onyx_softc {int dummy; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct onyx_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_mixer*) ;
 struct mtx* FUNC_2 (struct snd_mixer*) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;
 int FUNC_5 (struct mtx*) ;
 int FUNC_6 (struct onyx_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct snd_mixer *VAR_2, unsigned VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 struct onyx_softc *VAR_6;
 struct mtx *VAR_7;
 int VAR_8;
 uint8_t VAR_9, VAR_10;

 VAR_6 = FUNC_0(FUNC_1(VAR_2));
 VAR_7 = FUNC_2(VAR_2);
 VAR_8 = FUNC_4(VAR_7);

 switch (VAR_3) {
 case 128:







  if (VAR_4 > 100 || VAR_5 > 100)
   return (0);

  VAR_9 = VAR_4 + 128;
  VAR_10 = VAR_5 + 128;

  if (VAR_8)
   FUNC_5(VAR_7);

  FUNC_6(VAR_6, VAR_0, VAR_9);
  FUNC_6(VAR_6, VAR_1, VAR_10);

  if (VAR_8)
   FUNC_3(VAR_7);

  return (VAR_4 | (VAR_5 << 8));
 }

 return (0);
}
