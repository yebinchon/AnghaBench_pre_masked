
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct viapm_softc {int base; int iorid; void* type; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_12)
{
 struct viapm_softc *VAR_13 = (struct viapm_softc *)FUNC_1(VAR_12);



 u_int32_t VAR_14;
 char *VAR_15;

 switch (FUNC_4(VAR_12)) {
 case 135:
  VAR_15 = "VIA VT82C596A Power Management Unit";
  VAR_13->type = VAR_8;
  VAR_14 = VAR_5;
  goto viapro;

 case 134:
  VAR_15 = "VIA VT82C596B Power Management Unit";
  VAR_13->type = VAR_8;
  VAR_14 = VAR_5;
  goto viapro;

 case 133:
  VAR_15 = "VIA VT82C686A Power Management Unit";
  VAR_13->type = VAR_9;
  VAR_14 = VAR_5;
  goto viapro;

 case 131:
 case 132:
  VAR_15 = "VIA VT8233 Power Management Unit";
  VAR_13->type = VAR_10;
  VAR_14 = VAR_3;
  goto viapro;

 case 130:
  VAR_15 = "VIA VT8235 Power Management Unit";
  VAR_13->type = VAR_10;
  VAR_14 = VAR_3;
  goto viapro;

 case 129:
  VAR_15 = "VIA VT8237 Power Management Unit";
  VAR_13->type = VAR_10;
  VAR_14 = VAR_3;
  goto viapro;

 case 128:
  VAR_15 = "VIA CX700 Power Management Unit";
  VAR_13->type = VAR_10;
  VAR_14 = VAR_3;
  goto viapro;

 viapro:
  VAR_13->base = FUNC_5(VAR_12, VAR_14, 4) & VAR_6;





  VAR_13->iorid = VAR_14;
  if (FUNC_0(VAR_12, VAR_2, VAR_13->iorid,
         VAR_13->base, 16)) {
   FUNC_2(VAR_12, "could not set bus resource 0x%x\n",
     VAR_13->base);
   return VAR_1;
  }

  if (VAR_11) {
   FUNC_2(VAR_12, "SMBus I/O base at 0x%x\n", VAR_13->base);
  }

  FUNC_3(VAR_12, VAR_15);
  return (VAR_0);

 default:
  break;
 }

 return VAR_1;
}
