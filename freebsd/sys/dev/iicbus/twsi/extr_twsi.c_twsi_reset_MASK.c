
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
typedef size_t u_char ;
struct twsi_softc {int mutex; int reg_control; int reg_baud_rate; int reg_soft_reset; TYPE_1__* baud_rate; int iicbus; } ;
typedef int device_t ;
struct TYPE_2__ {int param; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,size_t) ;




 int VAR_0 ;
 int FUNC_2 (struct twsi_softc*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct twsi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct twsi_softc*,int ,int*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1, u_char VAR_2, u_char VAR_3, u_char *VAR_4)
{
 struct twsi_softc *VAR_5;
 uint32_t VAR_6;




 VAR_5 = FUNC_4(VAR_1);






  switch (VAR_2) {
  case 129:
  case 131:
   VAR_6 = VAR_5->baud_rate[VAR_2].param;
   FUNC_3(VAR_1, "Using IIC_FAST mode with speed param=%x\n", VAR_6);
   break;
  case 130:
  case 128:
  default:
   VAR_6 = VAR_5->baud_rate[131].param;
   FUNC_3(VAR_1, "Using IIC_FASTEST/UNKNOWN mode with speed param=%x\n", VAR_6);
   break;
  }




 FUNC_3(VAR_1, "Using clock param=%x\n", VAR_6);

 FUNC_5(&VAR_5->mutex);
 FUNC_2(VAR_5, VAR_5->reg_soft_reset, 0x0);
 FUNC_2(VAR_5, VAR_5->reg_baud_rate, VAR_6);
 FUNC_2(VAR_5, VAR_5->reg_control, VAR_0);
 FUNC_0(1000);
 FUNC_6(&VAR_5->mutex);

 return (0);
}
