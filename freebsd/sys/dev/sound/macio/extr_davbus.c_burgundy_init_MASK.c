
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct davbus_softc {int mutex; int reg; int (* set_outputs ) (struct davbus_softc*,int ) ;int (* read_status ) (struct davbus_softc*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct davbus_softc*,int ) ;
 int FUNC_1 (struct davbus_softc*,int ) ;
 int FUNC_2 (struct davbus_softc*,int,int) ;
 int FUNC_3 (int ,int ) ;
 struct davbus_softc* FUNC_4 (struct snd_mixer*) ;
 int FUNC_5 (struct snd_mixer*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct snd_mixer *VAR_23)
{
 struct davbus_softc *VAR_24;

 VAR_24 = FUNC_4(VAR_23);

 VAR_24->read_status = FUNC_0;
 VAR_24->set_outputs = FUNC_1;
 FUNC_6(&VAR_24->mutex);

 FUNC_2(VAR_24, 0x16700, 0x40);

 FUNC_2(VAR_24, VAR_4, 0);
 FUNC_2(VAR_24, VAR_5, 0);
 FUNC_2(VAR_24, VAR_6, VAR_8);
 FUNC_2(VAR_24, VAR_7, 0);

 FUNC_2(VAR_24, VAR_19, VAR_12 |
     VAR_13);

 FUNC_2(VAR_24, VAR_20, VAR_0);


 FUNC_2(VAR_24, VAR_9, VAR_11);
 FUNC_2(VAR_24, VAR_10, VAR_11);
 FUNC_2(VAR_24, VAR_14, VAR_18);
 FUNC_2(VAR_24, VAR_15, VAR_18);
 FUNC_2(VAR_24, VAR_16, VAR_18);
 FUNC_2(VAR_24, VAR_17, VAR_18);
 FUNC_2(VAR_24, VAR_1, VAR_3);
 FUNC_2(VAR_24, VAR_2, VAR_3);

 FUNC_1(VAR_24, FUNC_0(VAR_24,
     FUNC_3(VAR_24->reg, VAR_21)));

 FUNC_7(&VAR_24->mutex);

 FUNC_5(VAR_23, VAR_22);

 return (0);
}
