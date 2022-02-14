
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
 int FUNC_0 (int ,int ) ;
 struct davbus_softc* FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct snd_mixer*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct davbus_softc*,int ) ;
 int FUNC_6 (struct davbus_softc*,int ) ;
 int FUNC_7 (struct davbus_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct snd_mixer *VAR_9)
{
 struct davbus_softc *VAR_10;

 VAR_10 = FUNC_1(VAR_9);

 VAR_10->read_status = FUNC_5;
 VAR_10->set_outputs = FUNC_6;

 FUNC_3(&VAR_10->mutex);

 FUNC_7(VAR_10, VAR_1, VAR_7 |
     VAR_6);

 FUNC_6(VAR_10, FUNC_5(VAR_10,
     FUNC_0(VAR_10->reg, VAR_0)));

 FUNC_7(VAR_10, VAR_2, 0);
 FUNC_7(VAR_10, VAR_3, 0);
 FUNC_7(VAR_10, VAR_4, 0);
 FUNC_7(VAR_10, VAR_5, 0);

 FUNC_4(&VAR_10->mutex);

 FUNC_2(VAR_9, VAR_8);

 return (0);
}
