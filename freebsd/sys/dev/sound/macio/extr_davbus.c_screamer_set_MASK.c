
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct davbus_softc {int mutex; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

 struct davbus_softc* FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct davbus_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct snd_mixer *VAR_2, unsigned VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 struct davbus_softc *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = ((100 - VAR_4) * 15 / 100) & 0xf;
 VAR_8 = ((100 - VAR_5) * 15 / 100) & 0xf;
 FUNC_0(("volume %d %d\n", VAR_7, VAR_8));

 VAR_6 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 128:
  FUNC_2(&VAR_6->mutex);
  FUNC_4(VAR_6, VAR_0, (VAR_7 << 6) |
      VAR_8);
  FUNC_4(VAR_6, VAR_1, (VAR_7 << 6) |
      VAR_8);
  FUNC_3(&VAR_6->mutex);

  return (VAR_4 | (VAR_5 << 8));
 }

 return (0);
}
