
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct cs4231_softc {int dummy; } ;


 int FUNC_0 (struct cs4231_softc*) ;
 int FUNC_1 (struct cs4231_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_2 (struct cs4231_softc*,int ) ;
 int FUNC_3 (struct cs4231_softc*,int ,int) ;
 struct cs4231_softc* FUNC_4 (struct snd_mixer*) ;

__attribute__((used)) static u_int32_t
FUNC_5(struct snd_mixer *VAR_6, u_int32_t VAR_7)
{
 struct cs4231_softc *VAR_8;
 u_int8_t VAR_9;

 VAR_8 = FUNC_4(VAR_6);
 switch (VAR_7) {
 case 129:
  VAR_9 = VAR_1;
  break;

 case 130:
  VAR_9 = VAR_0;
  break;

 case 128:
 default:
  VAR_9 = VAR_3;
  VAR_7 = 128;
  break;
 }
 FUNC_0(VAR_8);
 FUNC_3(VAR_8, VAR_4,
     (FUNC_2(VAR_8, VAR_4) & VAR_2) | VAR_9);
 FUNC_3(VAR_8, VAR_5,
     (FUNC_2(VAR_8, VAR_5) & VAR_2) | VAR_9);
 FUNC_1(VAR_8);

 return (VAR_7);
}
