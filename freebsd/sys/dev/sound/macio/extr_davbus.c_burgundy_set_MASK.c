
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct davbus_softc {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;

 int FUNC_1 (struct davbus_softc*,int ,int) ;
 struct davbus_softc* FUNC_2 (struct snd_mixer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct snd_mixer *VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
 struct davbus_softc *VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = ((100 - VAR_7) * 15 / 100) & 0xf;
 VAR_11 = ((100 - VAR_8) * 15 / 100) & 0xf;
 FUNC_0(("volume %d %d\n", VAR_10, VAR_11));

 VAR_9 = FUNC_2(VAR_5);

 switch (VAR_6) {
 case 128:
  FUNC_3(&VAR_9->mutex);

  FUNC_1(VAR_9, VAR_0, VAR_10);
  FUNC_1(VAR_9, VAR_1, (VAR_11 << 4) | VAR_10);
  FUNC_1(VAR_9, VAR_2, (VAR_11 << 4) | VAR_10);
  FUNC_1(VAR_9, VAR_3, (VAR_11 << 4) | VAR_10);
  FUNC_1(VAR_9, VAR_4, VAR_10);

  FUNC_4(&VAR_9->mutex);

  return (VAR_7 | (VAR_8 << 8));
 }

 return (0);
}
