
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct viapm_softc {int base; int iorid; int type; } ;
typedef int device_t ;


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

 int FUNC_0 (int ,int ,int ,int,int) ;
 int FUNC_1 (struct viapm_softc*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_11)
{
 struct viapm_softc *VAR_12 = (struct viapm_softc *)FUNC_2(VAR_11);
 u_int32_t VAR_13;
 u_int16_t VAR_14;
 u_int8_t VAR_15;

 switch (FUNC_5(VAR_11)) {
 case 128:

  FUNC_1(VAR_12, sizeof(struct viapm_softc));

  VAR_13 = FUNC_6(VAR_11, VAR_8, 1);
  switch (VAR_13) {
  case 131:
   VAR_12->type = VAR_9;
   VAR_12->iorid = VAR_4;


   VAR_14 = FUNC_6(VAR_11, VAR_3, 2);
   FUNC_7(VAR_11, VAR_3, VAR_14 | 0x1, 2);
   break;

  case 130:
  case 129:
  default:
   VAR_12->type = VAR_10;
   VAR_12->iorid = VAR_6;


   VAR_15 = FUNC_6(VAR_11, VAR_5, 1);
   FUNC_7(VAR_11, VAR_5, VAR_15 | 0x80, 1);
   break;
  }

  VAR_12->base = FUNC_6(VAR_11, VAR_12->iorid, 4) &
    VAR_7;





  if (FUNC_0(VAR_11, VAR_2, VAR_12->iorid,
       VAR_12->base, 256)) {
   FUNC_3(VAR_11, "could not set bus resource\n");
   return VAR_1;
  }
  FUNC_4(VAR_11, "VIA VT82C586B Power Management Unit");
  return (VAR_0);

 default:
  break;
 }

 return VAR_1;
}
