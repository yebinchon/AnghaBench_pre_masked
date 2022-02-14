
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sc_dev; } ;
struct i2s_softc {TYPE_1__ aoa; } ;
typedef int device_t ;
struct TYPE_4__ {struct i2s_softc* i2s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__** VAR_2 ;
 int FUNC_2 (struct i2s_softc*) ;
 int FUNC_3 (struct i2s_softc*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(void *VAR_6)
{
 struct i2s_softc *VAR_7 = VAR_6;
 device_t VAR_8;
 int VAR_9;

 VAR_8 = VAR_7->aoa.sc_dev;


 FUNC_2(VAR_7);


 if (VAR_4)
  FUNC_4(VAR_8, VAR_5, VAR_4);


 FUNC_3(VAR_7);


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  if (VAR_2[VAR_9])
   VAR_2[VAR_9]->i2s = VAR_7;

 FUNC_0(VAR_3);
 FUNC_1(VAR_3, VAR_1);
}
